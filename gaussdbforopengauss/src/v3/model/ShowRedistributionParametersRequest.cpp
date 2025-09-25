

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowRedistributionParametersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowRedistributionParametersRequest::ShowRedistributionParametersRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowRedistributionParametersRequest::~ShowRedistributionParametersRequest() = default;

void ShowRedistributionParametersRequest::validate()
{
}

web::json::value ShowRedistributionParametersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowRedistributionParametersRequest::fromJson(const web::json::value& val)
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


std::string ShowRedistributionParametersRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowRedistributionParametersRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowRedistributionParametersRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowRedistributionParametersRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


