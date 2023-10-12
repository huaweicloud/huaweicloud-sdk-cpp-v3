

#include "huaweicloud/gaussdbfornosql/v3/model/ShowIpNumRequirementRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowIpNumRequirementRequest::ShowIpNumRequirementRequest()
{
    nodeNum_ = 0;
    nodeNumIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    instanceMode_ = "";
    instanceModeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowIpNumRequirementRequest::~ShowIpNumRequirementRequest() = default;

void ShowIpNumRequirementRequest::validate()
{
}

web::json::value ShowIpNumRequirementRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNumIsSet_) {
        val[utility::conversions::to_string_t("node_num")] = ModelBase::toJson(nodeNum_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(instanceModeIsSet_) {
        val[utility::conversions::to_string_t("instance_mode")] = ModelBase::toJson(instanceMode_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowIpNumRequirementRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


int32_t ShowIpNumRequirementRequest::getNodeNum() const
{
    return nodeNum_;
}

void ShowIpNumRequirementRequest::setNodeNum(int32_t value)
{
    nodeNum_ = value;
    nodeNumIsSet_ = true;
}

bool ShowIpNumRequirementRequest::nodeNumIsSet() const
{
    return nodeNumIsSet_;
}

void ShowIpNumRequirementRequest::unsetnodeNum()
{
    nodeNumIsSet_ = false;
}

std::string ShowIpNumRequirementRequest::getEngineName() const
{
    return engineName_;
}

void ShowIpNumRequirementRequest::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool ShowIpNumRequirementRequest::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void ShowIpNumRequirementRequest::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string ShowIpNumRequirementRequest::getInstanceMode() const
{
    return instanceMode_;
}

void ShowIpNumRequirementRequest::setInstanceMode(const std::string& value)
{
    instanceMode_ = value;
    instanceModeIsSet_ = true;
}

bool ShowIpNumRequirementRequest::instanceModeIsSet() const
{
    return instanceModeIsSet_;
}

void ShowIpNumRequirementRequest::unsetinstanceMode()
{
    instanceModeIsSet_ = false;
}

std::string ShowIpNumRequirementRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowIpNumRequirementRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowIpNumRequirementRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowIpNumRequirementRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


