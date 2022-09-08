

#include "huaweicloud/evs/v2/model/CinderShowVolumeTransferRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderShowVolumeTransferRequest::CinderShowVolumeTransferRequest()
{
    transferId_ = "";
    transferIdIsSet_ = false;
}

CinderShowVolumeTransferRequest::~CinderShowVolumeTransferRequest() = default;

void CinderShowVolumeTransferRequest::validate()
{
}

web::json::value CinderShowVolumeTransferRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(transferIdIsSet_) {
        val[utility::conversions::to_string_t("transfer_id")] = ModelBase::toJson(transferId_);
    }

    return val;
}

bool CinderShowVolumeTransferRequest::fromJson(const web::json::value& val)
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


std::string CinderShowVolumeTransferRequest::getTransferId() const
{
    return transferId_;
}

void CinderShowVolumeTransferRequest::setTransferId(const std::string& value)
{
    transferId_ = value;
    transferIdIsSet_ = true;
}

bool CinderShowVolumeTransferRequest::transferIdIsSet() const
{
    return transferIdIsSet_;
}

void CinderShowVolumeTransferRequest::unsettransferId()
{
    transferIdIsSet_ = false;
}

}
}
}
}
}


