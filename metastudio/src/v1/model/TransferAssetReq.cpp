

#include "huaweicloud/metastudio/v1/model/TransferAssetReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TransferAssetReq::TransferAssetReq()
{
    transferTypeIsSet_ = false;
    assetIdsIsSet_ = false;
    destProjectId_ = "";
    destProjectIdIsSet_ = false;
    memo_ = "";
    memoIsSet_ = false;
    autoAccept_ = false;
    autoAcceptIsSet_ = false;
    autoActive_ = false;
    autoActiveIsSet_ = false;
    isNeedBilling_ = false;
    isNeedBillingIsSet_ = false;
    transferJobId_ = "";
    transferJobIdIsSet_ = false;
}

TransferAssetReq::~TransferAssetReq() = default;

void TransferAssetReq::validate()
{
}

web::json::value TransferAssetReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(transferTypeIsSet_) {
        val[utility::conversions::to_string_t("transfer_type")] = ModelBase::toJson(transferType_);
    }
    if(assetIdsIsSet_) {
        val[utility::conversions::to_string_t("asset_ids")] = ModelBase::toJson(assetIds_);
    }
    if(destProjectIdIsSet_) {
        val[utility::conversions::to_string_t("dest_project_id")] = ModelBase::toJson(destProjectId_);
    }
    if(memoIsSet_) {
        val[utility::conversions::to_string_t("memo")] = ModelBase::toJson(memo_);
    }
    if(autoAcceptIsSet_) {
        val[utility::conversions::to_string_t("auto_accept")] = ModelBase::toJson(autoAccept_);
    }
    if(autoActiveIsSet_) {
        val[utility::conversions::to_string_t("auto_active")] = ModelBase::toJson(autoActive_);
    }
    if(isNeedBillingIsSet_) {
        val[utility::conversions::to_string_t("is_need_billing")] = ModelBase::toJson(isNeedBilling_);
    }
    if(transferJobIdIsSet_) {
        val[utility::conversions::to_string_t("transfer_job_id")] = ModelBase::toJson(transferJobId_);
    }

    return val;
}
bool TransferAssetReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("transfer_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfer_type"));
        if(!fieldValue.is_null())
        {
            TransferTypeEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransferType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("auto_accept"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_accept"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoAccept(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_active"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_active"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoActive(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("transfer_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfer_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransferJobId(refVal);
        }
    }
    return ok;
}


TransferTypeEnum TransferAssetReq::getTransferType() const
{
    return transferType_;
}

void TransferAssetReq::setTransferType(const TransferTypeEnum& value)
{
    transferType_ = value;
    transferTypeIsSet_ = true;
}

bool TransferAssetReq::transferTypeIsSet() const
{
    return transferTypeIsSet_;
}

void TransferAssetReq::unsettransferType()
{
    transferTypeIsSet_ = false;
}

std::vector<std::string>& TransferAssetReq::getAssetIds()
{
    return assetIds_;
}

void TransferAssetReq::setAssetIds(const std::vector<std::string>& value)
{
    assetIds_ = value;
    assetIdsIsSet_ = true;
}

bool TransferAssetReq::assetIdsIsSet() const
{
    return assetIdsIsSet_;
}

void TransferAssetReq::unsetassetIds()
{
    assetIdsIsSet_ = false;
}

std::string TransferAssetReq::getDestProjectId() const
{
    return destProjectId_;
}

void TransferAssetReq::setDestProjectId(const std::string& value)
{
    destProjectId_ = value;
    destProjectIdIsSet_ = true;
}

bool TransferAssetReq::destProjectIdIsSet() const
{
    return destProjectIdIsSet_;
}

void TransferAssetReq::unsetdestProjectId()
{
    destProjectIdIsSet_ = false;
}

std::string TransferAssetReq::getMemo() const
{
    return memo_;
}

void TransferAssetReq::setMemo(const std::string& value)
{
    memo_ = value;
    memoIsSet_ = true;
}

bool TransferAssetReq::memoIsSet() const
{
    return memoIsSet_;
}

void TransferAssetReq::unsetmemo()
{
    memoIsSet_ = false;
}

bool TransferAssetReq::isAutoAccept() const
{
    return autoAccept_;
}

void TransferAssetReq::setAutoAccept(bool value)
{
    autoAccept_ = value;
    autoAcceptIsSet_ = true;
}

bool TransferAssetReq::autoAcceptIsSet() const
{
    return autoAcceptIsSet_;
}

void TransferAssetReq::unsetautoAccept()
{
    autoAcceptIsSet_ = false;
}

bool TransferAssetReq::isAutoActive() const
{
    return autoActive_;
}

void TransferAssetReq::setAutoActive(bool value)
{
    autoActive_ = value;
    autoActiveIsSet_ = true;
}

bool TransferAssetReq::autoActiveIsSet() const
{
    return autoActiveIsSet_;
}

void TransferAssetReq::unsetautoActive()
{
    autoActiveIsSet_ = false;
}

bool TransferAssetReq::isIsNeedBilling() const
{
    return isNeedBilling_;
}

void TransferAssetReq::setIsNeedBilling(bool value)
{
    isNeedBilling_ = value;
    isNeedBillingIsSet_ = true;
}

bool TransferAssetReq::isNeedBillingIsSet() const
{
    return isNeedBillingIsSet_;
}

void TransferAssetReq::unsetisNeedBilling()
{
    isNeedBillingIsSet_ = false;
}

std::string TransferAssetReq::getTransferJobId() const
{
    return transferJobId_;
}

void TransferAssetReq::setTransferJobId(const std::string& value)
{
    transferJobId_ = value;
    transferJobIdIsSet_ = true;
}

bool TransferAssetReq::transferJobIdIsSet() const
{
    return transferJobIdIsSet_;
}

void TransferAssetReq::unsettransferJobId()
{
    transferJobIdIsSet_ = false;
}

}
}
}
}
}


