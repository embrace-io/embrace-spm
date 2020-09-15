// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "Embrace",
    platforms: [
        .iOS(.v9)
    ],
    products: [
        .library(
            name: "Embrace", 
            targets: ["Embrace"])
    ],
    targets: [
        .binaryTarget(
            name: "Embrace", 
            path: "Embrace.xcframework")
    ])