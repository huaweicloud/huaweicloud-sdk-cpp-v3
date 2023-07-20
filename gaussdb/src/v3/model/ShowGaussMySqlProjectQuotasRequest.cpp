

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlProjectQuotasRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlProjectQuotasRequest::ShowGaussMySqlProjectQuotasRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ShowGaussMySqlProjectQuotasRequest::~ShowGaussMySqlProjectQuotasRequest() = default;

void ShowGaussMySqlProjectQuotasRequest::validate()
{
}

web::json::value ShowGaussMySqlProjectQuotasRequest::toJson() const
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

bool ShowGaussMySqlProjectQuotasRequest::fromJson(const web::json::value& val)
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

std::string ShowGaussMySqlProjectQuotasRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowGaussMySqlProjectQuotasRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowGaussMySqlProjectQuotasRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowGaussMySqlProjectQuotasRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowGaussMySqlProjectQuotasRequest::getType() const
{
    return type_;
}

void ShowGaussMySqlProjectQuotasRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowGaussMySqlProjectQuotasRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowGaussMySqlProjectQuotasRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


