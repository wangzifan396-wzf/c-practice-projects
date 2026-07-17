#!/usr/bin/env python3
"""A simple test script."""

import sys
import platform

def main():
    print("Hello from Python!")
    print(f"Python version: {sys.version}")
    print(f"Platform: {platform.platform()}")
    print(f"Working directory: D:\\VS2026_Files\\test_7_16")

    # A quick calculation
    result = sum(range(1, 101))
    print(f"Sum of 1 to 100: {result}")

if __name__ == "__main__":
    main()
