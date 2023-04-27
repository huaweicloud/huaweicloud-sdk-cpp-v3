

#include "huaweicloud/lts/v2/model/UpdateTransferRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateTransferRequestBody::UpdateTransferRequestBody()
{
    logTransferId_ = "";
    logTransferIdIsSet_ = false;
    logTransferInfoIsSet_ = false;
}

UpdateTransferRequestBody::~UpdateTransferRequestBody() = default;

void UpdateTransferRequestBody::validate()
{
}

web::json::value UpdateTransferRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logTransferIdIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_id")] = ModelBase::toJson(logTransferId_);
    }
    if(logTransferInfoIsSet_) {
        val[utility::conversions::to_string_t("log_transfer_info")] = ModelBase::toJson(logTransferInfo_);
    }

    return val;
}

bool UpdateTransferRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_transfer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_transfer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTransferId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_transfer_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_transfer_info"));
        if(!fieldValue.is_null())
        {
            UpdateTransferRequestBody_log_transfer_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTransferInfo(refVal);
        }
    }
    return ok;
}


std::string UpdateTransferRequestBody::getLogTransferId() const
{
    return logTransferId_;
}

void UpdateTransferRequestBody::setLogTransferId(const std::string& value)
{
    logTransferId_ = value;
    logTransferIdIsSet_ = true;
}

bool UpdateTransferRequestBody::logTransferIdIsSet() const
{
    return logTransferIdIsSet_;
}

void UpdateTransferRequestBody::unsetlogTransferId()
{
    logTransferIdIsSet_ = false;
}

UpdateTransferRequestBody_log_transfer_info UpdateTransferRequestBody::getLogTransferInfo() const
{
    return logTransferInfo_;
}

void UpdateTransferRequestBody::setLogTransferInfo(const UpdateTransferRequestBody_log_transfer_info& value)
{
    logTransferInfo_ = value;
    logTransferInfoIsSet_ = true;
}

bool UpdateTransferRequestBody::logTransferInfoIsSet() const
{
    return logTransferInfoIsSet_;
}

void UpdateTransferRequestBody::unsetlogTransferInfo()
{
    logTransferInfoIsSet_ = false;
}

}
}
}
}
}


