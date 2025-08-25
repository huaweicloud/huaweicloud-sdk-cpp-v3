

#include "huaweicloud/cpcs/v1/model/ShowAccessKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowAccessKeyRequest::ShowAccessKeyRequest()
{
    accessKeyId_ = "";
    accessKeyIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

ShowAccessKeyRequest::~ShowAccessKeyRequest() = default;

void ShowAccessKeyRequest::validate()
{
}

web::json::value ShowAccessKeyRequest::toJson() const
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
bool ShowAccessKeyRequest::fromJson(const web::json::value& val)
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


std::string ShowAccessKeyRequest::getAccessKeyId() const
{
    return accessKeyId_;
}

void ShowAccessKeyRequest::setAccessKeyId(const std::string& value)
{
    accessKeyId_ = value;
    accessKeyIdIsSet_ = true;
}

bool ShowAccessKeyRequest::accessKeyIdIsSet() const
{
    return accessKeyIdIsSet_;
}

void ShowAccessKeyRequest::unsetaccessKeyId()
{
    accessKeyIdIsSet_ = false;
}

std::string ShowAccessKeyRequest::getAppId() const
{
    return appId_;
}

void ShowAccessKeyRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowAccessKeyRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowAccessKeyRequest::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


