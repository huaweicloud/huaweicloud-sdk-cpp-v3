

#include "huaweicloud/lts/v2/model/UpdateTransferRequestBody_log_transfer_info.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateTransferRequestBody_log_transfer_info::UpdateTransferRequestBody_log_transfer_info()
{
    logStorageFormat_ = "";
    logStorageFormatIsSet_ = false;
    logTransferStatus_ = "";
    logTransferStatusIsSet_ = false;
    logTransferDetailIsSet_ = false;
}

UpdateTransferRequestBody_log_transfer_info::~UpdateTransferRequestBody_log_transfer_info() = default;

void UpdateTransferRequestBody_log_transfer_info::validate()
{
}

web::json::value UpdateTransferRequestBody_log_transfer_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logStorageFormatIsSet_) {
        val[utility::conversions::to_string_t("log_storage_format")] = ModelBase::toJson(logStorageFormat_);
    }
    if(logTransferStatusIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_status")] = ModelBase::toJson(logTransferStatus_);
    }
    if(logTransferDetailIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_detail")] = ModelBase::toJson(logTransferDetail_);
    }

    return val;
}

bool UpdateTransferRequestBody_log_transfer_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string UpdateTransferRequestBody_log_transfer_info::getLogStorageFormat() const
{
    return logStorageFormat_;
}

void UpdateTransferRequestBody_log_transfer_info::setLogStorageFormat(const std::string& value)
{
    logStorageFormat_ = value;
    logStorageFormatIsSet_ = true;
}

bool UpdateTransferRequestBody_log_transfer_info::logStorageFormatIsSet() const
{
    return logStorageFormatIsSet_;
}

void UpdateTransferRequestBody_log_transfer_info::unsetlogStorageFormat()
{
    logStorageFormatIsSet_ = false;
}

std::string UpdateTransferRequestBody_log_transfer_info::getLogTransferStatus() const
{
    return logTransferStatus_;
}

void UpdateTransferRequestBody_log_transfer_info::setLogTransferStatus(const std::string& value)
{
    logTransferStatus_ = value;
    logTransferStatusIsSet_ = true;
}

bool UpdateTransferRequestBody_log_transfer_info::logTransferStatusIsSet() const
{
    return logTransferStatusIsSet_;
}

void UpdateTransferRequestBody_log_transfer_info::unsetlogTransferStatus()
{
    logTransferStatusIsSet_ = false;
}

TransferDetail UpdateTransferRequestBody_log_transfer_info::getLogTransferDetail() const
{
    return logTransferDetail_;
}

void UpdateTransferRequestBody_log_transfer_info::setLogTransferDetail(const TransferDetail& value)
{
    logTransferDetail_ = value;
    logTransferDetailIsSet_ = true;
}

bool UpdateTransferRequestBody_log_transfer_info::logTransferDetailIsSet() const
{
    return logTransferDetailIsSet_;
}

void UpdateTransferRequestBody_log_transfer_info::unsetlogTransferDetail()
{
    logTransferDetailIsSet_ = false;
}

}
}
}
}
}


