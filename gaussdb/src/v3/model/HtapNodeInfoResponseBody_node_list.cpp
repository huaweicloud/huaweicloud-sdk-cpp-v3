

#include "huaweicloud/gaussdb/v3/model/HtapNodeInfoResponseBody_node_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




HtapNodeInfoResponseBody_node_list::HtapNodeInfoResponseBody_node_list()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
}

HtapNodeInfoResponseBody_node_list::~HtapNodeInfoResponseBody_node_list() = default;

void HtapNodeInfoResponseBody_node_list::validate()
{
}

web::json::value HtapNodeInfoResponseBody_node_list::toJson() const
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
bool HtapNodeInfoResponseBody_node_list::fromJson(const web::json::value& val)
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


std::string HtapNodeInfoResponseBody_node_list::getNodeId() const
{
    return nodeId_;
}

void HtapNodeInfoResponseBody_node_list::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool HtapNodeInfoResponseBody_node_list::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void HtapNodeInfoResponseBody_node_list::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string HtapNodeInfoResponseBody_node_list::getNodeName() const
{
    return nodeName_;
}

void HtapNodeInfoResponseBody_node_list::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool HtapNodeInfoResponseBody_node_list::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void HtapNodeInfoResponseBody_node_list::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string HtapNodeInfoResponseBody_node_list::getRole() const
{
    return role_;
}

void HtapNodeInfoResponseBody_node_list::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool HtapNodeInfoResponseBody_node_list::roleIsSet() const
{
    return roleIsSet_;
}

void HtapNodeInfoResponseBody_node_list::unsetrole()
{
    roleIsSet_ = false;
}

}
}
}
}
}


