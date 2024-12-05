

#include "huaweicloud/gaussdbfornosql/v3/model/ClearInstanceSessionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ClearInstanceSessionsRequest::ClearInstanceSessionsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

ClearInstanceSessionsRequest::~ClearInstanceSessionsRequest() = default;

void ClearInstanceSessionsRequest::validate()
{
}

web::json::value ClearInstanceSessionsRequest::toJson() const
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
bool ClearInstanceSessionsRequest::fromJson(const web::json::value& val)
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


std::string ClearInstanceSessionsRequest::getInstanceId() const
{
    return instanceId_;
}

void ClearInstanceSessionsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ClearInstanceSessionsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ClearInstanceSessionsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ClearInstanceSessionsRequest::getNodeId() const
{
    return nodeId_;
}

void ClearInstanceSessionsRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ClearInstanceSessionsRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ClearInstanceSessionsRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


