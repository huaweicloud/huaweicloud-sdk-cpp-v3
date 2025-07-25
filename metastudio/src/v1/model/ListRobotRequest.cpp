

#include "huaweicloud/metastudio/v1/model/ListRobotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListRobotRequest::ListRobotRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    roomId_ = "";
    roomIdIsSet_ = false;
    robotType_ = "";
    robotTypeIsSet_ = false;
}

ListRobotRequest::~ListRobotRequest() = default;

void ListRobotRequest::validate()
{
}

web::json::value ListRobotRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(robotTypeIsSet_) {
        val[utility::conversions::to_string_t("robot_type")] = ModelBase::toJson(robotType_);
    }

    return val;
}
bool ListRobotRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("room_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("robot_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("robot_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRobotType(refVal);
        }
    }
    return ok;
}


std::string ListRobotRequest::getAuthorization() const
{
    return authorization_;
}

void ListRobotRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListRobotRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListRobotRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListRobotRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListRobotRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListRobotRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListRobotRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListRobotRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListRobotRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListRobotRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListRobotRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListRobotRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListRobotRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListRobotRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListRobotRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListRobotRequest::getOffset() const
{
    return offset_;
}

void ListRobotRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRobotRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRobotRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRobotRequest::getLimit() const
{
    return limit_;
}

void ListRobotRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRobotRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRobotRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRobotRequest::getRoomId() const
{
    return roomId_;
}

void ListRobotRequest::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool ListRobotRequest::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void ListRobotRequest::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string ListRobotRequest::getRobotType() const
{
    return robotType_;
}

void ListRobotRequest::setRobotType(const std::string& value)
{
    robotType_ = value;
    robotTypeIsSet_ = true;
}

bool ListRobotRequest::robotTypeIsSet() const
{
    return robotTypeIsSet_;
}

void ListRobotRequest::unsetrobotType()
{
    robotTypeIsSet_ = false;
}

}
}
}
}
}


