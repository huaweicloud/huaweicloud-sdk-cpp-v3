

#include "huaweicloud/vpc/model/ShowQuotaRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowQuotaRequest::ShowQuotaRequest()
{
    type_ = "";
    typeIsSet_ = false;
}

ShowQuotaRequest::~ShowQuotaRequest() = default;

void ShowQuotaRequest::validate()
{
}

web::json::value ShowQuotaRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool ShowQuotaRequest::fromJson(const web::json::value& val)
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


std::string ShowQuotaRequest::getType() const
{
    return type_;
}

void ShowQuotaRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowQuotaRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowQuotaRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


