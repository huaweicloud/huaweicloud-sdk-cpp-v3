

#include "huaweicloud/cpcs/v1/model/BatchEnableAccessKeysRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




BatchEnableAccessKeysRequest::BatchEnableAccessKeysRequest()
{
    appId_ = "";
    appIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchEnableAccessKeysRequest::~BatchEnableAccessKeysRequest() = default;

void BatchEnableAccessKeysRequest::validate()
{
}

web::json::value BatchEnableAccessKeysRequest::toJson() const
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
bool BatchEnableAccessKeysRequest::fromJson(const web::json::value& val)
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


std::string BatchEnableAccessKeysRequest::getAppId() const
{
    return appId_;
}

void BatchEnableAccessKeysRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool BatchEnableAccessKeysRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void BatchEnableAccessKeysRequest::unsetappId()
{
    appIdIsSet_ = false;
}

BatchAccessKeysRequestBody BatchEnableAccessKeysRequest::getBody() const
{
    return body_;
}

void BatchEnableAccessKeysRequest::setBody(const BatchAccessKeysRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchEnableAccessKeysRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchEnableAccessKeysRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


