

#include "huaweicloud/rds/v3/model/ListDrRelationsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDrRelationsRequest::ListDrRelationsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListDrRelationsRequest::~ListDrRelationsRequest() = default;

void ListDrRelationsRequest::validate()
{
}

web::json::value ListDrRelationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}

bool ListDrRelationsRequest::fromJson(const web::json::value& val)
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

std::string ListDrRelationsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDrRelationsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDrRelationsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDrRelationsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


