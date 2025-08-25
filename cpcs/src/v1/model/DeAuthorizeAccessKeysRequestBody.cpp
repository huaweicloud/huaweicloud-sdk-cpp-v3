

#include "huaweicloud/cpcs/v1/model/DeAuthorizeAccessKeysRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




DeAuthorizeAccessKeysRequestBody::DeAuthorizeAccessKeysRequestBody()
{
    accessKeyIdsIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

DeAuthorizeAccessKeysRequestBody::~DeAuthorizeAccessKeysRequestBody() = default;

void DeAuthorizeAccessKeysRequestBody::validate()
{
}

web::json::value DeAuthorizeAccessKeysRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessKeyIdsIsSet_) {
        val[utility::conversions::to_string_t("access_key_ids")] = ModelBase::toJson(accessKeyIds_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool DeAuthorizeAccessKeysRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_key_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_key_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKeyIds(refVal);
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


std::vector<std::string>& DeAuthorizeAccessKeysRequestBody::getAccessKeyIds()
{
    return accessKeyIds_;
}

void DeAuthorizeAccessKeysRequestBody::setAccessKeyIds(const std::vector<std::string>& value)
{
    accessKeyIds_ = value;
    accessKeyIdsIsSet_ = true;
}

bool DeAuthorizeAccessKeysRequestBody::accessKeyIdsIsSet() const
{
    return accessKeyIdsIsSet_;
}

void DeAuthorizeAccessKeysRequestBody::unsetaccessKeyIds()
{
    accessKeyIdsIsSet_ = false;
}

std::string DeAuthorizeAccessKeysRequestBody::getAppId() const
{
    return appId_;
}

void DeAuthorizeAccessKeysRequestBody::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool DeAuthorizeAccessKeysRequestBody::appIdIsSet() const
{
    return appIdIsSet_;
}

void DeAuthorizeAccessKeysRequestBody::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


