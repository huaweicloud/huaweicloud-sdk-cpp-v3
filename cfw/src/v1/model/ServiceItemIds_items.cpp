

#include "huaweicloud/cfw/v1/model/ServiceItemIds_items.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ServiceItemIds_items::ServiceItemIds_items()
{
    id_ = "";
    idIsSet_ = false;
}

ServiceItemIds_items::~ServiceItemIds_items() = default;

void ServiceItemIds_items::validate()
{
}

web::json::value ServiceItemIds_items::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ServiceItemIds_items::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string ServiceItemIds_items::getId() const
{
    return id_;
}

void ServiceItemIds_items::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServiceItemIds_items::idIsSet() const
{
    return idIsSet_;
}

void ServiceItemIds_items::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


