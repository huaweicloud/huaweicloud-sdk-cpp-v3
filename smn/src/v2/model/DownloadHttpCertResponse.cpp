

#include "huaweicloud/smn/v2/model/DownloadHttpCertResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DownloadHttpCertResponse::DownloadHttpCertResponse()
{
    body_ = "";
    bodyIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

DownloadHttpCertResponse::~DownloadHttpCertResponse() = default;

void DownloadHttpCertResponse::validate()
{
}

web::json::value DownloadHttpCertResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("content-type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool DownloadHttpCertResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content-type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content-type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string DownloadHttpCertResponse::getBody() const
{
    return body_;
}

void DownloadHttpCertResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DownloadHttpCertResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DownloadHttpCertResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string DownloadHttpCertResponse::getContentType() const
{
    return contentType_;
}

void DownloadHttpCertResponse::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DownloadHttpCertResponse::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DownloadHttpCertResponse::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


