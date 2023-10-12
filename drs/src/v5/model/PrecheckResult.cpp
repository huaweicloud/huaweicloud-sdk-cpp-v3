

#include "huaweicloud/drs/v5/model/PrecheckResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




PrecheckResult::PrecheckResult()
{
    item_ = "";
    itemIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    failedReason_ = "";
    failedReasonIsSet_ = false;
    data_ = "";
    dataIsSet_ = false;
    rawErrorMsg_ = "";
    rawErrorMsgIsSet_ = false;
    group_ = "";
    groupIsSet_ = false;
    isSupportSkip_ = false;
    isSupportSkipIsSet_ = false;
    isSkipped_ = false;
    isSkippedIsSet_ = false;
    failedSubJobsIsSet_ = false;
}

PrecheckResult::~PrecheckResult() = default;

void PrecheckResult::validate()
{
}

web::json::value PrecheckResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(itemIsSet_) {
        val[utility::conversions::to_string_t("item")] = ModelBase::toJson(item_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(failedReasonIsSet_) {
        val[utility::conversions::to_string_t("failed_reason")] = ModelBase::toJson(failedReason_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(rawErrorMsgIsSet_) {
        val[utility::conversions::to_string_t("raw_error_msg")] = ModelBase::toJson(rawErrorMsg_);
    }
    if(groupIsSet_) {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(group_);
    }
    if(isSupportSkipIsSet_) {
        val[utility::conversions::to_string_t("is_support_skip")] = ModelBase::toJson(isSupportSkip_);
    }
    if(isSkippedIsSet_) {
        val[utility::conversions::to_string_t("is_skipped")] = ModelBase::toJson(isSkipped_);
    }
    if(failedSubJobsIsSet_) {
        val[utility::conversions::to_string_t("failed_sub_jobs")] = ModelBase::toJson(failedSubJobs_);
    }

    return val;
}
bool PrecheckResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("item"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("raw_error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("raw_error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRawErrorMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_skip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_skip"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportSkip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_skipped"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_skipped"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSkipped(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_sub_jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_sub_jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<PrecheckFailSubJobResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedSubJobs(refVal);
        }
    }
    return ok;
}


std::string PrecheckResult::getItem() const
{
    return item_;
}

void PrecheckResult::setItem(const std::string& value)
{
    item_ = value;
    itemIsSet_ = true;
}

bool PrecheckResult::itemIsSet() const
{
    return itemIsSet_;
}

void PrecheckResult::unsetitem()
{
    itemIsSet_ = false;
}

std::string PrecheckResult::getResult() const
{
    return result_;
}

void PrecheckResult::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool PrecheckResult::resultIsSet() const
{
    return resultIsSet_;
}

void PrecheckResult::unsetresult()
{
    resultIsSet_ = false;
}

std::string PrecheckResult::getFailedReason() const
{
    return failedReason_;
}

void PrecheckResult::setFailedReason(const std::string& value)
{
    failedReason_ = value;
    failedReasonIsSet_ = true;
}

bool PrecheckResult::failedReasonIsSet() const
{
    return failedReasonIsSet_;
}

void PrecheckResult::unsetfailedReason()
{
    failedReasonIsSet_ = false;
}

std::string PrecheckResult::getData() const
{
    return data_;
}

void PrecheckResult::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool PrecheckResult::dataIsSet() const
{
    return dataIsSet_;
}

void PrecheckResult::unsetdata()
{
    dataIsSet_ = false;
}

std::string PrecheckResult::getRawErrorMsg() const
{
    return rawErrorMsg_;
}

void PrecheckResult::setRawErrorMsg(const std::string& value)
{
    rawErrorMsg_ = value;
    rawErrorMsgIsSet_ = true;
}

bool PrecheckResult::rawErrorMsgIsSet() const
{
    return rawErrorMsgIsSet_;
}

void PrecheckResult::unsetrawErrorMsg()
{
    rawErrorMsgIsSet_ = false;
}

std::string PrecheckResult::getGroup() const
{
    return group_;
}

void PrecheckResult::setGroup(const std::string& value)
{
    group_ = value;
    groupIsSet_ = true;
}

bool PrecheckResult::groupIsSet() const
{
    return groupIsSet_;
}

void PrecheckResult::unsetgroup()
{
    groupIsSet_ = false;
}

bool PrecheckResult::isIsSupportSkip() const
{
    return isSupportSkip_;
}

void PrecheckResult::setIsSupportSkip(bool value)
{
    isSupportSkip_ = value;
    isSupportSkipIsSet_ = true;
}

bool PrecheckResult::isSupportSkipIsSet() const
{
    return isSupportSkipIsSet_;
}

void PrecheckResult::unsetisSupportSkip()
{
    isSupportSkipIsSet_ = false;
}

bool PrecheckResult::isIsSkipped() const
{
    return isSkipped_;
}

void PrecheckResult::setIsSkipped(bool value)
{
    isSkipped_ = value;
    isSkippedIsSet_ = true;
}

bool PrecheckResult::isSkippedIsSet() const
{
    return isSkippedIsSet_;
}

void PrecheckResult::unsetisSkipped()
{
    isSkippedIsSet_ = false;
}

std::vector<PrecheckFailSubJobResult>& PrecheckResult::getFailedSubJobs()
{
    return failedSubJobs_;
}

void PrecheckResult::setFailedSubJobs(const std::vector<PrecheckFailSubJobResult>& value)
{
    failedSubJobs_ = value;
    failedSubJobsIsSet_ = true;
}

bool PrecheckResult::failedSubJobsIsSet() const
{
    return failedSubJobsIsSet_;
}

void PrecheckResult::unsetfailedSubJobs()
{
    failedSubJobsIsSet_ = false;
}

}
}
}
}
}


