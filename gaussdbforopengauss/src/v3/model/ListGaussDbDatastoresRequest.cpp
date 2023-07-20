

#include "huaweicloud/gaussdbforopengauss/v3/model/ListGaussDbDatastoresRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListGaussDbDatastoresRequest::ListGaussDbDatastoresRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListGaussDbDatastoresRequest::~ListGaussDbDatastoresRequest() = default;

void ListGaussDbDatastoresRequest::validate()
{
}

web::json::value ListGaussDbDatastoresRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}

bool ListGaussDbDatastoresRequest::fromJson(const web::json::value& val)
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

std::string ListGaussDbDatastoresRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListGaussDbDatastoresRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListGaussDbDatastoresRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListGaussDbDatastoresRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


