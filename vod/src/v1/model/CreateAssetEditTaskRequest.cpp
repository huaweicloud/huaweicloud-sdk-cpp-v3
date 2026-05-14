

#include "huaweicloud/vod/v1/model/CreateAssetEditTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateAssetEditTaskRequest::CreateAssetEditTaskRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAssetEditTaskRequest::~CreateAssetEditTaskRequest() = default;

void CreateAssetEditTaskRequest::validate()
{
}

web::json::value CreateAssetEditTaskRequest::toJson() const
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
bool CreateAssetEditTaskRequest::fromJson(const web::json::value& val)
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
            CreateAssetEditTaskReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAssetEditTaskRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateAssetEditTaskRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateAssetEditTaskRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateAssetEditTaskRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

CreateAssetEditTaskReq CreateAssetEditTaskRequest::getBody() const
{
    return body_;
}

void CreateAssetEditTaskRequest::setBody(const CreateAssetEditTaskReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAssetEditTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAssetEditTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


