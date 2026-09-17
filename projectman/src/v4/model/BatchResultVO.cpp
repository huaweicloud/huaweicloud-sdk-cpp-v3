

#include "huaweicloud/projectman/v4/model/BatchResultVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchResultVO::BatchResultVO()
{
    successNum_ = 0.0;
    successNumIsSet_ = false;
    failNum_ = 0.0;
    failNumIsSet_ = false;
    successIsSet_ = false;
    failedIsSet_ = false;
}

BatchResultVO::~BatchResultVO() = default;

void BatchResultVO::validate()
{
}

web::json::value BatchResultVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successNumIsSet_) {
        val[utility::conversions::to_string_t("success_num")] = ModelBase::toJson(successNum_);
    }
    if(failNumIsSet_) {
        val[utility::conversions::to_string_t("fail_num")] = ModelBase::toJson(failNum_);
    }
    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(failedIsSet_) {
        val[utility::conversions::to_string_t("failed")] = ModelBase::toJson(failed_);
    }

    return val;
}
bool BatchResultVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_num"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_num"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchOperateInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchOperateInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailed(refVal);
        }
    }
    return ok;
}


double BatchResultVO::getSuccessNum() const
{
    return successNum_;
}

void BatchResultVO::setSuccessNum(double value)
{
    successNum_ = value;
    successNumIsSet_ = true;
}

bool BatchResultVO::successNumIsSet() const
{
    return successNumIsSet_;
}

void BatchResultVO::unsetsuccessNum()
{
    successNumIsSet_ = false;
}

double BatchResultVO::getFailNum() const
{
    return failNum_;
}

void BatchResultVO::setFailNum(double value)
{
    failNum_ = value;
    failNumIsSet_ = true;
}

bool BatchResultVO::failNumIsSet() const
{
    return failNumIsSet_;
}

void BatchResultVO::unsetfailNum()
{
    failNumIsSet_ = false;
}

std::vector<BatchOperateInfo>& BatchResultVO::getSuccess()
{
    return success_;
}

void BatchResultVO::setSuccess(const std::vector<BatchOperateInfo>& value)
{
    success_ = value;
    successIsSet_ = true;
}

bool BatchResultVO::successIsSet() const
{
    return successIsSet_;
}

void BatchResultVO::unsetsuccess()
{
    successIsSet_ = false;
}

std::vector<BatchOperateInfo>& BatchResultVO::getFailed()
{
    return failed_;
}

void BatchResultVO::setFailed(const std::vector<BatchOperateInfo>& value)
{
    failed_ = value;
    failedIsSet_ = true;
}

bool BatchResultVO::failedIsSet() const
{
    return failedIsSet_;
}

void BatchResultVO::unsetfailed()
{
    failedIsSet_ = false;
}

}
}
}
}
}


