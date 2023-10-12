

#include "huaweicloud/drs/v3/model/CompareTaskListResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CompareTaskListResult::CompareTaskListResult()
{
    compareTaskListIsSet_ = false;
    compareTaskListCount_ = 0;
    compareTaskListCountIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
}

CompareTaskListResult::~CompareTaskListResult() = default;

void CompareTaskListResult::validate()
{
}

web::json::value CompareTaskListResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compareTaskListIsSet_) {
        val[utility::conversions::to_string_t("compare_task_list")] = ModelBase::toJson(compareTaskList_);
    }
    if(compareTaskListCountIsSet_) {
        val[utility::conversions::to_string_t("compare_task_list_count")] = ModelBase::toJson(compareTaskListCount_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }

    return val;
}
bool CompareTaskListResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compare_task_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_task_list"));
        if(!fieldValue.is_null())
        {
            std::vector<CompareTaskList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareTaskList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_task_list_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_task_list_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareTaskListCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    return ok;
}


std::vector<CompareTaskList>& CompareTaskListResult::getCompareTaskList()
{
    return compareTaskList_;
}

void CompareTaskListResult::setCompareTaskList(const std::vector<CompareTaskList>& value)
{
    compareTaskList_ = value;
    compareTaskListIsSet_ = true;
}

bool CompareTaskListResult::compareTaskListIsSet() const
{
    return compareTaskListIsSet_;
}

void CompareTaskListResult::unsetcompareTaskList()
{
    compareTaskListIsSet_ = false;
}

int32_t CompareTaskListResult::getCompareTaskListCount() const
{
    return compareTaskListCount_;
}

void CompareTaskListResult::setCompareTaskListCount(int32_t value)
{
    compareTaskListCount_ = value;
    compareTaskListCountIsSet_ = true;
}

bool CompareTaskListResult::compareTaskListCountIsSet() const
{
    return compareTaskListCountIsSet_;
}

void CompareTaskListResult::unsetcompareTaskListCount()
{
    compareTaskListCountIsSet_ = false;
}

std::string CompareTaskListResult::getErrorMsg() const
{
    return errorMsg_;
}

void CompareTaskListResult::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool CompareTaskListResult::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void CompareTaskListResult::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::string CompareTaskListResult::getErrorCode() const
{
    return errorCode_;
}

void CompareTaskListResult::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool CompareTaskListResult::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void CompareTaskListResult::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

}
}
}
}
}


