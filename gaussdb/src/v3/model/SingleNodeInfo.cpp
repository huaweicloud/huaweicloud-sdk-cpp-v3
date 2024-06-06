

#include "huaweicloud/gaussdb/v3/model/SingleNodeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SingleNodeInfo::SingleNodeInfo()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

SingleNodeInfo::~SingleNodeInfo() = default;

void SingleNodeInfo::validate()
{
}

web::json::value SingleNodeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool SingleNodeInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string SingleNodeInfo::getNodeId() const
{
    return nodeId_;
}

void SingleNodeInfo::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool SingleNodeInfo::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void SingleNodeInfo::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string SingleNodeInfo::getName() const
{
    return name_;
}

void SingleNodeInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SingleNodeInfo::nameIsSet() const
{
    return nameIsSet_;
}

void SingleNodeInfo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


