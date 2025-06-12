

#include "huaweicloud/evs/v2/model/BatchResizeVolumeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




BatchResizeVolumeRequestBody::BatchResizeVolumeRequestBody()
{
    volumesIsSet_ = false;
    bssParamIsSet_ = false;
}

BatchResizeVolumeRequestBody::~BatchResizeVolumeRequestBody() = default;

void BatchResizeVolumeRequestBody::validate()
{
}

web::json::value BatchResizeVolumeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumesIsSet_) {
        val[utility::conversions::to_string_t("volumes")] = ModelBase::toJson(volumes_);
    }
    if(bssParamIsSet_) {
        val[utility::conversions::to_string_t("bss_param")] = ModelBase::toJson(bssParam_);
    }

    return val;
}
bool BatchResizeVolumeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<VolumesForBatchResizeVolume> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bss_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bss_param"));
        if(!fieldValue.is_null())
        {
            PrepaidParamForBatchResizeVolume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBssParam(refVal);
        }
    }
    return ok;
}


std::vector<VolumesForBatchResizeVolume>& BatchResizeVolumeRequestBody::getVolumes()
{
    return volumes_;
}

void BatchResizeVolumeRequestBody::setVolumes(const std::vector<VolumesForBatchResizeVolume>& value)
{
    volumes_ = value;
    volumesIsSet_ = true;
}

bool BatchResizeVolumeRequestBody::volumesIsSet() const
{
    return volumesIsSet_;
}

void BatchResizeVolumeRequestBody::unsetvolumes()
{
    volumesIsSet_ = false;
}

PrepaidParamForBatchResizeVolume BatchResizeVolumeRequestBody::getBssParam() const
{
    return bssParam_;
}

void BatchResizeVolumeRequestBody::setBssParam(const PrepaidParamForBatchResizeVolume& value)
{
    bssParam_ = value;
    bssParamIsSet_ = true;
}

bool BatchResizeVolumeRequestBody::bssParamIsSet() const
{
    return bssParamIsSet_;
}

void BatchResizeVolumeRequestBody::unsetbssParam()
{
    bssParamIsSet_ = false;
}

}
}
}
}
}


