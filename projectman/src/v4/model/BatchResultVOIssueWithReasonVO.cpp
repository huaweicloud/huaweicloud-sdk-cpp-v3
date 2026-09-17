

#include "huaweicloud/projectman/v4/model/BatchResultVOIssueWithReasonVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchResultVOIssueWithReasonVO::BatchResultVOIssueWithReasonVO()
{
    successNum_ = 0;
    successNumIsSet_ = false;
    failNum_ = 0;
    failNumIsSet_ = false;
    failedIsSet_ = false;
}

BatchResultVOIssueWithReasonVO::~BatchResultVOIssueWithReasonVO() = default;

void BatchResultVOIssueWithReasonVO::validate()
{
}

web::json::value BatchResultVOIssueWithReasonVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successNumIsSet_) {
        val[utility::conversions::to_string_t("success_num")] = ModelBase::toJson(successNum_);
    }
    if(failNumIsSet_) {
        val[utility::conversions::to_string_t("fail_num")] = ModelBase::toJson(failNum_);
    }
    if(failedIsSet_) {
        val[utility::conversions::to_string_t("failed")] = ModelBase::toJson(failed_);
    }

    return val;
}
bool BatchResultVOIssueWithReasonVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("failed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueWithReasonVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailed(refVal);
        }
    }
    return ok;
}


int32_t BatchResultVOIssueWithReasonVO::getSuccessNum() const
{
    return successNum_;
}

void BatchResultVOIssueWithReasonVO::setSuccessNum(int32_t value)
{
    successNum_ = value;
    successNumIsSet_ = true;
}

bool BatchResultVOIssueWithReasonVO::successNumIsSet() const
{
    return successNumIsSet_;
}

void BatchResultVOIssueWithReasonVO::unsetsuccessNum()
{
    successNumIsSet_ = false;
}

int32_t BatchResultVOIssueWithReasonVO::getFailNum() const
{
    return failNum_;
}

void BatchResultVOIssueWithReasonVO::setFailNum(int32_t value)
{
    failNum_ = value;
    failNumIsSet_ = true;
}

bool BatchResultVOIssueWithReasonVO::failNumIsSet() const
{
    return failNumIsSet_;
}

void BatchResultVOIssueWithReasonVO::unsetfailNum()
{
    failNumIsSet_ = false;
}

std::vector<IssueWithReasonVO>& BatchResultVOIssueWithReasonVO::getFailed()
{
    return failed_;
}

void BatchResultVOIssueWithReasonVO::setFailed(const std::vector<IssueWithReasonVO>& value)
{
    failed_ = value;
    failedIsSet_ = true;
}

bool BatchResultVOIssueWithReasonVO::failedIsSet() const
{
    return failedIsSet_;
}

void BatchResultVOIssueWithReasonVO::unsetfailed()
{
    failedIsSet_ = false;
}

}
}
}
}
}


