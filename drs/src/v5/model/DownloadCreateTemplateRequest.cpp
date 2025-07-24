

#include "huaweicloud/drs/v5/model/DownloadCreateTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DownloadCreateTemplateRequest::DownloadCreateTemplateRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

DownloadCreateTemplateRequest::~DownloadCreateTemplateRequest() = default;

void DownloadCreateTemplateRequest::validate()
{
}

web::json::value DownloadCreateTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DownloadCreateTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ExportFilesReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DownloadCreateTemplateRequest::getXLanguage() const
{
    return xLanguage_;
}

void DownloadCreateTemplateRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DownloadCreateTemplateRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DownloadCreateTemplateRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ExportFilesReq DownloadCreateTemplateRequest::getBody() const
{
    return body_;
}

void DownloadCreateTemplateRequest::setBody(const ExportFilesReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DownloadCreateTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DownloadCreateTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


