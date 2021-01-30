# 3.0.4-beta 2021-01-30
## HuaweiCloud SDK ECS
- ### Features
    - None
- ### Bug Fix
    - None
- ### Change
    - Change interface name from `UpdateAutoTerminateTimeServer` to `UpdateServerAutoTerminateTime`.

## HuaweiCloud SDK EVS
- ### Features
    - None
- ### Bug Fix
    - None
- ### Change
    - Interface `CinderCreateVolume` is supported to specify the id of dedicated storage pool using property `OS-SCH-HNT:scheduler_hints`.
    - Modify property type of `allocated` of class `QuotaDetails` from `String` to `Integer`.


# 3.0.3-beta 2021-01-25
## HuaweiCloud SDK Core
- ### Features
    - None
- ### Bug Fix
    - Support using default config.
- ### Change
    - The default value of `ConnectionTimeout` is set to 60 seconds.
    - The default value of `ReadTimeout` is set to 120 seconds.

## HuaweiCloud SDK ECS
- ### Features
    - Support more interface: UpdateAutoTerminateTimeServer.
- ### Bug Fix
    - None
- ### Change
    - None


# 3.0.2-beta 2021-01-15
## HuaweiCloud SDK Core
- ### Features
    - Support multiple versions of SDK.
- ### Bug Fix
    - None
- ### Change
    - None

# 3.0.1-beta 2020-12-31
## First Release
- ### Supported Services
    - `Elastic Cloud Server`(ECS) service.
    - `Elastic IP`(EIP) service.
    - `Virtual Private Cloud`(VPC) service.
