

#include "huaweicloud/cfw/v1/model/ExportIpBlacklistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ExportIpBlacklistResponse::ExportIpBlacklistResponse()
{
    body_ = "";
    bodyIsSet_ = false;
    contentDisposition_ = "";
    contentDispositionIsSet_ = false;
    contentLength_ = 0;
    contentLengthIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ExportIpBlacklistResponse::~ExportIpBlacklistResponse() = default;

void ExportIpBlacklistResponse::validate()
{
}

web::json::value ExportIpBlacklistResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(contentDispositionIsSet_) {
        val[utility::conversions::to_string_t("Content-Disposition")] = ModelBase::toJson(contentDisposition_);
    }
    if(contentLengthIsSet_) {
        val[utility::conversions::to_string_t("Content-Length")] = ModelBase::toJson(contentLength_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ExportIpBlacklistResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("Content-Disposition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Disposition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentDisposition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ExportIpBlacklistResponse::getBody() const
{
    return body_;
}

void ExportIpBlacklistResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportIpBlacklistResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportIpBlacklistResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ExportIpBlacklistResponse::getContentDisposition() const
{
    return contentDisposition_;
}

void ExportIpBlacklistResponse::setContentDisposition(const std::string& value)
{
    contentDisposition_ = value;
    contentDispositionIsSet_ = true;
}

bool ExportIpBlacklistResponse::contentDispositionIsSet() const
{
    return contentDispositionIsSet_;
}

void ExportIpBlacklistResponse::unsetcontentDisposition()
{
    contentDispositionIsSet_ = false;
}

int32_t ExportIpBlacklistResponse::getContentLength() const
{
    return contentLength_;
}

void ExportIpBlacklistResponse::setContentLength(int32_t value)
{
    contentLength_ = value;
    contentLengthIsSet_ = true;
}

bool ExportIpBlacklistResponse::contentLengthIsSet() const
{
    return contentLengthIsSet_;
}

void ExportIpBlacklistResponse::unsetcontentLength()
{
    contentLengthIsSet_ = false;
}

std::string ExportIpBlacklistResponse::getContentType() const
{
    return contentType_;
}

void ExportIpBlacklistResponse::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ExportIpBlacklistResponse::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ExportIpBlacklistResponse::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


