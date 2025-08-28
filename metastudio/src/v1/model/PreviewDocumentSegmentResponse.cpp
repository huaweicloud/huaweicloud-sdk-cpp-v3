

#include "huaweicloud/metastudio/v1/model/PreviewDocumentSegmentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




PreviewDocumentSegmentResponse::PreviewDocumentSegmentResponse()
{
    bodyIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

PreviewDocumentSegmentResponse::~PreviewDocumentSegmentResponse() = default;

void PreviewDocumentSegmentResponse::validate()
{
}

web::json::value PreviewDocumentSegmentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool PreviewDocumentSegmentResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<DocumentSegmentInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<DocumentSegmentInfo>& PreviewDocumentSegmentResponse::getBody()
{
    return body_;
}

void PreviewDocumentSegmentResponse::setBody(const std::vector<DocumentSegmentInfo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PreviewDocumentSegmentResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void PreviewDocumentSegmentResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string PreviewDocumentSegmentResponse::getXRequestId() const
{
    return xRequestId_;
}

void PreviewDocumentSegmentResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool PreviewDocumentSegmentResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void PreviewDocumentSegmentResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


