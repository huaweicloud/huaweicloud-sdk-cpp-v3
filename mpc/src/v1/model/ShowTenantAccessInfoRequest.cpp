

#include "huaweicloud/mpc/v1/model/ShowTenantAccessInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ShowTenantAccessInfoRequest::ShowTenantAccessInfoRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowTenantAccessInfoRequest::~ShowTenantAccessInfoRequest() = default;

void ShowTenantAccessInfoRequest::validate()
{
}

web::json::value ShowTenantAccessInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("x-language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowTenantAccessInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("x-language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x-language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ShowTenantAccessInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowTenantAccessInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowTenantAccessInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowTenantAccessInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


