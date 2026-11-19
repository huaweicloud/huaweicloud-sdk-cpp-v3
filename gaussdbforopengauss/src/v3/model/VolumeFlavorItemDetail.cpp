

#include "huaweicloud/gaussdbforopengauss/v3/model/VolumeFlavorItemDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




VolumeFlavorItemDetail::VolumeFlavorItemDetail()
{
    ioType_ = "";
    ioTypeIsSet_ = false;
    mediaType_ = "";
    mediaTypeIsSet_ = false;
    azStatusIsSet_ = false;
    supportComputeGroupTypeIsSet_ = false;
}

VolumeFlavorItemDetail::~VolumeFlavorItemDetail() = default;

void VolumeFlavorItemDetail::validate()
{
}

web::json::value VolumeFlavorItemDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ioTypeIsSet_) {
        val[utility::conversions::to_string_t("io_type")] = ModelBase::toJson(ioType_);
    }
    if(mediaTypeIsSet_) {
        val[utility::conversions::to_string_t("media_type")] = ModelBase::toJson(mediaType_);
    }
    if(azStatusIsSet_) {
        val[utility::conversions::to_string_t("az_status")] = ModelBase::toJson(azStatus_);
    }
    if(supportComputeGroupTypeIsSet_) {
        val[utility::conversions::to_string_t("support_compute_group_type")] = ModelBase::toJson(supportComputeGroupType_);
    }

    return val;
}
bool VolumeFlavorItemDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("io_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("io_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIoType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("media_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("media_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMediaType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_status"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_compute_group_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_compute_group_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportComputeGroupType(refVal);
        }
    }
    return ok;
}


std::string VolumeFlavorItemDetail::getIoType() const
{
    return ioType_;
}

void VolumeFlavorItemDetail::setIoType(const std::string& value)
{
    ioType_ = value;
    ioTypeIsSet_ = true;
}

bool VolumeFlavorItemDetail::ioTypeIsSet() const
{
    return ioTypeIsSet_;
}

void VolumeFlavorItemDetail::unsetioType()
{
    ioTypeIsSet_ = false;
}

std::string VolumeFlavorItemDetail::getMediaType() const
{
    return mediaType_;
}

void VolumeFlavorItemDetail::setMediaType(const std::string& value)
{
    mediaType_ = value;
    mediaTypeIsSet_ = true;
}

bool VolumeFlavorItemDetail::mediaTypeIsSet() const
{
    return mediaTypeIsSet_;
}

void VolumeFlavorItemDetail::unsetmediaType()
{
    mediaTypeIsSet_ = false;
}

std::map<std::string, std::string>& VolumeFlavorItemDetail::getAzStatus()
{
    return azStatus_;
}

void VolumeFlavorItemDetail::setAzStatus(const std::map<std::string, std::string>& value)
{
    azStatus_ = value;
    azStatusIsSet_ = true;
}

bool VolumeFlavorItemDetail::azStatusIsSet() const
{
    return azStatusIsSet_;
}

void VolumeFlavorItemDetail::unsetazStatus()
{
    azStatusIsSet_ = false;
}

std::vector<std::string>& VolumeFlavorItemDetail::getSupportComputeGroupType()
{
    return supportComputeGroupType_;
}

void VolumeFlavorItemDetail::setSupportComputeGroupType(const std::vector<std::string>& value)
{
    supportComputeGroupType_ = value;
    supportComputeGroupTypeIsSet_ = true;
}

bool VolumeFlavorItemDetail::supportComputeGroupTypeIsSet() const
{
    return supportComputeGroupTypeIsSet_;
}

void VolumeFlavorItemDetail::unsetsupportComputeGroupType()
{
    supportComputeGroupTypeIsSet_ = false;
}

}
}
}
}
}


