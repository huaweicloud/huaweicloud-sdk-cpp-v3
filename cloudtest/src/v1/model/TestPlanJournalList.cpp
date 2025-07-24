

#include "huaweicloud/cloudtest/v1/model/TestPlanJournalList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestPlanJournalList::TestPlanJournalList()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    operateTimeIsSet_ = false;
    operatorIsSet_ = false;
    detailIsSet_ = false;
}

TestPlanJournalList::~TestPlanJournalList() = default;

void TestPlanJournalList::validate()
{
}

web::json::value TestPlanJournalList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("plan_id")] = ModelBase::toJson(planId_);
    }
    if(operateTimeIsSet_) {
        val[utility::conversions::to_string_t("operate_time")] = ModelBase::toJson(operateTime_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }

    return val;
}
bool TestPlanJournalList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("operate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            NameAndId refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            std::vector<TestPlanJournalDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    return ok;
}


std::string TestPlanJournalList::getProjectId() const
{
    return projectId_;
}

void TestPlanJournalList::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TestPlanJournalList::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TestPlanJournalList::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TestPlanJournalList::getPlanId() const
{
    return planId_;
}

void TestPlanJournalList::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool TestPlanJournalList::planIdIsSet() const
{
    return planIdIsSet_;
}

void TestPlanJournalList::unsetplanId()
{
    planIdIsSet_ = false;
}

utility::datetime TestPlanJournalList::getOperateTime() const
{
    return operateTime_;
}

void TestPlanJournalList::setOperateTime(const utility::datetime& value)
{
    operateTime_ = value;
    operateTimeIsSet_ = true;
}

bool TestPlanJournalList::operateTimeIsSet() const
{
    return operateTimeIsSet_;
}

void TestPlanJournalList::unsetoperateTime()
{
    operateTimeIsSet_ = false;
}

NameAndId TestPlanJournalList::getOperator() const
{
    return operator_;
}

void TestPlanJournalList::setOperator(const NameAndId& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool TestPlanJournalList::operatorIsSet() const
{
    return operatorIsSet_;
}

void TestPlanJournalList::unsetoperator()
{
    operatorIsSet_ = false;
}

std::vector<TestPlanJournalDetail>& TestPlanJournalList::getDetail()
{
    return detail_;
}

void TestPlanJournalList::setDetail(const std::vector<TestPlanJournalDetail>& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool TestPlanJournalList::detailIsSet() const
{
    return detailIsSet_;
}

void TestPlanJournalList::unsetdetail()
{
    detailIsSet_ = false;
}

}
}
}
}
}


