

#include "huaweicloud/dds/v3/model/SwitchInstancePrimaryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SwitchInstancePrimaryRequest::SwitchInstancePrimaryRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

SwitchInstancePrimaryRequest::~SwitchInstancePrimaryRequest() = default;

void SwitchInstancePrimaryRequest::validate()
{
}

web::json::value SwitchInstancePrimaryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }

    return val;
}
bool SwitchInstancePrimaryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    return ok;
}


std::string SwitchInstancePrimaryRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchInstancePrimaryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchInstancePrimaryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchInstancePrimaryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SwitchInstancePrimaryRequest::getNodeId() const
{
    return nodeId_;
}

void SwitchInstancePrimaryRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool SwitchInstancePrimaryRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void SwitchInstancePrimaryRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


