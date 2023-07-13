

#include "huaweicloud/evs/v2/model/CinderAcceptVolumeTransferResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderAcceptVolumeTransferResponse::CinderAcceptVolumeTransferResponse()
{
    transferIsSet_ = false;
}

CinderAcceptVolumeTransferResponse::~CinderAcceptVolumeTransferResponse() = default;

void CinderAcceptVolumeTransferResponse::validate()
{
}

web::json::value CinderAcceptVolumeTransferResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(transferIsSet_) {
        val[utility::conversions::to_string_t("transfer")] = ModelBase::toJson(transfer_);
    }

    return val;
}

bool CinderAcceptVolumeTransferResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("transfer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfer"));
        if(!fieldValue.is_null())
        {
            VolumeTransferSummary refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransfer(refVal);
        }
    }
    return ok;
}

VolumeTransferSummary CinderAcceptVolumeTransferResponse::getTransfer() const
{
    return transfer_;
}

void CinderAcceptVolumeTransferResponse::setTransfer(const VolumeTransferSummary& value)
{
    transfer_ = value;
    transferIsSet_ = true;
}

bool CinderAcceptVolumeTransferResponse::transferIsSet() const
{
    return transferIsSet_;
}

void CinderAcceptVolumeTransferResponse::unsettransfer()
{
    transferIsSet_ = false;
}

}
}
}
}
}


