

#include "huaweicloud/modelarts/v1/model/RootVolume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RootVolume::RootVolume()
{
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
}

RootVolume::~RootVolume() = default;

void RootVolume::validate()
{
}

web::json::value RootVolume::toJson() const
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
bool RootVolume::fromJson(const web::json::value& val)
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


std::string RootVolume::getVolumeType() const
{
    return volumeType_;
}

void RootVolume::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool RootVolume::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void RootVolume::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

std::string RootVolume::getSize() const
{
    return size_;
}

void RootVolume::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool RootVolume::sizeIsSet() const
{
    return sizeIsSet_;
}

void RootVolume::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


