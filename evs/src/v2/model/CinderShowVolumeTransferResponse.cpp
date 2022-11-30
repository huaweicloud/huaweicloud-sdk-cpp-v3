

#include "huaweicloud/evs/v2/model/CinderShowVolumeTransferResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderShowVolumeTransferResponse::CinderShowVolumeTransferResponse()
{
    transferIsSet_ = false;
}

CinderShowVolumeTransferResponse::~CinderShowVolumeTransferResponse() = default;

void CinderShowVolumeTransferResponse::validate()
{
}

web::json::value CinderShowVolumeTransferResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(transferIsSet_) {
        val[utility::conversions::to_string_t("transfer")] = ModelBase::toJson(transfer_);
    }

    return val;
}

bool CinderShowVolumeTransferResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("transfer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfer"));
        if(!fieldValue.is_null())
        {
            VolumeTransfer refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransfer(refVal);
        }
    }
    return ok;
}


VolumeTransfer CinderShowVolumeTransferResponse::getTransfer() const
{
    return transfer_;
}

void CinderShowVolumeTransferResponse::setTransfer(const VolumeTransfer& value)
{
    transfer_ = value;
    transferIsSet_ = true;
}

bool CinderShowVolumeTransferResponse::transferIsSet() const
{
    return transferIsSet_;
}

void CinderShowVolumeTransferResponse::unsettransfer()
{
    transferIsSet_ = false;
}

}
}
}
}
}


