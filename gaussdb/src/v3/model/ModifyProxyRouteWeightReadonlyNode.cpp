

#include "huaweicloud/gaussdb/v3/model/ModifyProxyRouteWeightReadonlyNode.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyProxyRouteWeightReadonlyNode::ModifyProxyRouteWeightReadonlyNode()
{
    id_ = "";
    idIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
}

ModifyProxyRouteWeightReadonlyNode::~ModifyProxyRouteWeightReadonlyNode() = default;

void ModifyProxyRouteWeightReadonlyNode::validate()
{
}

web::json::value ModifyProxyRouteWeightReadonlyNode::toJson() const
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
bool ModifyProxyRouteWeightReadonlyNode::fromJson(const web::json::value& val)
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


std::string ModifyProxyRouteWeightReadonlyNode::getId() const
{
    return id_;
}

void ModifyProxyRouteWeightReadonlyNode::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ModifyProxyRouteWeightReadonlyNode::idIsSet() const
{
    return idIsSet_;
}

void ModifyProxyRouteWeightReadonlyNode::unsetid()
{
    idIsSet_ = false;
}

int32_t ModifyProxyRouteWeightReadonlyNode::getWeight() const
{
    return weight_;
}

void ModifyProxyRouteWeightReadonlyNode::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool ModifyProxyRouteWeightReadonlyNode::weightIsSet() const
{
    return weightIsSet_;
}

void ModifyProxyRouteWeightReadonlyNode::unsetweight()
{
    weightIsSet_ = false;
}

}
}
}
}
}


