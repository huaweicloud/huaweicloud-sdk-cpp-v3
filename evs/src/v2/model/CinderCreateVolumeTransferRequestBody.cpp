

#include "huaweicloud/evs/v2/model/CinderCreateVolumeTransferRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderCreateVolumeTransferRequestBody::CinderCreateVolumeTransferRequestBody()
{
    transferIsSet_ = false;
}

CinderCreateVolumeTransferRequestBody::~CinderCreateVolumeTransferRequestBody() = default;

void CinderCreateVolumeTransferRequestBody::validate()
{
}

web::json::value CinderCreateVolumeTransferRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(transferIsSet_) {
        val[utility::conversions::to_string_t("transfer")] = ModelBase::toJson(transfer_);
    }

    return val;
}

bool CinderCreateVolumeTransferRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("transfer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfer"));
        if(!fieldValue.is_null())
        {
            CreateVolumeTransferOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransfer(refVal);
        }
    }
    return ok;
}


CreateVolumeTransferOption CinderCreateVolumeTransferRequestBody::getTransfer() const
{
    return transfer_;
}

void CinderCreateVolumeTransferRequestBody::setTransfer(const CreateVolumeTransferOption& value)
{
    transfer_ = value;
    transferIsSet_ = true;
}

bool CinderCreateVolumeTransferRequestBody::transferIsSet() const
{
    return transferIsSet_;
}

void CinderCreateVolumeTransferRequestBody::unsettransfer()
{
    transferIsSet_ = false;
}

}
}
}
}
}


