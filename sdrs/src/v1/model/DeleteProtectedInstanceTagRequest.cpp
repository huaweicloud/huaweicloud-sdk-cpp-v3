

#include "huaweicloud/sdrs/v1/model/DeleteProtectedInstanceTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DeleteProtectedInstanceTagRequest::DeleteProtectedInstanceTagRequest()
{
    protectedInstanceId_ = "";
    protectedInstanceIdIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
}

DeleteProtectedInstanceTagRequest::~DeleteProtectedInstanceTagRequest() = default;

void DeleteProtectedInstanceTagRequest::validate()
{
}

web::json::value DeleteProtectedInstanceTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("protected_instance_id")] = ModelBase::toJson(protectedInstanceId_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}
bool DeleteProtectedInstanceTagRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    return ok;
}


std::string DeleteProtectedInstanceTagRequest::getProtectedInstanceId() const
{
    return protectedInstanceId_;
}

void DeleteProtectedInstanceTagRequest::setProtectedInstanceId(const std::string& value)
{
    protectedInstanceId_ = value;
    protectedInstanceIdIsSet_ = true;
}

bool DeleteProtectedInstanceTagRequest::protectedInstanceIdIsSet() const
{
    return protectedInstanceIdIsSet_;
}

void DeleteProtectedInstanceTagRequest::unsetprotectedInstanceId()
{
    protectedInstanceIdIsSet_ = false;
}

std::string DeleteProtectedInstanceTagRequest::getKey() const
{
    return key_;
}

void DeleteProtectedInstanceTagRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeleteProtectedInstanceTagRequest::keyIsSet() const
{
    return keyIsSet_;
}

void DeleteProtectedInstanceTagRequest::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


