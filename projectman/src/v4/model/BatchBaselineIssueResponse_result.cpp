

#include "huaweicloud/projectman/v4/model/BatchBaselineIssueResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchBaselineIssueResponse_result::BatchBaselineIssueResponse_result()
{
    successIsSet_ = false;
    failedIsSet_ = false;
    successNum_ = 0;
    successNumIsSet_ = false;
    failNum_ = 0;
    failNumIsSet_ = false;
}

BatchBaselineIssueResponse_result::~BatchBaselineIssueResponse_result() = default;

void BatchBaselineIssueResponse_result::validate()
{
}

web::json::value BatchBaselineIssueResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(failedIsSet_) {
        val[utility::conversions::to_string_t("failed")] = ModelBase::toJson(failed_);
    }
    if(successNumIsSet_) {
        val[utility::conversions::to_string_t("success_num")] = ModelBase::toJson(successNum_);
    }
    if(failNumIsSet_) {
        val[utility::conversions::to_string_t("fail_num")] = ModelBase::toJson(failNum_);
    }

    return val;
}
bool BatchBaselineIssueResponse_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueBaselineResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueBaselineResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailNum(refVal);
        }
    }
    return ok;
}


std::vector<IssueBaselineResult>& BatchBaselineIssueResponse_result::getSuccess()
{
    return success_;
}

void BatchBaselineIssueResponse_result::setSuccess(const std::vector<IssueBaselineResult>& value)
{
    success_ = value;
    successIsSet_ = true;
}

bool BatchBaselineIssueResponse_result::successIsSet() const
{
    return successIsSet_;
}

void BatchBaselineIssueResponse_result::unsetsuccess()
{
    successIsSet_ = false;
}

std::vector<IssueBaselineResult>& BatchBaselineIssueResponse_result::getFailed()
{
    return failed_;
}

void BatchBaselineIssueResponse_result::setFailed(const std::vector<IssueBaselineResult>& value)
{
    failed_ = value;
    failedIsSet_ = true;
}

bool BatchBaselineIssueResponse_result::failedIsSet() const
{
    return failedIsSet_;
}

void BatchBaselineIssueResponse_result::unsetfailed()
{
    failedIsSet_ = false;
}

int32_t BatchBaselineIssueResponse_result::getSuccessNum() const
{
    return successNum_;
}

void BatchBaselineIssueResponse_result::setSuccessNum(int32_t value)
{
    successNum_ = value;
    successNumIsSet_ = true;
}

bool BatchBaselineIssueResponse_result::successNumIsSet() const
{
    return successNumIsSet_;
}

void BatchBaselineIssueResponse_result::unsetsuccessNum()
{
    successNumIsSet_ = false;
}

int32_t BatchBaselineIssueResponse_result::getFailNum() const
{
    return failNum_;
}

void BatchBaselineIssueResponse_result::setFailNum(int32_t value)
{
    failNum_ = value;
    failNumIsSet_ = true;
}

bool BatchBaselineIssueResponse_result::failNumIsSet() const
{
    return failNumIsSet_;
}

void BatchBaselineIssueResponse_result::unsetfailNum()
{
    failNumIsSet_ = false;
}

}
}
}
}
}


