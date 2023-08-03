

#include "huaweicloud/rds/v3/model/ListConfigurationsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListConfigurationsRequest::ListConfigurationsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListConfigurationsRequest::~ListConfigurationsRequest() = default;

void ListConfigurationsRequest::validate()
{
}

web::json::value ListConfigurationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}

bool ListConfigurationsRequest::fromJson(const web::json::value& val)
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

std::string ListConfigurationsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListConfigurationsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListConfigurationsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListConfigurationsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


