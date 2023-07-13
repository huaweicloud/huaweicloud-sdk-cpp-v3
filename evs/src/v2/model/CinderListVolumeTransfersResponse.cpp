

#include "huaweicloud/evs/v2/model/CinderListVolumeTransfersResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderListVolumeTransfersResponse::CinderListVolumeTransfersResponse()
{
    transfersIsSet_ = false;
}

CinderListVolumeTransfersResponse::~CinderListVolumeTransfersResponse() = default;

void CinderListVolumeTransfersResponse::validate()
{
}

web::json::value CinderListVolumeTransfersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(transfersIsSet_) {
        val[utility::conversions::to_string_t("transfers")] = ModelBase::toJson(transfers_);
    }

    return val;
}

bool CinderListVolumeTransfersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("transfers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfers"));
        if(!fieldValue.is_null())
        {
            std::vector<VolumeTransferSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransfers(refVal);
        }
    }
    return ok;
}

std::vector<VolumeTransferSummary>& CinderListVolumeTransfersResponse::getTransfers()
{
    return transfers_;
}

void CinderListVolumeTransfersResponse::setTransfers(const std::vector<VolumeTransferSummary>& value)
{
    transfers_ = value;
    transfersIsSet_ = true;
}

bool CinderListVolumeTransfersResponse::transfersIsSet() const
{
    return transfersIsSet_;
}

void CinderListVolumeTransfersResponse::unsettransfers()
{
    transfersIsSet_ = false;
}

}
}
}
}
}


