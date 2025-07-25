

#include "huaweicloud/drs/v5/model/ExportCreationTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ExportCreationTemplateRequest::ExportCreationTemplateRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ExportCreationTemplateRequest::~ExportCreationTemplateRequest() = default;

void ExportCreationTemplateRequest::validate()
{
}

web::json::value ExportCreationTemplateRequest::toJson() const
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
bool ExportCreationTemplateRequest::fromJson(const web::json::value& val)
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
            ExportJobsTemplateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExportCreationTemplateRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExportCreationTemplateRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExportCreationTemplateRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExportCreationTemplateRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ExportJobsTemplateReq ExportCreationTemplateRequest::getBody() const
{
    return body_;
}

void ExportCreationTemplateRequest::setBody(const ExportJobsTemplateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportCreationTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportCreationTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


