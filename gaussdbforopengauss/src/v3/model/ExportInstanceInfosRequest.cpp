

#include "huaweicloud/gaussdbforopengauss/v3/model/ExportInstanceInfosRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExportInstanceInfosRequest::ExportInstanceInfosRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ExportInstanceInfosRequest::~ExportInstanceInfosRequest() = default;

void ExportInstanceInfosRequest::validate()
{
}

web::json::value ExportInstanceInfosRequest::toJson() const
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
bool ExportInstanceInfosRequest::fromJson(const web::json::value& val)
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
            ExportInstanceInfosRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExportInstanceInfosRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExportInstanceInfosRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExportInstanceInfosRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExportInstanceInfosRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ExportInstanceInfosRequestBody ExportInstanceInfosRequest::getBody() const
{
    return body_;
}

void ExportInstanceInfosRequest::setBody(const ExportInstanceInfosRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportInstanceInfosRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportInstanceInfosRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


