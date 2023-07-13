

#include "huaweicloud/evs/v2/model/CinderDeleteVolumeTransferRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderDeleteVolumeTransferRequest::CinderDeleteVolumeTransferRequest()
{
    transferId_ = "";
    transferIdIsSet_ = false;
}

CinderDeleteVolumeTransferRequest::~CinderDeleteVolumeTransferRequest() = default;

void CinderDeleteVolumeTransferRequest::validate()
{
}

web::json::value CinderDeleteVolumeTransferRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(transferIdIsSet_) {
        val[utility::conversions::to_string_t("transfer_id")] = ModelBase::toJson(transferId_);
    }

    return val;
}

bool CinderDeleteVolumeTransferRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("transfer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransferId(refVal);
        }
    }
    return ok;
}

std::string CinderDeleteVolumeTransferRequest::getTransferId() const
{
    return transferId_;
}

void CinderDeleteVolumeTransferRequest::setTransferId(const std::string& value)
{
    transferId_ = value;
    transferIdIsSet_ = true;
}

bool CinderDeleteVolumeTransferRequest::transferIdIsSet() const
{
    return transferIdIsSet_;
}

void CinderDeleteVolumeTransferRequest::unsettransferId()
{
    transferIdIsSet_ = false;
}

}
}
}
}
}


