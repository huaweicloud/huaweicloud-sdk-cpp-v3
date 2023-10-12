

#include "huaweicloud/gaussdbforopengauss/v3/model/Shards.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




Shards::Shards()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
}

Shards::~Shards() = default;

void Shards::validate()
{
}

web::json::value Shards::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }

    return val;
}
bool Shards::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentId(refVal);
        }
    }
    return ok;
}


std::string Shards::getNodeId() const
{
    return nodeId_;
}

void Shards::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool Shards::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void Shards::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string Shards::getComponentId() const
{
    return componentId_;
}

void Shards::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool Shards::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void Shards::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

}
}
}
}
}


