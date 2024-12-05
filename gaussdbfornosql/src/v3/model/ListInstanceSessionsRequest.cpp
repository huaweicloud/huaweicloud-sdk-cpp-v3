

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstanceSessionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstanceSessionsRequest::ListInstanceSessionsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

ListInstanceSessionsRequest::~ListInstanceSessionsRequest() = default;

void ListInstanceSessionsRequest::validate()
{
}

web::json::value ListInstanceSessionsRequest::toJson() const
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
bool ListInstanceSessionsRequest::fromJson(const web::json::value& val)
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


std::string ListInstanceSessionsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListInstanceSessionsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListInstanceSessionsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListInstanceSessionsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListInstanceSessionsRequest::getNodeId() const
{
    return nodeId_;
}

void ListInstanceSessionsRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListInstanceSessionsRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListInstanceSessionsRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


