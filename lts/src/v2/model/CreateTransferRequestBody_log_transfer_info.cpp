

#include "huaweicloud/lts/v2/model/CreateTransferRequestBody_log_transfer_info.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateTransferRequestBody_log_transfer_info::CreateTransferRequestBody_log_transfer_info()
{
    logTransferType_ = "";
    logTransferTypeIsSet_ = false;
    logTransferMode_ = "";
    logTransferModeIsSet_ = false;
    logStorageFormat_ = "";
    logStorageFormatIsSet_ = false;
    logTransferStatus_ = "";
    logTransferStatusIsSet_ = false;
    logAgencyTransferIsSet_ = false;
    logTransferDetailIsSet_ = false;
}

CreateTransferRequestBody_log_transfer_info::~CreateTransferRequestBody_log_transfer_info() = default;

void CreateTransferRequestBody_log_transfer_info::validate()
{
}

web::json::value CreateTransferRequestBody_log_transfer_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logTransferTypeIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_type")] = ModelBase::toJson(logTransferType_);
    }
    if(logTransferModeIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_mode")] = ModelBase::toJson(logTransferMode_);
    }
    if(logStorageFormatIsSet_) {
        val[utility::conversions::to_string_t("log_storage_format")] = ModelBase::toJson(logStorageFormat_);
    }
    if(logTransferStatusIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_status")] = ModelBase::toJson(logTransferStatus_);
    }
    if(logAgencyTransferIsSet_) {
        val[utility::conversions::to_string_t("log_agency_transfer")] = ModelBase::toJson(logAgencyTransfer_);
    }
    if(logTransferDetailIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_detail")] = ModelBase::toJson(logTransferDetail_);
    }

    return val;
}

bool CreateTransferRequestBody_log_transfer_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_transfer_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_transfer_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTransferType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("log_storage_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_storage_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStorageFormat(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("log_agency_transfer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_agency_transfer"));
        if(!fieldValue.is_null())
        {
            CreateTransferRequestBody_log_transfer_info_log_agency_transfer refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogAgencyTransfer(refVal);
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
    return ok;
}

std::string CreateTransferRequestBody_log_transfer_info::getLogTransferType() const
{
    return logTransferType_;
}

void CreateTransferRequestBody_log_transfer_info::setLogTransferType(const std::string& value)
{
    logTransferType_ = value;
    logTransferTypeIsSet_ = true;
}

bool CreateTransferRequestBody_log_transfer_info::logTransferTypeIsSet() const
{
    return logTransferTypeIsSet_;
}

void CreateTransferRequestBody_log_transfer_info::unsetlogTransferType()
{
    logTransferTypeIsSet_ = false;
}

std::string CreateTransferRequestBody_log_transfer_info::getLogTransferMode() const
{
    return logTransferMode_;
}

void CreateTransferRequestBody_log_transfer_info::setLogTransferMode(const std::string& value)
{
    logTransferMode_ = value;
    logTransferModeIsSet_ = true;
}

bool CreateTransferRequestBody_log_transfer_info::logTransferModeIsSet() const
{
    return logTransferModeIsSet_;
}

void CreateTransferRequestBody_log_transfer_info::unsetlogTransferMode()
{
    logTransferModeIsSet_ = false;
}

std::string CreateTransferRequestBody_log_transfer_info::getLogStorageFormat() const
{
    return logStorageFormat_;
}

void CreateTransferRequestBody_log_transfer_info::setLogStorageFormat(const std::string& value)
{
    logStorageFormat_ = value;
    logStorageFormatIsSet_ = true;
}

bool CreateTransferRequestBody_log_transfer_info::logStorageFormatIsSet() const
{
    return logStorageFormatIsSet_;
}

void CreateTransferRequestBody_log_transfer_info::unsetlogStorageFormat()
{
    logStorageFormatIsSet_ = false;
}

std::string CreateTransferRequestBody_log_transfer_info::getLogTransferStatus() const
{
    return logTransferStatus_;
}

void CreateTransferRequestBody_log_transfer_info::setLogTransferStatus(const std::string& value)
{
    logTransferStatus_ = value;
    logTransferStatusIsSet_ = true;
}

bool CreateTransferRequestBody_log_transfer_info::logTransferStatusIsSet() const
{
    return logTransferStatusIsSet_;
}

void CreateTransferRequestBody_log_transfer_info::unsetlogTransferStatus()
{
    logTransferStatusIsSet_ = false;
}

CreateTransferRequestBody_log_transfer_info_log_agency_transfer CreateTransferRequestBody_log_transfer_info::getLogAgencyTransfer() const
{
    return logAgencyTransfer_;
}

void CreateTransferRequestBody_log_transfer_info::setLogAgencyTransfer(const CreateTransferRequestBody_log_transfer_info_log_agency_transfer& value)
{
    logAgencyTransfer_ = value;
    logAgencyTransferIsSet_ = true;
}

bool CreateTransferRequestBody_log_transfer_info::logAgencyTransferIsSet() const
{
    return logAgencyTransferIsSet_;
}

void CreateTransferRequestBody_log_transfer_info::unsetlogAgencyTransfer()
{
    logAgencyTransferIsSet_ = false;
}

TransferDetail CreateTransferRequestBody_log_transfer_info::getLogTransferDetail() const
{
    return logTransferDetail_;
}

void CreateTransferRequestBody_log_transfer_info::setLogTransferDetail(const TransferDetail& value)
{
    logTransferDetail_ = value;
    logTransferDetailIsSet_ = true;
}

bool CreateTransferRequestBody_log_transfer_info::logTransferDetailIsSet() const
{
    return logTransferDetailIsSet_;
}

void CreateTransferRequestBody_log_transfer_info::unsetlogTransferDetail()
{
    logTransferDetailIsSet_ = false;
}

}
}
}
}
}


