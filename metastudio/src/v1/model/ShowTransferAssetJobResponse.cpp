

#include "huaweicloud/metastudio/v1/model/ShowTransferAssetJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTransferAssetJobResponse::ShowTransferAssetJobResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    transferTypeIsSet_ = false;
    transferAssetsIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    srcProjectId_ = "";
    srcProjectIdIsSet_ = false;
    destProjectId_ = "";
    destProjectIdIsSet_ = false;
    memo_ = "";
    memoIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    finishTime_ = "";
    finishTimeIsSet_ = false;
    expireTime_ = "";
    expireTimeIsSet_ = false;
    isNeedBilling_ = false;
    isNeedBillingIsSet_ = false;
    errorInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowTransferAssetJobResponse::~ShowTransferAssetJobResponse() = default;

void ShowTransferAssetJobResponse::validate()
{
}

web::json::value ShowTransferAssetJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(transferTypeIsSet_) {
        val[utility::conversions::to_string_t("transfer_type")] = ModelBase::toJson(transferType_);
    }
    if(transferAssetsIsSet_) {
        val[utility::conversions::to_string_t("transfer_assets")] = ModelBase::toJson(transferAssets_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(srcProjectIdIsSet_) {
        val[utility::conversions::to_string_t("src_project_id")] = ModelBase::toJson(srcProjectId_);
    }
    if(destProjectIdIsSet_) {
        val[utility::conversions::to_string_t("dest_project_id")] = ModelBase::toJson(destProjectId_);
    }
    if(memoIsSet_) {
        val[utility::conversions::to_string_t("memo")] = ModelBase::toJson(memo_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(finishTimeIsSet_) {
        val[utility::conversions::to_string_t("finish_time")] = ModelBase::toJson(finishTime_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(isNeedBillingIsSet_) {
        val[utility::conversions::to_string_t("is_need_billing")] = ModelBase::toJson(isNeedBilling_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowTransferAssetJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transfer_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfer_type"));
        if(!fieldValue.is_null())
        {
            TransferTypeEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransferType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transfer_assets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfer_assets"));
        if(!fieldValue.is_null())
        {
            std::vector<DigitalAssetSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransferAssets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dest_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dest_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_need_billing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_need_billing"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsNeedBilling(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_info"));
        if(!fieldValue.is_null())
        {
            ErrorResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowTransferAssetJobResponse::getJobId() const
{
    return jobId_;
}

void ShowTransferAssetJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowTransferAssetJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowTransferAssetJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

TransferTypeEnum ShowTransferAssetJobResponse::getTransferType() const
{
    return transferType_;
}

void ShowTransferAssetJobResponse::setTransferType(const TransferTypeEnum& value)
{
    transferType_ = value;
    transferTypeIsSet_ = true;
}

bool ShowTransferAssetJobResponse::transferTypeIsSet() const
{
    return transferTypeIsSet_;
}

void ShowTransferAssetJobResponse::unsettransferType()
{
    transferTypeIsSet_ = false;
}

std::vector<DigitalAssetSummary>& ShowTransferAssetJobResponse::getTransferAssets()
{
    return transferAssets_;
}

void ShowTransferAssetJobResponse::setTransferAssets(const std::vector<DigitalAssetSummary>& value)
{
    transferAssets_ = value;
    transferAssetsIsSet_ = true;
}

bool ShowTransferAssetJobResponse::transferAssetsIsSet() const
{
    return transferAssetsIsSet_;
}

void ShowTransferAssetJobResponse::unsettransferAssets()
{
    transferAssetsIsSet_ = false;
}

std::string ShowTransferAssetJobResponse::getState() const
{
    return state_;
}

void ShowTransferAssetJobResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowTransferAssetJobResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowTransferAssetJobResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string ShowTransferAssetJobResponse::getSrcProjectId() const
{
    return srcProjectId_;
}

void ShowTransferAssetJobResponse::setSrcProjectId(const std::string& value)
{
    srcProjectId_ = value;
    srcProjectIdIsSet_ = true;
}

bool ShowTransferAssetJobResponse::srcProjectIdIsSet() const
{
    return srcProjectIdIsSet_;
}

void ShowTransferAssetJobResponse::unsetsrcProjectId()
{
    srcProjectIdIsSet_ = false;
}

std::string ShowTransferAssetJobResponse::getDestProjectId() const
{
    return destProjectId_;
}

void ShowTransferAssetJobResponse::setDestProjectId(const std::string& value)
{
    destProjectId_ = value;
    destProjectIdIsSet_ = true;
}

bool ShowTransferAssetJobResponse::destProjectIdIsSet() const
{
    return destProjectIdIsSet_;
}

void ShowTransferAssetJobResponse::unsetdestProjectId()
{
    destProjectIdIsSet_ = false;
}

std::string ShowTransferAssetJobResponse::getMemo() const
{
    return memo_;
}

void ShowTransferAssetJobResponse::setMemo(const std::string& value)
{
    memo_ = value;
    memoIsSet_ = true;
}

bool ShowTransferAssetJobResponse::memoIsSet() const
{
    return memoIsSet_;
}

void ShowTransferAssetJobResponse::unsetmemo()
{
    memoIsSet_ = false;
}

std::string ShowTransferAssetJobResponse::getReason() const
{
    return reason_;
}

void ShowTransferAssetJobResponse::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ShowTransferAssetJobResponse::reasonIsSet() const
{
    return reasonIsSet_;
}

void ShowTransferAssetJobResponse::unsetreason()
{
    reasonIsSet_ = false;
}

std::string ShowTransferAssetJobResponse::getStartTime() const
{
    return startTime_;
}

void ShowTransferAssetJobResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowTransferAssetJobResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowTransferAssetJobResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowTransferAssetJobResponse::getFinishTime() const
{
    return finishTime_;
}

void ShowTransferAssetJobResponse::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool ShowTransferAssetJobResponse::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void ShowTransferAssetJobResponse::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

std::string ShowTransferAssetJobResponse::getExpireTime() const
{
    return expireTime_;
}

void ShowTransferAssetJobResponse::setExpireTime(const std::string& value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool ShowTransferAssetJobResponse::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void ShowTransferAssetJobResponse::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

bool ShowTransferAssetJobResponse::isIsNeedBilling() const
{
    return isNeedBilling_;
}

void ShowTransferAssetJobResponse::setIsNeedBilling(bool value)
{
    isNeedBilling_ = value;
    isNeedBillingIsSet_ = true;
}

bool ShowTransferAssetJobResponse::isNeedBillingIsSet() const
{
    return isNeedBillingIsSet_;
}

void ShowTransferAssetJobResponse::unsetisNeedBilling()
{
    isNeedBillingIsSet_ = false;
}

ErrorResponse ShowTransferAssetJobResponse::getErrorInfo() const
{
    return errorInfo_;
}

void ShowTransferAssetJobResponse::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool ShowTransferAssetJobResponse::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void ShowTransferAssetJobResponse::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

std::string ShowTransferAssetJobResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowTransferAssetJobResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowTransferAssetJobResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowTransferAssetJobResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


