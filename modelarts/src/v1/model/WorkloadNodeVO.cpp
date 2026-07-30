

#include "huaweicloud/modelarts/v1/model/WorkloadNodeVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkloadNodeVO::WorkloadNodeVO()
{
    hostIp_ = "";
    hostIpIsSet_ = false;
    npuTopologyPlacement_ = "";
    npuTopologyPlacementIsSet_ = false;
    resourceRequirementIsSet_ = false;
}

WorkloadNodeVO::~WorkloadNodeVO() = default;

void WorkloadNodeVO::validate()
{
}

web::json::value WorkloadNodeVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostIpIsSet_) {
        val[utility::conversions::to_string_t("hostIp")] = ModelBase::toJson(hostIp_);
    }
    if(npuTopologyPlacementIsSet_) {
        val[utility::conversions::to_string_t("npuTopologyPlacement")] = ModelBase::toJson(npuTopologyPlacement_);
    }
    if(resourceRequirementIsSet_) {
        val[utility::conversions::to_string_t("resourceRequirement")] = ModelBase::toJson(resourceRequirement_);
    }

    return val;
}
bool WorkloadNodeVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hostIp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hostIp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("npuTopologyPlacement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("npuTopologyPlacement"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNpuTopologyPlacement(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourceRequirement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceRequirement"));
        if(!fieldValue.is_null())
        {
            ResourceRequirementVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceRequirement(refVal);
        }
    }
    return ok;
}


std::string WorkloadNodeVO::getHostIp() const
{
    return hostIp_;
}

void WorkloadNodeVO::setHostIp(const std::string& value)
{
    hostIp_ = value;
    hostIpIsSet_ = true;
}

bool WorkloadNodeVO::hostIpIsSet() const
{
    return hostIpIsSet_;
}

void WorkloadNodeVO::unsethostIp()
{
    hostIpIsSet_ = false;
}

std::string WorkloadNodeVO::getNpuTopologyPlacement() const
{
    return npuTopologyPlacement_;
}

void WorkloadNodeVO::setNpuTopologyPlacement(const std::string& value)
{
    npuTopologyPlacement_ = value;
    npuTopologyPlacementIsSet_ = true;
}

bool WorkloadNodeVO::npuTopologyPlacementIsSet() const
{
    return npuTopologyPlacementIsSet_;
}

void WorkloadNodeVO::unsetnpuTopologyPlacement()
{
    npuTopologyPlacementIsSet_ = false;
}

ResourceRequirementVO WorkloadNodeVO::getResourceRequirement() const
{
    return resourceRequirement_;
}

void WorkloadNodeVO::setResourceRequirement(const ResourceRequirementVO& value)
{
    resourceRequirement_ = value;
    resourceRequirementIsSet_ = true;
}

bool WorkloadNodeVO::resourceRequirementIsSet() const
{
    return resourceRequirementIsSet_;
}

void WorkloadNodeVO::unsetresourceRequirement()
{
    resourceRequirementIsSet_ = false;
}

}
}
}
}
}


