

#include "huaweicloud/projectman/v4/model/IssueStatusResponseV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueStatusResponseV4::IssueStatusResponseV4()
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

IssueStatusResponseV4::~IssueStatusResponseV4() = default;

void IssueStatusResponseV4::validate()
{
}

web::json::value IssueStatusResponseV4::toJson() const
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
bool IssueStatusResponseV4::fromJson(const web::json::value& val)
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


int32_t IssueStatusResponseV4::getClosedNum() const
{
    return closedNum_;
}

void IssueStatusResponseV4::setClosedNum(int32_t value)
{
    closedNum_ = value;
    closedNumIsSet_ = true;
}

bool IssueStatusResponseV4::closedNumIsSet() const
{
    return closedNumIsSet_;
}

void IssueStatusResponseV4::unsetclosedNum()
{
    closedNumIsSet_ = false;
}

int32_t IssueStatusResponseV4::getNewNum() const
{
    return newNum_;
}

void IssueStatusResponseV4::setNewNum(int32_t value)
{
    newNum_ = value;
    newNumIsSet_ = true;
}

bool IssueStatusResponseV4::newNumIsSet() const
{
    return newNumIsSet_;
}

void IssueStatusResponseV4::unsetnewNum()
{
    newNumIsSet_ = false;
}

int32_t IssueStatusResponseV4::getProcessNum() const
{
    return processNum_;
}

void IssueStatusResponseV4::setProcessNum(int32_t value)
{
    processNum_ = value;
    processNumIsSet_ = true;
}

bool IssueStatusResponseV4::processNumIsSet() const
{
    return processNumIsSet_;
}

void IssueStatusResponseV4::unsetprocessNum()
{
    processNumIsSet_ = false;
}

int32_t IssueStatusResponseV4::getRejectedNum() const
{
    return rejectedNum_;
}

void IssueStatusResponseV4::setRejectedNum(int32_t value)
{
    rejectedNum_ = value;
    rejectedNumIsSet_ = true;
}

bool IssueStatusResponseV4::rejectedNumIsSet() const
{
    return rejectedNumIsSet_;
}

void IssueStatusResponseV4::unsetrejectedNum()
{
    rejectedNumIsSet_ = false;
}

int32_t IssueStatusResponseV4::getSolvedNum() const
{
    return solvedNum_;
}

void IssueStatusResponseV4::setSolvedNum(int32_t value)
{
    solvedNum_ = value;
    solvedNumIsSet_ = true;
}

bool IssueStatusResponseV4::solvedNumIsSet() const
{
    return solvedNumIsSet_;
}

void IssueStatusResponseV4::unsetsolvedNum()
{
    solvedNumIsSet_ = false;
}

int32_t IssueStatusResponseV4::getTestNum() const
{
    return testNum_;
}

void IssueStatusResponseV4::setTestNum(int32_t value)
{
    testNum_ = value;
    testNumIsSet_ = true;
}

bool IssueStatusResponseV4::testNumIsSet() const
{
    return testNumIsSet_;
}

void IssueStatusResponseV4::unsettestNum()
{
    testNumIsSet_ = false;
}

}
}
}
}
}


