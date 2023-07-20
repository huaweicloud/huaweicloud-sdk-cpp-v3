

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatastoresRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatastoresRequest::ListDatastoresRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListDatastoresRequest::~ListDatastoresRequest() = default;

void ListDatastoresRequest::validate()
{
}

web::json::value ListDatastoresRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}

bool ListDatastoresRequest::fromJson(const web::json::value& val)
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

std::string ListDatastoresRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDatastoresRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDatastoresRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDatastoresRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


