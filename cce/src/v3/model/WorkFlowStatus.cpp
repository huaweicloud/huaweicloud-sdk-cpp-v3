

#include "huaweicloud/cce/v3/model/WorkFlowStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




WorkFlowStatus::WorkFlowStatus()
{
    phaseIsSet_ = false;
    pointStatusesIsSet_ = false;
    lineStatusesIsSet_ = false;
}

WorkFlowStatus::~WorkFlowStatus() = default;

void WorkFlowStatus::validate()
{
}

web::json::value WorkFlowStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(pointStatusesIsSet_) {
        val[utility::conversions::to_string_t("pointStatuses")] = ModelBase::toJson(pointStatuses_);
    }
    if(lineStatusesIsSet_) {
        val[utility::conversions::to_string_t("lineStatuses")] = ModelBase::toJson(lineStatuses_);
    }

    return val;
}
bool WorkFlowStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            WorkFlowPhase refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pointStatuses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pointStatuses"));
        if(!fieldValue.is_null())
        {
            std::vector<PointStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPointStatuses(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lineStatuses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lineStatuses"));
        if(!fieldValue.is_null())
        {
            std::vector<LineStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineStatuses(refVal);
        }
    }
    return ok;
}


WorkFlowPhase WorkFlowStatus::getPhase() const
{
    return phase_;
}

void WorkFlowStatus::setPhase(const WorkFlowPhase& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool WorkFlowStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void WorkFlowStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::vector<PointStatus>& WorkFlowStatus::getPointStatuses()
{
    return pointStatuses_;
}

void WorkFlowStatus::setPointStatuses(const std::vector<PointStatus>& value)
{
    pointStatuses_ = value;
    pointStatusesIsSet_ = true;
}

bool WorkFlowStatus::pointStatusesIsSet() const
{
    return pointStatusesIsSet_;
}

void WorkFlowStatus::unsetpointStatuses()
{
    pointStatusesIsSet_ = false;
}

std::vector<LineStatus>& WorkFlowStatus::getLineStatuses()
{
    return lineStatuses_;
}

void WorkFlowStatus::setLineStatuses(const std::vector<LineStatus>& value)
{
    lineStatuses_ = value;
    lineStatusesIsSet_ = true;
}

bool WorkFlowStatus::lineStatusesIsSet() const
{
    return lineStatusesIsSet_;
}

void WorkFlowStatus::unsetlineStatuses()
{
    lineStatusesIsSet_ = false;
}

}
}
}
}
}


