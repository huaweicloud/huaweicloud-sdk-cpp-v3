

#include "huaweicloud/lts/v2/model/CreateTransferResponseBody_log_transfer_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateTransferResponseBody_log_transfer_info::CreateTransferResponseBody_log_transfer_info()
{
    logAgencyTransferIsSet_ = false;
    logCreateTime_ = 0L;
    logCreateTimeIsSet_ = false;
    logStorageFormat_ = "";
    logStorageFormatIsSet_ = false;
    logTransferDetailIsSet_ = false;
    logTransferMode_ = "";
    logTransferModeIsSet_ = false;
    logTransferStatus_ = "";
    logTransferStatusIsSet_ = false;
    logTransferType_ = "";
    logTransferTypeIsSet_ = false;
}

CreateTransferResponseBody_log_transfer_info::~CreateTransferResponseBody_log_transfer_info() = default;

void CreateTransferResponseBody_log_transfer_info::validate()
{
}

web::json::value CreateTransferResponseBody_log_transfer_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logAgencyTransferIsSet_) {
        val[utility::conversions::to_string_t("log_agency_transfer")] = ModelBase::toJson(logAgencyTransfer_);
    }
    if(logCreateTimeIsSet_) {
        val[utility::conversions::to_string_t("log_create_time")] = ModelBase::toJson(logCreateTime_);
    }
    if(logStorageFormatIsSet_) {
        val[utility::conversions::to_string_t("log_storage_format")] = ModelBase::toJson(logStorageFormat_);
    }
    if(logTransferDetailIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_detail")] = ModelBase::toJson(logTransferDetail_);
    }
    if(logTransferModeIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_mode")] = ModelBase::toJson(logTransferMode_);
    }
    if(logTransferStatusIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_status")] = ModelBase::toJson(logTransferStatus_);
    }
    if(logTransferTypeIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_type")] = ModelBase::toJson(logTransferType_);
    }

    return val;
}
bool CreateTransferResponseBody_log_transfer_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_agency_transfer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_agency_transfer"));
        if(!fieldValue.is_null())
        {
            CreateTransferResponseBody_log_transfer_info_log_agency_transfer refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogAgencyTransfer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_storage_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_storage_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStorageFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_transfer_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_transfer_detail"));
        if(!fieldValue.is_null())
        {
            TransferDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTransferDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_transfer_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_transfer_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTransferMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_transfer_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_transfer_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTransferStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_transfer_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_transfer_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTransferType(refVal);
        }
    }
    return ok;
}


CreateTransferResponseBody_log_transfer_info_log_agency_transfer CreateTransferResponseBody_log_transfer_info::getLogAgencyTransfer() const
{
    return logAgencyTransfer_;
}

void CreateTransferResponseBody_log_transfer_info::setLogAgencyTransfer(const CreateTransferResponseBody_log_transfer_info_log_agency_transfer& value)
{
    logAgencyTransfer_ = value;
    logAgencyTransferIsSet_ = true;
}

bool CreateTransferResponseBody_log_transfer_info::logAgencyTransferIsSet() const
{
    return logAgencyTransferIsSet_;
}

void CreateTransferResponseBody_log_transfer_info::unsetlogAgencyTransfer()
{
    logAgencyTransferIsSet_ = false;
}

int64_t CreateTransferResponseBody_log_transfer_info::getLogCreateTime() const
{
    return logCreateTime_;
}

void CreateTransferResponseBody_log_transfer_info::setLogCreateTime(int64_t value)
{
    logCreateTime_ = value;
    logCreateTimeIsSet_ = true;
}

bool CreateTransferResponseBody_log_transfer_info::logCreateTimeIsSet() const
{
    return logCreateTimeIsSet_;
}

void CreateTransferResponseBody_log_transfer_info::unsetlogCreateTime()
{
    logCreateTimeIsSet_ = false;
}

std::string CreateTransferResponseBody_log_transfer_info::getLogStorageFormat() const
{
    return logStorageFormat_;
}

void CreateTransferResponseBody_log_transfer_info::setLogStorageFormat(const std::string& value)
{
    logStorageFormat_ = value;
    logStorageFormatIsSet_ = true;
}

bool CreateTransferResponseBody_log_transfer_info::logStorageFormatIsSet() const
{
    return logStorageFormatIsSet_;
}

void CreateTransferResponseBody_log_transfer_info::unsetlogStorageFormat()
{
    logStorageFormatIsSet_ = false;
}

TransferDetail CreateTransferResponseBody_log_transfer_info::getLogTransferDetail() const
{
    return logTransferDetail_;
}

void CreateTransferResponseBody_log_transfer_info::setLogTransferDetail(const TransferDetail& value)
{
    logTransferDetail_ = value;
    logTransferDetailIsSet_ = true;
}

bool CreateTransferResponseBody_log_transfer_info::logTransferDetailIsSet() const
{
    return logTransferDetailIsSet_;
}

void CreateTransferResponseBody_log_transfer_info::unsetlogTransferDetail()
{
    logTransferDetailIsSet_ = false;
}

std::string CreateTransferResponseBody_log_transfer_info::getLogTransferMode() const
{
    return logTransferMode_;
}

void CreateTransferResponseBody_log_transfer_info::setLogTransferMode(const std::string& value)
{
    logTransferMode_ = value;
    logTransferModeIsSet_ = true;
}

bool CreateTransferResponseBody_log_transfer_info::logTransferModeIsSet() const
{
    return logTransferModeIsSet_;
}

void CreateTransferResponseBody_log_transfer_info::unsetlogTransferMode()
{
    logTransferModeIsSet_ = false;
}

std::string CreateTransferResponseBody_log_transfer_info::getLogTransferStatus() const
{
    return logTransferStatus_;
}

void CreateTransferResponseBody_log_transfer_info::setLogTransferStatus(const std::string& value)
{
    logTransferStatus_ = value;
    logTransferStatusIsSet_ = true;
}

bool CreateTransferResponseBody_log_transfer_info::logTransferStatusIsSet() const
{
    return logTransferStatusIsSet_;
}

void CreateTransferResponseBody_log_transfer_info::unsetlogTransferStatus()
{
    logTransferStatusIsSet_ = false;
}

std::string CreateTransferResponseBody_log_transfer_info::getLogTransferType() const
{
    return logTransferType_;
}

void CreateTransferResponseBody_log_transfer_info::setLogTransferType(const std::string& value)
{
    logTransferType_ = value;
    logTransferTypeIsSet_ = true;
}

bool CreateTransferResponseBody_log_transfer_info::logTransferTypeIsSet() const
{
    return logTransferTypeIsSet_;
}

void CreateTransferResponseBody_log_transfer_info::unsetlogTransferType()
{
    logTransferTypeIsSet_ = false;
}

}
}
}
}
}


