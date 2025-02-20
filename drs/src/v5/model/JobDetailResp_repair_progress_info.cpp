

#include "huaweicloud/drs/v5/model/JobDetailResp_repair_progress_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




JobDetailResp_repair_progress_info::JobDetailResp_repair_progress_info()
{
    status_ = "";
    statusIsSet_ = false;
    progress_ = "";
    progressIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    repairProgressDetailsIsSet_ = false;
}

JobDetailResp_repair_progress_info::~JobDetailResp_repair_progress_info() = default;

void JobDetailResp_repair_progress_info::validate()
{
}

web::json::value JobDetailResp_repair_progress_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(repairProgressDetailsIsSet_) {
        val[utility::conversions::to_string_t("repair_progress_details")] = ModelBase::toJson(repairProgressDetails_);
    }

    return val;
}
bool JobDetailResp_repair_progress_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repair_progress_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repair_progress_details"));
        if(!fieldValue.is_null())
        {
            JobDetailResp_repair_progress_info_repair_progress_details refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepairProgressDetails(refVal);
        }
    }
    return ok;
}


std::string JobDetailResp_repair_progress_info::getStatus() const
{
    return status_;
}

void JobDetailResp_repair_progress_info::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool JobDetailResp_repair_progress_info::statusIsSet() const
{
    return statusIsSet_;
}

void JobDetailResp_repair_progress_info::unsetstatus()
{
    statusIsSet_ = false;
}

std::string JobDetailResp_repair_progress_info::getProgress() const
{
    return progress_;
}

void JobDetailResp_repair_progress_info::setProgress(const std::string& value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool JobDetailResp_repair_progress_info::progressIsSet() const
{
    return progressIsSet_;
}

void JobDetailResp_repair_progress_info::unsetprogress()
{
    progressIsSet_ = false;
}

std::string JobDetailResp_repair_progress_info::getErrorMsg() const
{
    return errorMsg_;
}

void JobDetailResp_repair_progress_info::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool JobDetailResp_repair_progress_info::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void JobDetailResp_repair_progress_info::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

int32_t JobDetailResp_repair_progress_info::getCount() const
{
    return count_;
}

void JobDetailResp_repair_progress_info::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool JobDetailResp_repair_progress_info::countIsSet() const
{
    return countIsSet_;
}

void JobDetailResp_repair_progress_info::unsetcount()
{
    countIsSet_ = false;
}

JobDetailResp_repair_progress_info_repair_progress_details JobDetailResp_repair_progress_info::getRepairProgressDetails() const
{
    return repairProgressDetails_;
}

void JobDetailResp_repair_progress_info::setRepairProgressDetails(const JobDetailResp_repair_progress_info_repair_progress_details& value)
{
    repairProgressDetails_ = value;
    repairProgressDetailsIsSet_ = true;
}

bool JobDetailResp_repair_progress_info::repairProgressDetailsIsSet() const
{
    return repairProgressDetailsIsSet_;
}

void JobDetailResp_repair_progress_info::unsetrepairProgressDetails()
{
    repairProgressDetailsIsSet_ = false;
}

}
}
}
}
}


