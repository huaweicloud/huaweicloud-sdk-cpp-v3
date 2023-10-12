

#include "huaweicloud/dds/v3/model/AttachInternalIpRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




AttachInternalIpRequestBody::AttachInternalIpRequestBody()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    newIp_ = "";
    newIpIsSet_ = false;
}

AttachInternalIpRequestBody::~AttachInternalIpRequestBody() = default;

void AttachInternalIpRequestBody::validate()
{
}

web::json::value AttachInternalIpRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(newIpIsSet_) {
        val[utility::conversions::to_string_t("new_ip")] = ModelBase::toJson(newIp_);
    }

    return val;
}
bool AttachInternalIpRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("new_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewIp(refVal);
        }
    }
    return ok;
}


std::string AttachInternalIpRequestBody::getNodeId() const
{
    return nodeId_;
}

void AttachInternalIpRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool AttachInternalIpRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void AttachInternalIpRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string AttachInternalIpRequestBody::getNewIp() const
{
    return newIp_;
}

void AttachInternalIpRequestBody::setNewIp(const std::string& value)
{
    newIp_ = value;
    newIpIsSet_ = true;
}

bool AttachInternalIpRequestBody::newIpIsSet() const
{
    return newIpIsSet_;
}

void AttachInternalIpRequestBody::unsetnewIp()
{
    newIpIsSet_ = false;
}

}
}
}
}
}


