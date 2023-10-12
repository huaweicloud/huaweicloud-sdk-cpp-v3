

#include "huaweicloud/dds/v3/model/ShowConnectionStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowConnectionStatisticsRequest::ShowConnectionStatisticsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

ShowConnectionStatisticsRequest::~ShowConnectionStatisticsRequest() = default;

void ShowConnectionStatisticsRequest::validate()
{
}

web::json::value ShowConnectionStatisticsRequest::toJson() const
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
bool ShowConnectionStatisticsRequest::fromJson(const web::json::value& val)
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


std::string ShowConnectionStatisticsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowConnectionStatisticsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowConnectionStatisticsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowConnectionStatisticsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowConnectionStatisticsRequest::getNodeId() const
{
    return nodeId_;
}

void ShowConnectionStatisticsRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowConnectionStatisticsRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowConnectionStatisticsRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


