

#include "huaweicloud/evs/v2/model/CinderCreateVolumeTransferResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderCreateVolumeTransferResponse::CinderCreateVolumeTransferResponse()
{
    transferIsSet_ = false;
}

CinderCreateVolumeTransferResponse::~CinderCreateVolumeTransferResponse() = default;

void CinderCreateVolumeTransferResponse::validate()
{
}

web::json::value CinderCreateVolumeTransferResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(transferIsSet_) {
        val[utility::conversions::to_string_t("transfer")] = ModelBase::toJson(transfer_);
    }

    return val;
}
bool CinderCreateVolumeTransferResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("transfer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfer"));
        if(!fieldValue.is_null())
        {
            CreateVolumeTransferDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransfer(refVal);
        }
    }
    return ok;
}


CreateVolumeTransferDetail CinderCreateVolumeTransferResponse::getTransfer() const
{
    return transfer_;
}

void CinderCreateVolumeTransferResponse::setTransfer(const CreateVolumeTransferDetail& value)
{
    transfer_ = value;
    transferIsSet_ = true;
}

bool CinderCreateVolumeTransferResponse::transferIsSet() const
{
    return transferIsSet_;
}

void CinderCreateVolumeTransferResponse::unsettransfer()
{
    transferIsSet_ = false;
}

}
}
}
}
}


