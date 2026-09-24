

#include "huaweicloud/rds/v3/model/ShowAvailableCorsVpcsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowAvailableCorsVpcsRequest::ShowAvailableCorsVpcsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowAvailableCorsVpcsRequest::~ShowAvailableCorsVpcsRequest() = default;

void ShowAvailableCorsVpcsRequest::validate()
{
}

web::json::value ShowAvailableCorsVpcsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowAvailableCorsVpcsRequest::fromJson(const web::json::value& val)
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


std::string ShowAvailableCorsVpcsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAvailableCorsVpcsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAvailableCorsVpcsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAvailableCorsVpcsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


