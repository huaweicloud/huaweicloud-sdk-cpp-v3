

#include "huaweicloud/cloudtest/v1/model/ShowUserExecuteTestCaseInfoRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowUserExecuteTestCaseInfoRequestBody::ShowUserExecuteTestCaseInfoRequestBody()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    executeStartTime_ = "";
    executeStartTimeIsSet_ = false;
    executeEndTime_ = "";
    executeEndTimeIsSet_ = false;
}

ShowUserExecuteTestCaseInfoRequestBody::~ShowUserExecuteTestCaseInfoRequestBody() = default;

void ShowUserExecuteTestCaseInfoRequestBody::validate()
{
}

web::json::value ShowUserExecuteTestCaseInfoRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(executeStartTimeIsSet_) {
        val[utility::conversions::to_string_t("execute_start_time")] = ModelBase::toJson(executeStartTime_);
    }
    if(executeEndTimeIsSet_) {
        val[utility::conversions::to_string_t("execute_end_time")] = ModelBase::toJson(executeEndTime_);
    }

    return val;
}
bool ShowUserExecuteTestCaseInfoRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteEndTime(refVal);
        }
    }
    return ok;
}


int32_t ShowUserExecuteTestCaseInfoRequestBody::getOffset() const
{
    return offset_;
}

void ShowUserExecuteTestCaseInfoRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowUserExecuteTestCaseInfoRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowUserExecuteTestCaseInfoRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowUserExecuteTestCaseInfoRequestBody::getLimit() const
{
    return limit_;
}

void ShowUserExecuteTestCaseInfoRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowUserExecuteTestCaseInfoRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ShowUserExecuteTestCaseInfoRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowUserExecuteTestCaseInfoRequestBody::getExecuteStartTime() const
{
    return executeStartTime_;
}

void ShowUserExecuteTestCaseInfoRequestBody::setExecuteStartTime(const std::string& value)
{
    executeStartTime_ = value;
    executeStartTimeIsSet_ = true;
}

bool ShowUserExecuteTestCaseInfoRequestBody::executeStartTimeIsSet() const
{
    return executeStartTimeIsSet_;
}

void ShowUserExecuteTestCaseInfoRequestBody::unsetexecuteStartTime()
{
    executeStartTimeIsSet_ = false;
}

std::string ShowUserExecuteTestCaseInfoRequestBody::getExecuteEndTime() const
{
    return executeEndTime_;
}

void ShowUserExecuteTestCaseInfoRequestBody::setExecuteEndTime(const std::string& value)
{
    executeEndTime_ = value;
    executeEndTimeIsSet_ = true;
}

bool ShowUserExecuteTestCaseInfoRequestBody::executeEndTimeIsSet() const
{
    return executeEndTimeIsSet_;
}

void ShowUserExecuteTestCaseInfoRequestBody::unsetexecuteEndTime()
{
    executeEndTimeIsSet_ = false;
}

}
}
}
}
}


