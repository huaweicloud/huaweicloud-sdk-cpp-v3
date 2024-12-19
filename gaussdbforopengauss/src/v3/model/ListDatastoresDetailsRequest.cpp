

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatastoresDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatastoresDetailsRequest::ListDatastoresDetailsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListDatastoresDetailsRequest::~ListDatastoresDetailsRequest() = default;

void ListDatastoresDetailsRequest::validate()
{
}

web::json::value ListDatastoresDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListDatastoresDetailsRequest::fromJson(const web::json::value& val)
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


std::string ListDatastoresDetailsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDatastoresDetailsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDatastoresDetailsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDatastoresDetailsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


