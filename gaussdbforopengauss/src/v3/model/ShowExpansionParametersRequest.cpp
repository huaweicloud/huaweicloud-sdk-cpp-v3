

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowExpansionParametersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowExpansionParametersRequest::ShowExpansionParametersRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowExpansionParametersRequest::~ShowExpansionParametersRequest() = default;

void ShowExpansionParametersRequest::validate()
{
}

web::json::value ShowExpansionParametersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowExpansionParametersRequest::fromJson(const web::json::value& val)
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


std::string ShowExpansionParametersRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowExpansionParametersRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowExpansionParametersRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowExpansionParametersRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


