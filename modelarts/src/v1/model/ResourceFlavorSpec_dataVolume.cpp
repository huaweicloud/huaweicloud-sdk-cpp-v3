

#include "huaweicloud/modelarts/v1/model/ResourceFlavorSpec_dataVolume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResourceFlavorSpec_dataVolume::ResourceFlavorSpec_dataVolume()
{
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
}

ResourceFlavorSpec_dataVolume::~ResourceFlavorSpec_dataVolume() = default;

void ResourceFlavorSpec_dataVolume::validate()
{
}

web::json::value ResourceFlavorSpec_dataVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volumeType")] = ModelBase::toJson(volumeType_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool ResourceFlavorSpec_dataVolume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volumeType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string ResourceFlavorSpec_dataVolume::getVolumeType() const
{
    return volumeType_;
}

void ResourceFlavorSpec_dataVolume::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool ResourceFlavorSpec_dataVolume::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void ResourceFlavorSpec_dataVolume::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

std::string ResourceFlavorSpec_dataVolume::getSize() const
{
    return size_;
}

void ResourceFlavorSpec_dataVolume::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ResourceFlavorSpec_dataVolume::sizeIsSet() const
{
    return sizeIsSet_;
}

void ResourceFlavorSpec_dataVolume::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


