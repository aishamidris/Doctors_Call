In line with ALX foundational project requirement, this repository contain code snippet, figma prototype and other files/document for an app named Doctors Call
The app is a work-in-process and consist of a team of three.

https://docs.google.com/document/d/1HkGmyWSALGZ6NKs8ijqhdYtZbFDTljV-PxrufG1XAYs/edit?usp=sharing

Project Proposal:
DoctorsCall - Android Medical Help App
Team:

Aisha Muhammad Idris 	-	DevOps / Project Manager

As a lead Android Developer Aisha will be responsible for project management, task allocation, and overseeing the development process. She will handle the approval of the app's architecture, UI/UX design, and implementation of core functionalities.

Sadiq Abdulmalik    -     Back-end Developer and Database Administrator
As Back-end Developer and Database Administrator Sadiq will focus on the back-end development of the DoctorsCall app, including server-side logic, APIs, and database management. He will ensure seamless data communication and efficient data storage for the app.

Joseph Takpa    -   	  Front-end Developer

Front-end Developer and UI/UX Designer Joseph will work on front-end development, creating a user-friendly interface and ensuring a smooth user experience. He will collaborate with Aisha to design the app's layout and implement UI interactions.

The Rationale for Team Roles:
The chosen roles leverage each team member's expertise and experience. Aisha’s project management skills and background make her suitable for the project manager and lead Android developer role. Sadiq’s understanding of back-end development will be crucial for handling the server-side logic and database. Joseph's UI/UX design skills complement the team, ensuring the app is visually appealing and user-friendly.
Technologies:
Language: Java, will be the primary language for Android app development, as it is the official language supported by the Android platform and provides access to essential libraries and APIs.
Framework: Android Studio will be used as the Integrated Development Environment (IDE) for building and testing the Android app. It offers a rich set of tools and an intuitive interface for Android development.
Database: SQLite will be the embedded database to store user profiles, appointments, and medical event data. SQLite is lightweight, efficient, and well-suited for mobile applications.
Libraries and APIs:
Retrofit: To handle networking and make API requests to fetch medical provider information.
Gson: For JSON parsing, converting JSON data from APIs into Java objects.
Firebase: To handle user authentication and real-time database synchronization.
Trade-offs:
An alternative language for Android development could be Kotlin. Kotlin offers more concise and safer code compared to Java, leading to potentially faster development. However, as this project is intended for C as the primary language, Java was chosen for consistency.
Another option for the database could be using Room, an Android Architecture Component that simplifies database management. The room provides compile-time checks and SQL abstraction, making it easier to work with the database. However, since SQLite fulfills the project's requirements, it was preferred due to its simplicity and direct integration with Android.
Challenge:
The DoctorsCall app aims to solve the problem of providing easy access to professional medical help by enabling users to search for healthcare providers, book appointments, and manage their medical events efficiently.
The app will not solve medical emergencies, as it is intended for non-urgent medical assistance. Users will be encouraged to seek emergency services in critical situations.
The app will help individuals seeking medical assistance, patients managing appointments and medical events, and healthcare providers to connect with their patients.
The project is relevant to any locale where access to healthcare providers and appointments is desired. However, the availability of healthcare providers and the scope of features may vary based on the region.
Risks:
Technical Risks:
Integration with third-party APIs may lead to compatibility issues or data inconsistencies. To mitigate this risk, thorough testing and proper error handling will be implemented during API integration.
The app's performance may be impacted due to a large number of concurrent users or inefficient database queries. Optimizing database operations and using caching techniques will help alleviate this risk.
Non-Technical Risks:
Delays in development due to unforeseen circumstances can impact the project timeline. Regular progress monitoring and open communication within the team will help address such risks promptly.
User adoption and retention may pose a risk if the app's user experience is not satisfactory. Usability testing and gathering user feedback will be essential to refine the app's interface and features.
Infrastructure:
Branching and Merging:
The team will follow the GitFlow branching model, creating feature branches for specific tasks and merging them into the develop branch. Pull requests and code reviews will be used to ensure code quality.
Deployment Strategy:
The app will be deployed to the Google Play Store, making it accessible to Android users. Continuous Integration (CI) pipelines will automate the build process and app distribution.
Data Population:
The app's database will be populated using both user-generated data (e.g., user profiles, appointments) and publicly available data (e.g., medical provider information obtained from APIs).
Testing Approach:
For testing, the team will use the following tools and processes:
Unit Testing: JUnit will be utilized for unit testing to verify the correctness of individual functions and components.
Instrumentation Testing: Android Instrumentation Testing will be employed to test user interactions and app behavior on the device.
User Testing: Real users will be involved in beta testing to provide feedback and identify usability issues.
Existing Solutions:
Zocdoc: Zocdoc is a mobile app that helps users find and book appointments with doctors and specialists. Similar to DoctorsCall, it assists in medical appointment booking and provider search but may differ in the user interface and additional features.
Practo: Practo is another medical assistance app that allows users to find and consult doctors, book appointments, and manage health records. DoctorsCall shares similarities with Practo in terms of appointment booking and medical event management, but each app may have unique features and medical provider databases.
Conclusion:
DoctorsCall is an Android-based medical help app that aims to facilitate the ease of searching for professional medical assistance, booking appointments, and managing medical events. With a competent team equipped with Java as the primary language and a well-thought-out technology stack, we are confident in delivering a user-friendly and efficient app to help users access reliable medical care.



