

#include "huaweicloud/vod/v1/model/DeleteTranscodeProductRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




DeleteTranscodeProductRequest::DeleteTranscodeProductRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteTranscodeProductRequest::~DeleteTranscodeProductRequest() = default;

void DeleteTranscodeProductRequest::validate()
{
}

web::json::value DeleteTranscodeProductRequest::toJson() const
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
bool DeleteTranscodeProductRequest::fromJson(const web::json::value& val)
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
            DeleteTranscodeProductReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteTranscodeProductRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteTranscodeProductRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteTranscodeProductRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteTranscodeProductRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

DeleteTranscodeProductReq DeleteTranscodeProductRequest::getBody() const
{
    return body_;
}

void DeleteTranscodeProductRequest::setBody(const DeleteTranscodeProductReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteTranscodeProductRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteTranscodeProductRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


