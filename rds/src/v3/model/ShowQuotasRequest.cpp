

#include "huaweicloud/rds/v3/model/ShowQuotasRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowQuotasRequest::ShowQuotasRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowQuotasRequest::~ShowQuotasRequest() = default;

void ShowQuotasRequest::validate()
{
}

web::json::value ShowQuotasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}

bool ShowQuotasRequest::fromJson(const web::json::value& val)
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
    return ok;
}

std::string ShowQuotasRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowQuotasRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowQuotasRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowQuotasRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


