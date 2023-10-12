

#include "huaweicloud/eip/v2/model/ListQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ListQuotasRequest::ListQuotasRequest()
{
    type_ = "";
    typeIsSet_ = false;
}

ListQuotasRequest::~ListQuotasRequest() = default;

void ListQuotasRequest::validate()
{
}

web::json::value ListQuotasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListQuotasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ListQuotasRequest::getType() const
{
    return type_;
}

void ListQuotasRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListQuotasRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListQuotasRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


