

#include "huaweicloud/cpcs/v1/model/AuthorizeAccessKeysRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




AuthorizeAccessKeysRequestBody::AuthorizeAccessKeysRequestBody()
{
    appId_ = "";
    appIdIsSet_ = false;
    accessKeyIdsIsSet_ = false;
}

AuthorizeAccessKeysRequestBody::~AuthorizeAccessKeysRequestBody() = default;

void AuthorizeAccessKeysRequestBody::validate()
{
}

web::json::value AuthorizeAccessKeysRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(accessKeyIdsIsSet_) {
        val[utility::conversions::to_string_t("access_key_ids")] = ModelBase::toJson(accessKeyIds_);
    }

    return val;
}
bool AuthorizeAccessKeysRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_key_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_key_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKeyIds(refVal);
        }
    }
    return ok;
}


std::string AuthorizeAccessKeysRequestBody::getAppId() const
{
    return appId_;
}

void AuthorizeAccessKeysRequestBody::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AuthorizeAccessKeysRequestBody::appIdIsSet() const
{
    return appIdIsSet_;
}

void AuthorizeAccessKeysRequestBody::unsetappId()
{
    appIdIsSet_ = false;
}

std::vector<std::string>& AuthorizeAccessKeysRequestBody::getAccessKeyIds()
{
    return accessKeyIds_;
}

void AuthorizeAccessKeysRequestBody::setAccessKeyIds(const std::vector<std::string>& value)
{
    accessKeyIds_ = value;
    accessKeyIdsIsSet_ = true;
}

bool AuthorizeAccessKeysRequestBody::accessKeyIdsIsSet() const
{
    return accessKeyIdsIsSet_;
}

void AuthorizeAccessKeysRequestBody::unsetaccessKeyIds()
{
    accessKeyIdsIsSet_ = false;
}

}
}
}
}
}


