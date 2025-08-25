

#include "huaweicloud/cce/v3/model/NodeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeInfo::NodeInfo()
{
    uid_ = "";
    uidIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    nodeType_ = "";
    nodeTypeIsSet_ = false;
}

NodeInfo::~NodeInfo() = default;

void NodeInfo::validate()
{
}

web::json::value NodeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(nodeTypeIsSet_) {
        val[utility::conversions::to_string_t("nodeType")] = ModelBase::toJson(nodeType_);
    }

    return val;
}
bool NodeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUid(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeType(refVal);
        }
    }
    return ok;
}


std::string NodeInfo::getUid() const
{
    return uid_;
}

void NodeInfo::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool NodeInfo::uidIsSet() const
{
    return uidIsSet_;
}

void NodeInfo::unsetuid()
{
    uidIsSet_ = false;
}

std::string NodeInfo::getName() const
{
    return name_;
}

void NodeInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NodeInfo::nameIsSet() const
{
    return nameIsSet_;
}

void NodeInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string NodeInfo::getStatus() const
{
    return status_;
}

void NodeInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NodeInfo::statusIsSet() const
{
    return statusIsSet_;
}

void NodeInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NodeInfo::getNodeType() const
{
    return nodeType_;
}

void NodeInfo::setNodeType(const std::string& value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool NodeInfo::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void NodeInfo::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

}
}
}
}
}


