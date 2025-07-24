

#include "huaweicloud/cloudtest/v1/model/TestPlanDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestPlanDetail::TestPlanDetail()
{
    planId_ = "";
    planIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    startDateIsSet_ = false;
    endDateIsSet_ = false;
    finishDateIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    currentStage_ = "";
    currentStageIsSet_ = false;
    expireDay_ = 0;
    expireDayIsSet_ = false;
    creatorIsSet_ = false;
    ownerIsSet_ = false;
    designStageIsSet_ = false;
    executeStageIsSet_ = false;
    reportStageIsSet_ = false;
    iterationIsSet_ = false;
}

TestPlanDetail::~TestPlanDetail() = default;

void TestPlanDetail::validate()
{
}

web::json::value TestPlanDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("plan_id")] = ModelBase::toJson(planId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }
    if(finishDateIsSet_) {
        val[utility::conversions::to_string_t("finish_date")] = ModelBase::toJson(finishDate_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(currentStageIsSet_) {
        val[utility::conversions::to_string_t("current_stage")] = ModelBase::toJson(currentStage_);
    }
    if(expireDayIsSet_) {
        val[utility::conversions::to_string_t("expire_day")] = ModelBase::toJson(expireDay_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(designStageIsSet_) {
        val[utility::conversions::to_string_t("design_stage")] = ModelBase::toJson(designStage_);
    }
    if(executeStageIsSet_) {
        val[utility::conversions::to_string_t("execute_stage")] = ModelBase::toJson(executeStage_);
    }
    if(reportStageIsSet_) {
        val[utility::conversions::to_string_t("report_stage")] = ModelBase::toJson(reportStage_);
    }
    if(iterationIsSet_) {
        val[utility::conversions::to_string_t("iteration")] = ModelBase::toJson(iteration_);
    }

    return val;
}
bool TestPlanDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("plan_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_stage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_day"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireDay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            TestPlanDetail_creator refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            TestPlanDetail_owner refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("design_stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("design_stage"));
        if(!fieldValue.is_null())
        {
            TestPlanDetail_design_stage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesignStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_stage"));
        if(!fieldValue.is_null())
        {
            TestPlanDetail_execute_stage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("report_stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("report_stage"));
        if(!fieldValue.is_null())
        {
            TestPlanDetail_report_stage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReportStage(refVal);
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
    return ok;
}


std::string TestPlanDetail::getPlanId() const
{
    return planId_;
}

void TestPlanDetail::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool TestPlanDetail::planIdIsSet() const
{
    return planIdIsSet_;
}

void TestPlanDetail::unsetplanId()
{
    planIdIsSet_ = false;
}

std::string TestPlanDetail::getName() const
{
    return name_;
}

void TestPlanDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TestPlanDetail::nameIsSet() const
{
    return nameIsSet_;
}

void TestPlanDetail::unsetname()
{
    nameIsSet_ = false;
}

utility::datetime TestPlanDetail::getStartDate() const
{
    return startDate_;
}

void TestPlanDetail::setStartDate(const utility::datetime& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool TestPlanDetail::startDateIsSet() const
{
    return startDateIsSet_;
}

void TestPlanDetail::unsetstartDate()
{
    startDateIsSet_ = false;
}

utility::datetime TestPlanDetail::getEndDate() const
{
    return endDate_;
}

void TestPlanDetail::setEndDate(const utility::datetime& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool TestPlanDetail::endDateIsSet() const
{
    return endDateIsSet_;
}

void TestPlanDetail::unsetendDate()
{
    endDateIsSet_ = false;
}

utility::datetime TestPlanDetail::getFinishDate() const
{
    return finishDate_;
}

void TestPlanDetail::setFinishDate(const utility::datetime& value)
{
    finishDate_ = value;
    finishDateIsSet_ = true;
}

bool TestPlanDetail::finishDateIsSet() const
{
    return finishDateIsSet_;
}

void TestPlanDetail::unsetfinishDate()
{
    finishDateIsSet_ = false;
}

std::string TestPlanDetail::getProjectId() const
{
    return projectId_;
}

void TestPlanDetail::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TestPlanDetail::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TestPlanDetail::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TestPlanDetail::getCurrentStage() const
{
    return currentStage_;
}

void TestPlanDetail::setCurrentStage(const std::string& value)
{
    currentStage_ = value;
    currentStageIsSet_ = true;
}

bool TestPlanDetail::currentStageIsSet() const
{
    return currentStageIsSet_;
}

void TestPlanDetail::unsetcurrentStage()
{
    currentStageIsSet_ = false;
}

int32_t TestPlanDetail::getExpireDay() const
{
    return expireDay_;
}

void TestPlanDetail::setExpireDay(int32_t value)
{
    expireDay_ = value;
    expireDayIsSet_ = true;
}

bool TestPlanDetail::expireDayIsSet() const
{
    return expireDayIsSet_;
}

void TestPlanDetail::unsetexpireDay()
{
    expireDayIsSet_ = false;
}

TestPlanDetail_creator TestPlanDetail::getCreator() const
{
    return creator_;
}

void TestPlanDetail::setCreator(const TestPlanDetail_creator& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool TestPlanDetail::creatorIsSet() const
{
    return creatorIsSet_;
}

void TestPlanDetail::unsetcreator()
{
    creatorIsSet_ = false;
}

TestPlanDetail_owner TestPlanDetail::getOwner() const
{
    return owner_;
}

void TestPlanDetail::setOwner(const TestPlanDetail_owner& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool TestPlanDetail::ownerIsSet() const
{
    return ownerIsSet_;
}

void TestPlanDetail::unsetowner()
{
    ownerIsSet_ = false;
}

TestPlanDetail_design_stage TestPlanDetail::getDesignStage() const
{
    return designStage_;
}

void TestPlanDetail::setDesignStage(const TestPlanDetail_design_stage& value)
{
    designStage_ = value;
    designStageIsSet_ = true;
}

bool TestPlanDetail::designStageIsSet() const
{
    return designStageIsSet_;
}

void TestPlanDetail::unsetdesignStage()
{
    designStageIsSet_ = false;
}

TestPlanDetail_execute_stage TestPlanDetail::getExecuteStage() const
{
    return executeStage_;
}

void TestPlanDetail::setExecuteStage(const TestPlanDetail_execute_stage& value)
{
    executeStage_ = value;
    executeStageIsSet_ = true;
}

bool TestPlanDetail::executeStageIsSet() const
{
    return executeStageIsSet_;
}

void TestPlanDetail::unsetexecuteStage()
{
    executeStageIsSet_ = false;
}

TestPlanDetail_report_stage TestPlanDetail::getReportStage() const
{
    return reportStage_;
}

void TestPlanDetail::setReportStage(const TestPlanDetail_report_stage& value)
{
    reportStage_ = value;
    reportStageIsSet_ = true;
}

bool TestPlanDetail::reportStageIsSet() const
{
    return reportStageIsSet_;
}

void TestPlanDetail::unsetreportStage()
{
    reportStageIsSet_ = false;
}

NameAndId TestPlanDetail::getIteration() const
{
    return iteration_;
}

void TestPlanDetail::setIteration(const NameAndId& value)
{
    iteration_ = value;
    iterationIsSet_ = true;
}

bool TestPlanDetail::iterationIsSet() const
{
    return iterationIsSet_;
}

void TestPlanDetail::unsetiteration()
{
    iterationIsSet_ = false;
}

}
}
}
}
}


