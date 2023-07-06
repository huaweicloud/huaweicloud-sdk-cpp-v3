

#include "huaweicloud/evs/v2/model/SubJobEntities.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




SubJobEntities::SubJobEntities()
{
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

SubJobEntities::~SubJobEntities() = default;

void SubJobEntities::validate()
{
}

web::json::value SubJobEntities::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volume_type")] = ModelBase::toJson(volumeType_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool SubJobEntities::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volume_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_type"));
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}

std::string SubJobEntities::getVolumeType() const
{
    return volumeType_;
}

void SubJobEntities::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool SubJobEntities::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void SubJobEntities::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

int32_t SubJobEntities::getSize() const
{
    return size_;
}

void SubJobEntities::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool SubJobEntities::sizeIsSet() const
{
    return sizeIsSet_;
}

void SubJobEntities::unsetsize()
{
    sizeIsSet_ = false;
}

std::string SubJobEntities::getVolumeId() const
{
    return volumeId_;
}

void SubJobEntities::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool SubJobEntities::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void SubJobEntities::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

std::string SubJobEntities::getName() const
{
    return name_;
}

void SubJobEntities::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SubJobEntities::nameIsSet() const
{
    return nameIsSet_;
}

void SubJobEntities::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


