

#include "huaweicloud/drs/v5/model/ExportJobListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ExportJobListRequest::ExportJobListRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ExportJobListRequest::~ExportJobListRequest() = default;

void ExportJobListRequest::validate()
{
}

web::json::value ExportJobListRequest::toJson() const
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
bool ExportJobListRequest::fromJson(const web::json::value& val)
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
            ExportJobsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExportJobListRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExportJobListRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExportJobListRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExportJobListRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ExportJobsReq ExportJobListRequest::getBody() const
{
    return body_;
}

void ExportJobListRequest::setBody(const ExportJobsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportJobListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportJobListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


