

#include "huaweicloud/rds/v3/model/ProxyReadonlyInstances.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ProxyReadonlyInstances::ProxyReadonlyInstances()
{
    id_ = "";
    idIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
}

ProxyReadonlyInstances::~ProxyReadonlyInstances() = default;

void ProxyReadonlyInstances::validate()
{
}

web::json::value ProxyReadonlyInstances::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }

    return val;
}

bool ProxyReadonlyInstances::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    return ok;
}

std::string ProxyReadonlyInstances::getId() const
{
    return id_;
}

void ProxyReadonlyInstances::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProxyReadonlyInstances::idIsSet() const
{
    return idIsSet_;
}

void ProxyReadonlyInstances::unsetid()
{
    idIsSet_ = false;
}

int32_t ProxyReadonlyInstances::getWeight() const
{
    return weight_;
}

void ProxyReadonlyInstances::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool ProxyReadonlyInstances::weightIsSet() const
{
    return weightIsSet_;
}

void ProxyReadonlyInstances::unsetweight()
{
    weightIsSet_ = false;
}

}
}
}
}
}


