

#include "huaweicloud/gaussdbforopengauss/v3/model/KernelTimeDetails.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




KernelTimeDetails::KernelTimeDetails()
{
    parseTime_ = 0L;
    parseTimeIsSet_ = false;
    rewriteTime_ = 0L;
    rewriteTimeIsSet_ = false;
    planTime_ = 0L;
    planTimeIsSet_ = false;
    executionTime_ = 0L;
    executionTimeIsSet_ = false;
    otherTime_ = 0L;
    otherTimeIsSet_ = false;
}

KernelTimeDetails::~KernelTimeDetails() = default;

void KernelTimeDetails::validate()
{
}

web::json::value KernelTimeDetails::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parseTimeIsSet_) {
        val[utility::conversions::to_string_t("parse_time")] = ModelBase::toJson(parseTime_);
    }
    if(rewriteTimeIsSet_) {
        val[utility::conversions::to_string_t("rewrite_time")] = ModelBase::toJson(rewriteTime_);
    }
    if(planTimeIsSet_) {
        val[utility::conversions::to_string_t("plan_time")] = ModelBase::toJson(planTime_);
    }
    if(executionTimeIsSet_) {
        val[utility::conversions::to_string_t("execution_time")] = ModelBase::toJson(executionTime_);
    }
    if(otherTimeIsSet_) {
        val[utility::conversions::to_string_t("other_time")] = ModelBase::toJson(otherTime_);
    }

    return val;
}
bool KernelTimeDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parse_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parse_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParseTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rewrite_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rewrite_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRewriteTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("other_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("other_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOtherTime(refVal);
        }
    }
    return ok;
}


int64_t KernelTimeDetails::getParseTime() const
{
    return parseTime_;
}

void KernelTimeDetails::setParseTime(int64_t value)
{
    parseTime_ = value;
    parseTimeIsSet_ = true;
}

bool KernelTimeDetails::parseTimeIsSet() const
{
    return parseTimeIsSet_;
}

void KernelTimeDetails::unsetparseTime()
{
    parseTimeIsSet_ = false;
}

int64_t KernelTimeDetails::getRewriteTime() const
{
    return rewriteTime_;
}

void KernelTimeDetails::setRewriteTime(int64_t value)
{
    rewriteTime_ = value;
    rewriteTimeIsSet_ = true;
}

bool KernelTimeDetails::rewriteTimeIsSet() const
{
    return rewriteTimeIsSet_;
}

void KernelTimeDetails::unsetrewriteTime()
{
    rewriteTimeIsSet_ = false;
}

int64_t KernelTimeDetails::getPlanTime() const
{
    return planTime_;
}

void KernelTimeDetails::setPlanTime(int64_t value)
{
    planTime_ = value;
    planTimeIsSet_ = true;
}

bool KernelTimeDetails::planTimeIsSet() const
{
    return planTimeIsSet_;
}

void KernelTimeDetails::unsetplanTime()
{
    planTimeIsSet_ = false;
}

int64_t KernelTimeDetails::getExecutionTime() const
{
    return executionTime_;
}

void KernelTimeDetails::setExecutionTime(int64_t value)
{
    executionTime_ = value;
    executionTimeIsSet_ = true;
}

bool KernelTimeDetails::executionTimeIsSet() const
{
    return executionTimeIsSet_;
}

void KernelTimeDetails::unsetexecutionTime()
{
    executionTimeIsSet_ = false;
}

int64_t KernelTimeDetails::getOtherTime() const
{
    return otherTime_;
}

void KernelTimeDetails::setOtherTime(int64_t value)
{
    otherTime_ = value;
    otherTimeIsSet_ = true;
}

bool KernelTimeDetails::otherTimeIsSet() const
{
    return otherTimeIsSet_;
}

void KernelTimeDetails::unsetotherTime()
{
    otherTimeIsSet_ = false;
}

}
}
}
}
}


