

#include "huaweicloud/cpcs/v1/model/DeleteAccessKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




DeleteAccessKeyRequest::DeleteAccessKeyRequest()
{
    accessKeyId_ = "";
    accessKeyIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

DeleteAccessKeyRequest::~DeleteAccessKeyRequest() = default;

void DeleteAccessKeyRequest::validate()
{
}

web::json::value DeleteAccessKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessKeyIdIsSet_) {
        val[utility::conversions::to_string_t("access_key_id")] = ModelBase::toJson(accessKeyId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool DeleteAccessKeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    return ok;
}


std::string DeleteAccessKeyRequest::getAccessKeyId() const
{
    return accessKeyId_;
}

void DeleteAccessKeyRequest::setAccessKeyId(const std::string& value)
{
    accessKeyId_ = value;
    accessKeyIdIsSet_ = true;
}

bool DeleteAccessKeyRequest::accessKeyIdIsSet() const
{
    return accessKeyIdIsSet_;
}

void DeleteAccessKeyRequest::unsetaccessKeyId()
{
    accessKeyIdIsSet_ = false;
}

std::string DeleteAccessKeyRequest::getAppId() const
{
    return appId_;
}

void DeleteAccessKeyRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool DeleteAccessKeyRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void DeleteAccessKeyRequest::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


