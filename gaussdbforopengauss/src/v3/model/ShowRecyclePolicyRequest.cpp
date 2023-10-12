

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowRecyclePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowRecyclePolicyRequest::ShowRecyclePolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowRecyclePolicyRequest::~ShowRecyclePolicyRequest() = default;

void ShowRecyclePolicyRequest::validate()
{
}

web::json::value ShowRecyclePolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowRecyclePolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowRecyclePolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowRecyclePolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowRecyclePolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowRecyclePolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


