

#include "huaweicloud/rds/v3/model/ValidateInstanceConnectionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ValidateInstanceConnectionRequestBody::ValidateInstanceConnectionRequestBody()
{
    targetInstanceId_ = "";
    targetInstanceIdIsSet_ = false;
    userInfoIsSet_ = false;
}

ValidateInstanceConnectionRequestBody::~ValidateInstanceConnectionRequestBody() = default;

void ValidateInstanceConnectionRequestBody::validate()
{
}

web::json::value ValidateInstanceConnectionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("target_instance_id")] = ModelBase::toJson(targetInstanceId_);
    }
    if(userInfoIsSet_) {
        val[utility::conversions::to_string_t("user_info")] = ModelBase::toJson(userInfo_);
    }

    return val;
}
bool ValidateInstanceConnectionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_info"));
        if(!fieldValue.is_null())
        {
            ValidateConnectionUserInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserInfo(refVal);
        }
    }
    return ok;
}


std::string ValidateInstanceConnectionRequestBody::getTargetInstanceId() const
{
    return targetInstanceId_;
}

void ValidateInstanceConnectionRequestBody::setTargetInstanceId(const std::string& value)
{
    targetInstanceId_ = value;
    targetInstanceIdIsSet_ = true;
}

bool ValidateInstanceConnectionRequestBody::targetInstanceIdIsSet() const
{
    return targetInstanceIdIsSet_;
}

void ValidateInstanceConnectionRequestBody::unsettargetInstanceId()
{
    targetInstanceIdIsSet_ = false;
}

ValidateConnectionUserInfo ValidateInstanceConnectionRequestBody::getUserInfo() const
{
    return userInfo_;
}

void ValidateInstanceConnectionRequestBody::setUserInfo(const ValidateConnectionUserInfo& value)
{
    userInfo_ = value;
    userInfoIsSet_ = true;
}

bool ValidateInstanceConnectionRequestBody::userInfoIsSet() const
{
    return userInfoIsSet_;
}

void ValidateInstanceConnectionRequestBody::unsetuserInfo()
{
    userInfoIsSet_ = false;
}

}
}
}
}
}


