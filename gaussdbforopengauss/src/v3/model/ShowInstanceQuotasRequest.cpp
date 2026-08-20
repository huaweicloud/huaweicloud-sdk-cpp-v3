

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowInstanceQuotasRequest::ShowInstanceQuotasRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowInstanceQuotasRequest::~ShowInstanceQuotasRequest() = default;

void ShowInstanceQuotasRequest::validate()
{
}

web::json::value ShowInstanceQuotasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowInstanceQuotasRequest::fromJson(const web::json::value& val)
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


std::string ShowInstanceQuotasRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowInstanceQuotasRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowInstanceQuotasRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowInstanceQuotasRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


