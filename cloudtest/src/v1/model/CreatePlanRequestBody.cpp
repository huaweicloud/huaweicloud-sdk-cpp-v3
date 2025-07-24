

#include "huaweicloud/cloudtest/v1/model/CreatePlanRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreatePlanRequestBody::CreatePlanRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    assignedId_ = "";
    assignedIdIsSet_ = false;
    serviceIdListIsSet_ = false;
    planCycleIsSet_ = false;
}

CreatePlanRequestBody::~CreatePlanRequestBody() = default;

void CreatePlanRequestBody::validate()
{
}

web::json::value CreatePlanRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(assignedIdIsSet_) {
        val[utility::conversions::to_string_t("assigned_id")] = ModelBase::toJson(assignedId_);
    }
    if(serviceIdListIsSet_) {
        val[utility::conversions::to_string_t("service_id_list")] = ModelBase::toJson(serviceIdList_);
    }
    if(planCycleIsSet_) {
        val[utility::conversions::to_string_t("plan_cycle")] = ModelBase::toJson(planCycle_);
    }

    return val;
}
bool CreatePlanRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assigned_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceIdList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_cycle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_cycle"));
        if(!fieldValue.is_null())
        {
            PlanCycle refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanCycle(refVal);
        }
    }
    return ok;
}


std::string CreatePlanRequestBody::getName() const
{
    return name_;
}

void CreatePlanRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreatePlanRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreatePlanRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreatePlanRequestBody::getAssignedId() const
{
    return assignedId_;
}

void CreatePlanRequestBody::setAssignedId(const std::string& value)
{
    assignedId_ = value;
    assignedIdIsSet_ = true;
}

bool CreatePlanRequestBody::assignedIdIsSet() const
{
    return assignedIdIsSet_;
}

void CreatePlanRequestBody::unsetassignedId()
{
    assignedIdIsSet_ = false;
}

std::vector<int32_t>& CreatePlanRequestBody::getServiceIdList()
{
    return serviceIdList_;
}

void CreatePlanRequestBody::setServiceIdList(std::vector<int32_t> value)
{
    serviceIdList_ = value;
    serviceIdListIsSet_ = true;
}

bool CreatePlanRequestBody::serviceIdListIsSet() const
{
    return serviceIdListIsSet_;
}

void CreatePlanRequestBody::unsetserviceIdList()
{
    serviceIdListIsSet_ = false;
}

PlanCycle CreatePlanRequestBody::getPlanCycle() const
{
    return planCycle_;
}

void CreatePlanRequestBody::setPlanCycle(const PlanCycle& value)
{
    planCycle_ = value;
    planCycleIsSet_ = true;
}

bool CreatePlanRequestBody::planCycleIsSet() const
{
    return planCycleIsSet_;
}

void CreatePlanRequestBody::unsetplanCycle()
{
    planCycleIsSet_ = false;
}

}
}
}
}
}


