

#include "huaweicloud/projectman/v4/model/IssueCompletionRateV4_issue_status.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueCompletionRateV4_issue_status::IssueCompletionRateV4_issue_status()
{
    closedNum_ = 0;
    closedNumIsSet_ = false;
    newNum_ = 0;
    newNumIsSet_ = false;
    processNum_ = 0;
    processNumIsSet_ = false;
    rejectedNum_ = 0;
    rejectedNumIsSet_ = false;
    solvedNum_ = 0;
    solvedNumIsSet_ = false;
    testNum_ = 0;
    testNumIsSet_ = false;
}

IssueCompletionRateV4_issue_status::~IssueCompletionRateV4_issue_status() = default;

void IssueCompletionRateV4_issue_status::validate()
{
}

web::json::value IssueCompletionRateV4_issue_status::toJson() const
{
    web::json::value val = web::json::value::object();

    if(closedNumIsSet_) {
        val[utility::conversions::to_string_t("closed_num")] = ModelBase::toJson(closedNum_);
    }
    if(newNumIsSet_) {
        val[utility::conversions::to_string_t("new_num")] = ModelBase::toJson(newNum_);
    }
    if(processNumIsSet_) {
        val[utility::conversions::to_string_t("process_num")] = ModelBase::toJson(processNum_);
    }
    if(rejectedNumIsSet_) {
        val[utility::conversions::to_string_t("rejected_num")] = ModelBase::toJson(rejectedNum_);
    }
    if(solvedNumIsSet_) {
        val[utility::conversions::to_string_t("solved_num")] = ModelBase::toJson(solvedNum_);
    }
    if(testNumIsSet_) {
        val[utility::conversions::to_string_t("test_num")] = ModelBase::toJson(testNum_);
    }

    return val;
}
bool IssueCompletionRateV4_issue_status::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("closed_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rejected_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rejected_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRejectedNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("solved_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("solved_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSolvedNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestNum(refVal);
        }
    }
    return ok;
}


int32_t IssueCompletionRateV4_issue_status::getClosedNum() const
{
    return closedNum_;
}

void IssueCompletionRateV4_issue_status::setClosedNum(int32_t value)
{
    closedNum_ = value;
    closedNumIsSet_ = true;
}

bool IssueCompletionRateV4_issue_status::closedNumIsSet() const
{
    return closedNumIsSet_;
}

void IssueCompletionRateV4_issue_status::unsetclosedNum()
{
    closedNumIsSet_ = false;
}

int32_t IssueCompletionRateV4_issue_status::getNewNum() const
{
    return newNum_;
}

void IssueCompletionRateV4_issue_status::setNewNum(int32_t value)
{
    newNum_ = value;
    newNumIsSet_ = true;
}

bool IssueCompletionRateV4_issue_status::newNumIsSet() const
{
    return newNumIsSet_;
}

void IssueCompletionRateV4_issue_status::unsetnewNum()
{
    newNumIsSet_ = false;
}

int32_t IssueCompletionRateV4_issue_status::getProcessNum() const
{
    return processNum_;
}

void IssueCompletionRateV4_issue_status::setProcessNum(int32_t value)
{
    processNum_ = value;
    processNumIsSet_ = true;
}

bool IssueCompletionRateV4_issue_status::processNumIsSet() const
{
    return processNumIsSet_;
}

void IssueCompletionRateV4_issue_status::unsetprocessNum()
{
    processNumIsSet_ = false;
}

int32_t IssueCompletionRateV4_issue_status::getRejectedNum() const
{
    return rejectedNum_;
}

void IssueCompletionRateV4_issue_status::setRejectedNum(int32_t value)
{
    rejectedNum_ = value;
    rejectedNumIsSet_ = true;
}

bool IssueCompletionRateV4_issue_status::rejectedNumIsSet() const
{
    return rejectedNumIsSet_;
}

void IssueCompletionRateV4_issue_status::unsetrejectedNum()
{
    rejectedNumIsSet_ = false;
}

int32_t IssueCompletionRateV4_issue_status::getSolvedNum() const
{
    return solvedNum_;
}

void IssueCompletionRateV4_issue_status::setSolvedNum(int32_t value)
{
    solvedNum_ = value;
    solvedNumIsSet_ = true;
}

bool IssueCompletionRateV4_issue_status::solvedNumIsSet() const
{
    return solvedNumIsSet_;
}

void IssueCompletionRateV4_issue_status::unsetsolvedNum()
{
    solvedNumIsSet_ = false;
}

int32_t IssueCompletionRateV4_issue_status::getTestNum() const
{
    return testNum_;
}

void IssueCompletionRateV4_issue_status::setTestNum(int32_t value)
{
    testNum_ = value;
    testNumIsSet_ = true;
}

bool IssueCompletionRateV4_issue_status::testNumIsSet() const
{
    return testNumIsSet_;
}

void IssueCompletionRateV4_issue_status::unsettestNum()
{
    testNumIsSet_ = false;
}

}
}
}
}
}


