

#include "huaweicloud/cloudtest/v1/model/TestPlanIssueDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestPlanIssueDetail::TestPlanIssueDetail()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    workitemId_ = "";
    workitemIdIsSet_ = false;
    parentIssue_ = "";
    parentIssueIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    ownerIsSet_ = false;
    severityIsSet_ = false;
    statusIsSet_ = false;
    trackerIsSet_ = false;
    iterationIsSet_ = false;
    moduleIsSet_ = false;
}

TestPlanIssueDetail::~TestPlanIssueDetail() = default;

void TestPlanIssueDetail::validate()
{
}

web::json::value TestPlanIssueDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("plan_id")] = ModelBase::toJson(planId_);
    }
    if(workitemIdIsSet_) {
        val[utility::conversions::to_string_t("workitem_id")] = ModelBase::toJson(workitemId_);
    }
    if(parentIssueIsSet_) {
        val[utility::conversions::to_string_t("parent_issue")] = ModelBase::toJson(parentIssue_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(trackerIsSet_) {
        val[utility::conversions::to_string_t("tracker")] = ModelBase::toJson(tracker_);
    }
    if(iterationIsSet_) {
        val[utility::conversions::to_string_t("iteration")] = ModelBase::toJson(iteration_);
    }
    if(moduleIsSet_) {
        val[utility::conversions::to_string_t("module")] = ModelBase::toJson(module_);
    }

    return val;
}
bool TestPlanIssueDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("workitem_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workitem_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkitemId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_issue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentIssue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            NameAndId refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            NameAndId refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            NameAndId refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker"));
        if(!fieldValue.is_null())
        {
            NameAndId refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTracker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iteration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration"));
        if(!fieldValue.is_null())
        {
            NameAndId refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module"));
        if(!fieldValue.is_null())
        {
            NameAndId refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModule(refVal);
        }
    }
    return ok;
}


std::string TestPlanIssueDetail::getProjectId() const
{
    return projectId_;
}

void TestPlanIssueDetail::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TestPlanIssueDetail::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TestPlanIssueDetail::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TestPlanIssueDetail::getPlanId() const
{
    return planId_;
}

void TestPlanIssueDetail::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool TestPlanIssueDetail::planIdIsSet() const
{
    return planIdIsSet_;
}

void TestPlanIssueDetail::unsetplanId()
{
    planIdIsSet_ = false;
}

std::string TestPlanIssueDetail::getWorkitemId() const
{
    return workitemId_;
}

void TestPlanIssueDetail::setWorkitemId(const std::string& value)
{
    workitemId_ = value;
    workitemIdIsSet_ = true;
}

bool TestPlanIssueDetail::workitemIdIsSet() const
{
    return workitemIdIsSet_;
}

void TestPlanIssueDetail::unsetworkitemId()
{
    workitemIdIsSet_ = false;
}

std::string TestPlanIssueDetail::getParentIssue() const
{
    return parentIssue_;
}

void TestPlanIssueDetail::setParentIssue(const std::string& value)
{
    parentIssue_ = value;
    parentIssueIsSet_ = true;
}

bool TestPlanIssueDetail::parentIssueIsSet() const
{
    return parentIssueIsSet_;
}

void TestPlanIssueDetail::unsetparentIssue()
{
    parentIssueIsSet_ = false;
}

std::string TestPlanIssueDetail::getStartDate() const
{
    return startDate_;
}

void TestPlanIssueDetail::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool TestPlanIssueDetail::startDateIsSet() const
{
    return startDateIsSet_;
}

void TestPlanIssueDetail::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string TestPlanIssueDetail::getEndDate() const
{
    return endDate_;
}

void TestPlanIssueDetail::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool TestPlanIssueDetail::endDateIsSet() const
{
    return endDateIsSet_;
}

void TestPlanIssueDetail::unsetendDate()
{
    endDateIsSet_ = false;
}

std::string TestPlanIssueDetail::getName() const
{
    return name_;
}

void TestPlanIssueDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TestPlanIssueDetail::nameIsSet() const
{
    return nameIsSet_;
}

void TestPlanIssueDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string TestPlanIssueDetail::getRegionId() const
{
    return regionId_;
}

void TestPlanIssueDetail::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool TestPlanIssueDetail::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void TestPlanIssueDetail::unsetregionId()
{
    regionIdIsSet_ = false;
}

NameAndId TestPlanIssueDetail::getOwner() const
{
    return owner_;
}

void TestPlanIssueDetail::setOwner(const NameAndId& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool TestPlanIssueDetail::ownerIsSet() const
{
    return ownerIsSet_;
}

void TestPlanIssueDetail::unsetowner()
{
    ownerIsSet_ = false;
}

NameAndId TestPlanIssueDetail::getSeverity() const
{
    return severity_;
}

void TestPlanIssueDetail::setSeverity(const NameAndId& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool TestPlanIssueDetail::severityIsSet() const
{
    return severityIsSet_;
}

void TestPlanIssueDetail::unsetseverity()
{
    severityIsSet_ = false;
}

NameAndId TestPlanIssueDetail::getStatus() const
{
    return status_;
}

void TestPlanIssueDetail::setStatus(const NameAndId& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TestPlanIssueDetail::statusIsSet() const
{
    return statusIsSet_;
}

void TestPlanIssueDetail::unsetstatus()
{
    statusIsSet_ = false;
}

NameAndId TestPlanIssueDetail::getTracker() const
{
    return tracker_;
}

void TestPlanIssueDetail::setTracker(const NameAndId& value)
{
    tracker_ = value;
    trackerIsSet_ = true;
}

bool TestPlanIssueDetail::trackerIsSet() const
{
    return trackerIsSet_;
}

void TestPlanIssueDetail::unsettracker()
{
    trackerIsSet_ = false;
}

NameAndId TestPlanIssueDetail::getIteration() const
{
    return iteration_;
}

void TestPlanIssueDetail::setIteration(const NameAndId& value)
{
    iteration_ = value;
    iterationIsSet_ = true;
}

bool TestPlanIssueDetail::iterationIsSet() const
{
    return iterationIsSet_;
}

void TestPlanIssueDetail::unsetiteration()
{
    iterationIsSet_ = false;
}

NameAndId TestPlanIssueDetail::getModule() const
{
    return module_;
}

void TestPlanIssueDetail::setModule(const NameAndId& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool TestPlanIssueDetail::moduleIsSet() const
{
    return moduleIsSet_;
}

void TestPlanIssueDetail::unsetmodule()
{
    moduleIsSet_ = false;
}

}
}
}
}
}


