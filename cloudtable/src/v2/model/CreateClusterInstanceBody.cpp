

#include "huaweicloud/cloudtable/v2/model/CreateClusterInstanceBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




CreateClusterInstanceBody::CreateClusterInstanceBody()
{
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    instanceNum_ = 0;
    instanceNumIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    volumeSize_ = 0;
    volumeSizeIsSet_ = false;
    flavorType_ = "";
    flavorTypeIsSet_ = false;
}

CreateClusterInstanceBody::~CreateClusterInstanceBody() = default;

void CreateClusterInstanceBody::validate()
{
}

web::json::value CreateClusterInstanceBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(instanceNumIsSet_) {
        val[utility::conversions::to_string_t("instance_num")] = ModelBase::toJson(instanceNum_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volume_type")] = ModelBase::toJson(volumeType_);
    }
    if(volumeSizeIsSet_) {
        val[utility::conversions::to_string_t("volume_size")] = ModelBase::toJson(volumeSize_);
    }
    if(flavorTypeIsSet_) {
        val[utility::conversions::to_string_t("flavor_type")] = ModelBase::toJson(flavorType_);
    }

    return val;
}
bool CreateClusterInstanceBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorType(refVal);
        }
    }
    return ok;
}


std::string CreateClusterInstanceBody::getInstanceType() const
{
    return instanceType_;
}

void CreateClusterInstanceBody::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool CreateClusterInstanceBody::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void CreateClusterInstanceBody::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

int32_t CreateClusterInstanceBody::getInstanceNum() const
{
    return instanceNum_;
}

void CreateClusterInstanceBody::setInstanceNum(int32_t value)
{
    instanceNum_ = value;
    instanceNumIsSet_ = true;
}

bool CreateClusterInstanceBody::instanceNumIsSet() const
{
    return instanceNumIsSet_;
}

void CreateClusterInstanceBody::unsetinstanceNum()
{
    instanceNumIsSet_ = false;
}

std::string CreateClusterInstanceBody::getFlavor() const
{
    return flavor_;
}

void CreateClusterInstanceBody::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool CreateClusterInstanceBody::flavorIsSet() const
{
    return flavorIsSet_;
}

void CreateClusterInstanceBody::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string CreateClusterInstanceBody::getVolumeType() const
{
    return volumeType_;
}

void CreateClusterInstanceBody::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool CreateClusterInstanceBody::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void CreateClusterInstanceBody::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

int32_t CreateClusterInstanceBody::getVolumeSize() const
{
    return volumeSize_;
}

void CreateClusterInstanceBody::setVolumeSize(int32_t value)
{
    volumeSize_ = value;
    volumeSizeIsSet_ = true;
}

bool CreateClusterInstanceBody::volumeSizeIsSet() const
{
    return volumeSizeIsSet_;
}

void CreateClusterInstanceBody::unsetvolumeSize()
{
    volumeSizeIsSet_ = false;
}

std::string CreateClusterInstanceBody::getFlavorType() const
{
    return flavorType_;
}

void CreateClusterInstanceBody::setFlavorType(const std::string& value)
{
    flavorType_ = value;
    flavorTypeIsSet_ = true;
}

bool CreateClusterInstanceBody::flavorTypeIsSet() const
{
    return flavorTypeIsSet_;
}

void CreateClusterInstanceBody::unsetflavorType()
{
    flavorTypeIsSet_ = false;
}

}
}
}
}
}


