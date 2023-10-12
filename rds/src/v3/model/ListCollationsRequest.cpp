

#include "huaweicloud/rds/v3/model/ListCollationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListCollationsRequest::ListCollationsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListCollationsRequest::~ListCollationsRequest() = default;

void ListCollationsRequest::validate()
{
}

web::json::value ListCollationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListCollationsRequest::fromJson(const web::json::value& val)
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


std::string ListCollationsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListCollationsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListCollationsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListCollationsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


