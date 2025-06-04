# Fullstack Adder

This example shows a minimal front-end and Python backend that add two numbers.

## Backend

The backend uses `Flask` to expose an API at `/add`. Install dependencies and run:

```bash
pip install flask flask-cors
python3 backend/app.py
```

The server listens on port 5000.

## Frontend

Open `frontend/index.html` in a browser. Enter two numbers and click **Add** to send a request to the backend and display the result.
