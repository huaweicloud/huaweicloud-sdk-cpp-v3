

#include "huaweicloud/vod/v1/model/CreateObjectProcessTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateObjectProcessTaskRequest::CreateObjectProcessTaskRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

CreateObjectProcessTaskRequest::~CreateObjectProcessTaskRequest() = default;

void CreateObjectProcessTaskRequest::validate()
{
}

web::json::value CreateObjectProcessTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateObjectProcessTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ObjectProcessReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateObjectProcessTaskRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateObjectProcessTaskRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateObjectProcessTaskRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateObjectProcessTaskRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

ObjectProcessReq CreateObjectProcessTaskRequest::getBody() const
{
    return body_;
}

void CreateObjectProcessTaskRequest::setBody(const ObjectProcessReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateObjectProcessTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateObjectProcessTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


