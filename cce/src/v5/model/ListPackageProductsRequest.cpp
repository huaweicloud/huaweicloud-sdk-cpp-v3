

#include "huaweicloud/cce/v5/model/ListPackageProductsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




ListPackageProductsRequest::ListPackageProductsRequest()
{
    locale_ = "";
    localeIsSet_ = false;
}

ListPackageProductsRequest::~ListPackageProductsRequest() = default;

void ListPackageProductsRequest::validate()
{
}

web::json::value ListPackageProductsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(localeIsSet_) {
        val[utility::conversions::to_string_t("locale")] = ModelBase::toJson(locale_);
    }

    return val;
}
bool ListPackageProductsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("locale"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locale"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocale(refVal);
        }
    }
    return ok;
}


std::string ListPackageProductsRequest::getLocale() const
{
    return locale_;
}

void ListPackageProductsRequest::setLocale(const std::string& value)
{
    locale_ = value;
    localeIsSet_ = true;
}

bool ListPackageProductsRequest::localeIsSet() const
{
    return localeIsSet_;
}

void ListPackageProductsRequest::unsetlocale()
{
    localeIsSet_ = false;
}

}
}
}
}
}


