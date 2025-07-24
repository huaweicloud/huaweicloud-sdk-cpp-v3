

#include "huaweicloud/cloudtest/v1/model/ExternalUserExecuteInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExternalUserExecuteInfo::ExternalUserExecuteInfo()
{
    executorIsSet_ = false;
    executeCount_ = 0;
    executeCountIsSet_ = false;
}

ExternalUserExecuteInfo::~ExternalUserExecuteInfo() = default;

void ExternalUserExecuteInfo::validate()
{
}

web::json::value ExternalUserExecuteInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(executorIsSet_) {
        val[utility::conversions::to_string_t("executor")] = ModelBase::toJson(executor_);
    }
    if(executeCountIsSet_) {
        val[utility::conversions::to_string_t("execute_count")] = ModelBase::toJson(executeCount_);
    }

    return val;
}
bool ExternalUserExecuteInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("executor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor"));
        if(!fieldValue.is_null())
        {
            NameAndIdVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteCount(refVal);
        }
    }
    return ok;
}


NameAndIdVo ExternalUserExecuteInfo::getExecutor() const
{
    return executor_;
}

void ExternalUserExecuteInfo::setExecutor(const NameAndIdVo& value)
{
    executor_ = value;
    executorIsSet_ = true;
}

bool ExternalUserExecuteInfo::executorIsSet() const
{
    return executorIsSet_;
}

void ExternalUserExecuteInfo::unsetexecutor()
{
    executorIsSet_ = false;
}

int32_t ExternalUserExecuteInfo::getExecuteCount() const
{
    return executeCount_;
}

void ExternalUserExecuteInfo::setExecuteCount(int32_t value)
{
    executeCount_ = value;
    executeCountIsSet_ = true;
}

bool ExternalUserExecuteInfo::executeCountIsSet() const
{
    return executeCountIsSet_;
}

void ExternalUserExecuteInfo::unsetexecuteCount()
{
    executeCountIsSet_ = false;
}

}
}
}
}
}


