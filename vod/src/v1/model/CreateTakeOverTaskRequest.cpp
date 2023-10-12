

#include "huaweicloud/vod/v1/model/CreateTakeOverTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateTakeOverTaskRequest::CreateTakeOverTaskRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTakeOverTaskRequest::~CreateTakeOverTaskRequest() = default;

void CreateTakeOverTaskRequest::validate()
{
}

web::json::value CreateTakeOverTaskRequest::toJson() const
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
bool CreateTakeOverTaskRequest::fromJson(const web::json::value& val)
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
            CreateTakeOverTaskReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTakeOverTaskRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateTakeOverTaskRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateTakeOverTaskRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateTakeOverTaskRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

CreateTakeOverTaskReq CreateTakeOverTaskRequest::getBody() const
{
    return body_;
}

void CreateTakeOverTaskRequest::setBody(const CreateTakeOverTaskReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTakeOverTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTakeOverTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


