

#include "huaweicloud/modelarts/v1/model/VolumeVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




VolumeVO::VolumeVO()
{
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

VolumeVO::~VolumeVO() = default;

void VolumeVO::validate()
{
}

web::json::value VolumeVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volumeType")] = ModelBase::toJson(volumeType_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool VolumeVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::string VolumeVO::getVolumeType() const
{
    return volumeType_;
}

void VolumeVO::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool VolumeVO::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void VolumeVO::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

std::string VolumeVO::getSize() const
{
    return size_;
}

void VolumeVO::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool VolumeVO::sizeIsSet() const
{
    return sizeIsSet_;
}

void VolumeVO::unsetsize()
{
    sizeIsSet_ = false;
}

int32_t VolumeVO::getCount() const
{
    return count_;
}

void VolumeVO::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool VolumeVO::countIsSet() const
{
    return countIsSet_;
}

void VolumeVO::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


