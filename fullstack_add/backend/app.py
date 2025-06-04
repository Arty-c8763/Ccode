from flask import Flask, request, jsonify
from flask_cors import CORS

app = Flask(__name__)
CORS(app)

@app.route('/add', methods=['POST'])
def add_numbers():
    data = request.get_json()
    a = data.get('a')
    b = data.get('b')
    try:
        result = float(a) + float(b)
    except (TypeError, ValueError):
        return jsonify({'error': 'Invalid input'}), 400
    return jsonify({'result': result})

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)
