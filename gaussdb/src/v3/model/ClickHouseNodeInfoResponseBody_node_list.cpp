

#include "huaweicloud/gaussdb/v3/model/ClickHouseNodeInfoResponseBody_node_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ClickHouseNodeInfoResponseBody_node_list::ClickHouseNodeInfoResponseBody_node_list()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
}

ClickHouseNodeInfoResponseBody_node_list::~ClickHouseNodeInfoResponseBody_node_list() = default;

void ClickHouseNodeInfoResponseBody_node_list::validate()
{
}

web::json::value ClickHouseNodeInfoResponseBody_node_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }

    return val;
}
bool ClickHouseNodeInfoResponseBody_node_list::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
        }
    }
    return ok;
}


std::string ClickHouseNodeInfoResponseBody_node_list::getNodeId() const
{
    return nodeId_;
}

void ClickHouseNodeInfoResponseBody_node_list::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ClickHouseNodeInfoResponseBody_node_list::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ClickHouseNodeInfoResponseBody_node_list::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ClickHouseNodeInfoResponseBody_node_list::getNodeName() const
{
    return nodeName_;
}

void ClickHouseNodeInfoResponseBody_node_list::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool ClickHouseNodeInfoResponseBody_node_list::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void ClickHouseNodeInfoResponseBody_node_list::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string ClickHouseNodeInfoResponseBody_node_list::getRole() const
{
    return role_;
}

void ClickHouseNodeInfoResponseBody_node_list::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool ClickHouseNodeInfoResponseBody_node_list::roleIsSet() const
{
    return roleIsSet_;
}

void ClickHouseNodeInfoResponseBody_node_list::unsetrole()
{
    roleIsSet_ = false;
}

}
}
}
}
}


