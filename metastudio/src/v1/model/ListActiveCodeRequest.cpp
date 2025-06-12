

#include "huaweicloud/metastudio/v1/model/ListActiveCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListActiveCodeRequest::ListActiveCodeRequest()
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
    robotId_ = "";
    robotIdIsSet_ = false;
}

ListActiveCodeRequest::~ListActiveCodeRequest() = default;

void ListActiveCodeRequest::validate()
{
}

web::json::value ListActiveCodeRequest::toJson() const
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
    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }

    return val;
}
bool ListActiveCodeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("robot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("robot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRobotId(refVal);
        }
    }
    return ok;
}


std::string ListActiveCodeRequest::getAuthorization() const
{
    return authorization_;
}

void ListActiveCodeRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListActiveCodeRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListActiveCodeRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListActiveCodeRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListActiveCodeRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListActiveCodeRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListActiveCodeRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListActiveCodeRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListActiveCodeRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListActiveCodeRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListActiveCodeRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListActiveCodeRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListActiveCodeRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListActiveCodeRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListActiveCodeRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListActiveCodeRequest::getOffset() const
{
    return offset_;
}

void ListActiveCodeRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListActiveCodeRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListActiveCodeRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListActiveCodeRequest::getLimit() const
{
    return limit_;
}

void ListActiveCodeRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListActiveCodeRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListActiveCodeRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListActiveCodeRequest::getRobotId() const
{
    return robotId_;
}

void ListActiveCodeRequest::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool ListActiveCodeRequest::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void ListActiveCodeRequest::unsetrobotId()
{
    robotIdIsSet_ = false;
}

}
}
}
}
}


