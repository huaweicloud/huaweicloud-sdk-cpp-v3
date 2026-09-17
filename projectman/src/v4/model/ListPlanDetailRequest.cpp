

#include "huaweicloud/projectman/v4/model/ListPlanDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListPlanDetailRequest::ListPlanDetailRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
}

ListPlanDetailRequest::~ListPlanDetailRequest() = default;

void ListPlanDetailRequest::validate()
{
}

web::json::value ListPlanDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("plan_id")] = ModelBase::toJson(planId_);
    }

    return val;
}
bool ListPlanDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanId(refVal);
        }
    }
    return ok;
}


std::string ListPlanDetailRequest::getProjectId() const
{
    return projectId_;
}

void ListPlanDetailRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListPlanDetailRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListPlanDetailRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListPlanDetailRequest::getPlanId() const
{
    return planId_;
}

void ListPlanDetailRequest::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool ListPlanDetailRequest::planIdIsSet() const
{
    return planIdIsSet_;
}

void ListPlanDetailRequest::unsetplanId()
{
    planIdIsSet_ = false;
}

}
}
}
}
}


