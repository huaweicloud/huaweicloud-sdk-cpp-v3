

#include "huaweicloud/vod/v1/model/CreateEditTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateEditTaskRequest::CreateEditTaskRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

CreateEditTaskRequest::~CreateEditTaskRequest() = default;

void CreateEditTaskRequest::validate()
{
}

web::json::value CreateEditTaskRequest::toJson() const
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
bool CreateEditTaskRequest::fromJson(const web::json::value& val)
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
            CreateEditTaskRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateEditTaskRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateEditTaskRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateEditTaskRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateEditTaskRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

CreateEditTaskRequestBody CreateEditTaskRequest::getBody() const
{
    return body_;
}

void CreateEditTaskRequest::setBody(const CreateEditTaskRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateEditTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateEditTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


