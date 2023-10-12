

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowProjectQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowProjectQuotasRequest::ShowProjectQuotasRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ShowProjectQuotasRequest::~ShowProjectQuotasRequest() = default;

void ShowProjectQuotasRequest::validate()
{
}

web::json::value ShowProjectQuotasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ShowProjectQuotasRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ShowProjectQuotasRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowProjectQuotasRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowProjectQuotasRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowProjectQuotasRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowProjectQuotasRequest::getType() const
{
    return type_;
}

void ShowProjectQuotasRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowProjectQuotasRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowProjectQuotasRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


