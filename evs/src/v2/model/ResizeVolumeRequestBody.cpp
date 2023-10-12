

#include "huaweicloud/evs/v2/model/ResizeVolumeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ResizeVolumeRequestBody::ResizeVolumeRequestBody()
{
    bssParamIsSet_ = false;
    osExtendIsSet_ = false;
}

ResizeVolumeRequestBody::~ResizeVolumeRequestBody() = default;

void ResizeVolumeRequestBody::validate()
{
}

web::json::value ResizeVolumeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bssParamIsSet_) {
        val[utility::conversions::to_string_t("bssParam")] = ModelBase::toJson(bssParam_);
    }
    if(osExtendIsSet_) {
        val[utility::conversions::to_string_t("os-extend")] = ModelBase::toJson(osExtend_);
    }

    return val;
}
bool ResizeVolumeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bssParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bssParam"));
        if(!fieldValue.is_null())
        {
            BssParamForResizeVolume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBssParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os-extend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-extend"));
        if(!fieldValue.is_null())
        {
            OsExtend refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsExtend(refVal);
        }
    }
    return ok;
}


BssParamForResizeVolume ResizeVolumeRequestBody::getBssParam() const
{
    return bssParam_;
}

void ResizeVolumeRequestBody::setBssParam(const BssParamForResizeVolume& value)
{
    bssParam_ = value;
    bssParamIsSet_ = true;
}

bool ResizeVolumeRequestBody::bssParamIsSet() const
{
    return bssParamIsSet_;
}

void ResizeVolumeRequestBody::unsetbssParam()
{
    bssParamIsSet_ = false;
}

OsExtend ResizeVolumeRequestBody::getOsExtend() const
{
    return osExtend_;
}

void ResizeVolumeRequestBody::setOsExtend(const OsExtend& value)
{
    osExtend_ = value;
    osExtendIsSet_ = true;
}

bool ResizeVolumeRequestBody::osExtendIsSet() const
{
    return osExtendIsSet_;
}

void ResizeVolumeRequestBody::unsetosExtend()
{
    osExtendIsSet_ = false;
}

}
}
}
}
}


