

#include "huaweicloud/rds/v3/model/ReduceVolumeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ReduceVolumeRequestBody::ReduceVolumeRequestBody()
{
    reduceVolumeIsSet_ = false;
}

ReduceVolumeRequestBody::~ReduceVolumeRequestBody() = default;

void ReduceVolumeRequestBody::validate()
{
}

web::json::value ReduceVolumeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reduceVolumeIsSet_) {
        val[utility::conversions::to_string_t("reduce_volume")] = ModelBase::toJson(reduceVolume_);
    }

    return val;
}
bool ReduceVolumeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reduce_volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reduce_volume"));
        if(!fieldValue.is_null())
        {
            ReduceVolumeObject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReduceVolume(refVal);
        }
    }
    return ok;
}


ReduceVolumeObject ReduceVolumeRequestBody::getReduceVolume() const
{
    return reduceVolume_;
}

void ReduceVolumeRequestBody::setReduceVolume(const ReduceVolumeObject& value)
{
    reduceVolume_ = value;
    reduceVolumeIsSet_ = true;
}

bool ReduceVolumeRequestBody::reduceVolumeIsSet() const
{
    return reduceVolumeIsSet_;
}

void ReduceVolumeRequestBody::unsetreduceVolume()
{
    reduceVolumeIsSet_ = false;
}

}
}
}
}
}


