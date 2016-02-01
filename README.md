Qt app template
===============

This is a simple Qt application template that illustrates how to share
the same backend for multiple user interfaces. The template comes with
one desktop-oriented UI based on Qt Widgets, and another mobile-oriented
UI based on Qt Quick.

Structure
- /features
  - build system related qmake project feature (.prf) files
- /src/backend:
  - a shared backend library example
- /src/plugins:
  - an example plugin
- /src/quick:
  - a mobile-oriented UI based on Qt Quick
- /src/shared:
  - shared code included into both UIs
- /src/widgets:
  - a desktop-oriented UI based on Qt Widgets
- /tests/auto:
  - an auto test example testing the backend library
