

#include "huaweicloud/vod/v1/model/CreateExtractAudioTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateExtractAudioTaskRequest::CreateExtractAudioTaskRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

CreateExtractAudioTaskRequest::~CreateExtractAudioTaskRequest() = default;

void CreateExtractAudioTaskRequest::validate()
{
}

web::json::value CreateExtractAudioTaskRequest::toJson() const
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

bool CreateExtractAudioTaskRequest::fromJson(const web::json::value& val)
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
            ExtractAudioTaskReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateExtractAudioTaskRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateExtractAudioTaskRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateExtractAudioTaskRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateExtractAudioTaskRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

ExtractAudioTaskReq CreateExtractAudioTaskRequest::getBody() const
{
    return body_;
}

void CreateExtractAudioTaskRequest::setBody(const ExtractAudioTaskReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateExtractAudioTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateExtractAudioTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


