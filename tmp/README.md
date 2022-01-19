![embrace](https://s3.amazonaws.com/embrace-downloads-prod/embrace.png)

[![CocoaPods Compatible](https://img.shields.io/cocoapods/v/EmbraceIO.svg)](https://img.shields.io/cocoapods/v/EmbraceIO.svg)
[![Platform](https://img.shields.io/cocoapods/p/EmbraceIO.svg?style=flat)](https://cocoadocs.org/docsets/EmbraceIO)

# Embrace iOS SDK #

Welcome to the iOS SDK! Embrace helps you monitor the performance and stability of your mobile apps and keep your users happy. We provide unmatched visibility into the experiences your users are having, and give you the information and insights you need to maximize the performance of your app.

To get started, head over to https://docs.embrace.io

Contact us on [Slack](https://embrace-io-community.slack.com/) or at [support@embrace.io](mailto:support@embrace.io)

## Logging guidelines

* Errors for things that customers have an ability to affect and failed because of something they did
* Warnings for things that customers have an ability to affect, but their current action did not lead to an outright failure
* Info for things that are basic normal behavior.
* Debug for things that we are interested in, but is not something that a customer will have much use for, even if it is a critical error.
* Trace for things that we don't want to see in our logs during normal development

