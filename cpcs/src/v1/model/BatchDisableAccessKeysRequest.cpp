

#include "huaweicloud/cpcs/v1/model/BatchDisableAccessKeysRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




BatchDisableAccessKeysRequest::BatchDisableAccessKeysRequest()
{
    appId_ = "";
    appIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDisableAccessKeysRequest::~BatchDisableAccessKeysRequest() = default;

void BatchDisableAccessKeysRequest::validate()
{
}

web::json::value BatchDisableAccessKeysRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDisableAccessKeysRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchAccessKeysRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDisableAccessKeysRequest::getAppId() const
{
    return appId_;
}

void BatchDisableAccessKeysRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool BatchDisableAccessKeysRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void BatchDisableAccessKeysRequest::unsetappId()
{
    appIdIsSet_ = false;
}

BatchAccessKeysRequestBody BatchDisableAccessKeysRequest::getBody() const
{
    return body_;
}

void BatchDisableAccessKeysRequest::setBody(const BatchAccessKeysRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDisableAccessKeysRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDisableAccessKeysRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


