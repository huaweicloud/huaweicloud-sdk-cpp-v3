

#include "huaweicloud/metastudio/v1/model/TransferAssetJobInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TransferAssetJobInfo::TransferAssetJobInfo()
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
}

TransferAssetJobInfo::~TransferAssetJobInfo() = default;

void TransferAssetJobInfo::validate()
{
}

web::json::value TransferAssetJobInfo::toJson() const
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

    return val;
}
bool TransferAssetJobInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string TransferAssetJobInfo::getJobId() const
{
    return jobId_;
}

void TransferAssetJobInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool TransferAssetJobInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void TransferAssetJobInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

TransferTypeEnum TransferAssetJobInfo::getTransferType() const
{
    return transferType_;
}

void TransferAssetJobInfo::setTransferType(const TransferTypeEnum& value)
{
    transferType_ = value;
    transferTypeIsSet_ = true;
}

bool TransferAssetJobInfo::transferTypeIsSet() const
{
    return transferTypeIsSet_;
}

void TransferAssetJobInfo::unsettransferType()
{
    transferTypeIsSet_ = false;
}

std::vector<DigitalAssetSummary>& TransferAssetJobInfo::getTransferAssets()
{
    return transferAssets_;
}

void TransferAssetJobInfo::setTransferAssets(const std::vector<DigitalAssetSummary>& value)
{
    transferAssets_ = value;
    transferAssetsIsSet_ = true;
}

bool TransferAssetJobInfo::transferAssetsIsSet() const
{
    return transferAssetsIsSet_;
}

void TransferAssetJobInfo::unsettransferAssets()
{
    transferAssetsIsSet_ = false;
}

std::string TransferAssetJobInfo::getState() const
{
    return state_;
}

void TransferAssetJobInfo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool TransferAssetJobInfo::stateIsSet() const
{
    return stateIsSet_;
}

void TransferAssetJobInfo::unsetstate()
{
    stateIsSet_ = false;
}

std::string TransferAssetJobInfo::getSrcProjectId() const
{
    return srcProjectId_;
}

void TransferAssetJobInfo::setSrcProjectId(const std::string& value)
{
    srcProjectId_ = value;
    srcProjectIdIsSet_ = true;
}

bool TransferAssetJobInfo::srcProjectIdIsSet() const
{
    return srcProjectIdIsSet_;
}

void TransferAssetJobInfo::unsetsrcProjectId()
{
    srcProjectIdIsSet_ = false;
}

std::string TransferAssetJobInfo::getDestProjectId() const
{
    return destProjectId_;
}

void TransferAssetJobInfo::setDestProjectId(const std::string& value)
{
    destProjectId_ = value;
    destProjectIdIsSet_ = true;
}

bool TransferAssetJobInfo::destProjectIdIsSet() const
{
    return destProjectIdIsSet_;
}

void TransferAssetJobInfo::unsetdestProjectId()
{
    destProjectIdIsSet_ = false;
}

std::string TransferAssetJobInfo::getMemo() const
{
    return memo_;
}

void TransferAssetJobInfo::setMemo(const std::string& value)
{
    memo_ = value;
    memoIsSet_ = true;
}

bool TransferAssetJobInfo::memoIsSet() const
{
    return memoIsSet_;
}

void TransferAssetJobInfo::unsetmemo()
{
    memoIsSet_ = false;
}

std::string TransferAssetJobInfo::getReason() const
{
    return reason_;
}

void TransferAssetJobInfo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool TransferAssetJobInfo::reasonIsSet() const
{
    return reasonIsSet_;
}

void TransferAssetJobInfo::unsetreason()
{
    reasonIsSet_ = false;
}

std::string TransferAssetJobInfo::getStartTime() const
{
    return startTime_;
}

void TransferAssetJobInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool TransferAssetJobInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void TransferAssetJobInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string TransferAssetJobInfo::getFinishTime() const
{
    return finishTime_;
}

void TransferAssetJobInfo::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool TransferAssetJobInfo::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void TransferAssetJobInfo::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

std::string TransferAssetJobInfo::getExpireTime() const
{
    return expireTime_;
}

void TransferAssetJobInfo::setExpireTime(const std::string& value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool TransferAssetJobInfo::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void TransferAssetJobInfo::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

bool TransferAssetJobInfo::isIsNeedBilling() const
{
    return isNeedBilling_;
}

void TransferAssetJobInfo::setIsNeedBilling(bool value)
{
    isNeedBilling_ = value;
    isNeedBillingIsSet_ = true;
}

bool TransferAssetJobInfo::isNeedBillingIsSet() const
{
    return isNeedBillingIsSet_;
}

void TransferAssetJobInfo::unsetisNeedBilling()
{
    isNeedBillingIsSet_ = false;
}

ErrorResponse TransferAssetJobInfo::getErrorInfo() const
{
    return errorInfo_;
}

void TransferAssetJobInfo::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool TransferAssetJobInfo::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void TransferAssetJobInfo::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

}
}
}
}
}


