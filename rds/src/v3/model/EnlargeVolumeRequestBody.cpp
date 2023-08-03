

#include "huaweicloud/rds/v3/model/EnlargeVolumeRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




EnlargeVolumeRequestBody::EnlargeVolumeRequestBody()
{
    enlargeVolumeIsSet_ = false;
}

EnlargeVolumeRequestBody::~EnlargeVolumeRequestBody() = default;

void EnlargeVolumeRequestBody::validate()
{
}

web::json::value EnlargeVolumeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enlargeVolumeIsSet_) {
        val[utility::conversions::to_string_t("enlarge_volume")] = ModelBase::toJson(enlargeVolume_);
    }

    return val;
}

bool EnlargeVolumeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enlarge_volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enlarge_volume"));
        if(!fieldValue.is_null())
        {
            EnlargeVolumeObject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnlargeVolume(refVal);
        }
    }
    return ok;
}

EnlargeVolumeObject EnlargeVolumeRequestBody::getEnlargeVolume() const
{
    return enlargeVolume_;
}

void EnlargeVolumeRequestBody::setEnlargeVolume(const EnlargeVolumeObject& value)
{
    enlargeVolume_ = value;
    enlargeVolumeIsSet_ = true;
}

bool EnlargeVolumeRequestBody::enlargeVolumeIsSet() const
{
    return enlargeVolumeIsSet_;
}

void EnlargeVolumeRequestBody::unsetenlargeVolume()
{
    enlargeVolumeIsSet_ = false;
}

}
}
}
}
}


