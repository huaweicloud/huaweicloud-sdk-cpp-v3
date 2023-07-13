

#include "huaweicloud/evs/v2/model/CinderListVolumeTypesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderListVolumeTypesResponse::CinderListVolumeTypesResponse()
{
    volumeTypesIsSet_ = false;
}

CinderListVolumeTypesResponse::~CinderListVolumeTypesResponse() = default;

void CinderListVolumeTypesResponse::validate()
{
}

web::json::value CinderListVolumeTypesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeTypesIsSet_) {
        val[utility::conversions::to_string_t("volume_types")] = ModelBase::toJson(volumeTypes_);
    }

    return val;
}

bool CinderListVolumeTypesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volume_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_types"));
        if(!fieldValue.is_null())
        {
            std::vector<VolumeType> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeTypes(refVal);
        }
    }
    return ok;
}

std::vector<VolumeType>& CinderListVolumeTypesResponse::getVolumeTypes()
{
    return volumeTypes_;
}

void CinderListVolumeTypesResponse::setVolumeTypes(const std::vector<VolumeType>& value)
{
    volumeTypes_ = value;
    volumeTypesIsSet_ = true;
}

bool CinderListVolumeTypesResponse::volumeTypesIsSet() const
{
    return volumeTypesIsSet_;
}

void CinderListVolumeTypesResponse::unsetvolumeTypes()
{
    volumeTypesIsSet_ = false;
}

}
}
}
}
}


