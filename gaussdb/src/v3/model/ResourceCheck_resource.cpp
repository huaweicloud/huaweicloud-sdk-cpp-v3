

#include "huaweicloud/gaussdb/v3/model/ResourceCheck_resource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ResourceCheck_resource::ResourceCheck_resource()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    instanceNum_ = 0;
    instanceNumIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    availabilityZoneMode_ = "";
    availabilityZoneModeIsSet_ = false;
    feNodeNum_ = 0;
    feNodeNumIsSet_ = false;
    beNodeNum_ = 0;
    beNodeNumIsSet_ = false;
    feFlavorRef_ = "";
    feFlavorRefIsSet_ = false;
    beFlavorRef_ = "";
    beFlavorRefIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
}

ResourceCheck_resource::~ResourceCheck_resource() = default;

void ResourceCheck_resource::validate()
{
}

web::json::value ResourceCheck_resource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(instanceNumIsSet_) {
        val[utility::conversions::to_string_t("instance_num")] = ModelBase::toJson(instanceNum_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(availabilityZoneModeIsSet_) {
        val[utility::conversions::to_string_t("availability_zone_mode")] = ModelBase::toJson(availabilityZoneMode_);
    }
    if(feNodeNumIsSet_) {
        val[utility::conversions::to_string_t("fe_node_num")] = ModelBase::toJson(feNodeNum_);
    }
    if(beNodeNumIsSet_) {
        val[utility::conversions::to_string_t("be_node_num")] = ModelBase::toJson(beNodeNum_);
    }
    if(feFlavorRefIsSet_) {
        val[utility::conversions::to_string_t("fe_flavor_ref")] = ModelBase::toJson(feFlavorRef_);
    }
    if(beFlavorRefIsSet_) {
        val[utility::conversions::to_string_t("be_flavor_ref")] = ModelBase::toJson(beFlavorRef_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }

    return val;
}
bool ResourceCheck_resource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fe_node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fe_node_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeNodeNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("be_node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("be_node_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeNodeNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fe_flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fe_flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("be_flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("be_flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    return ok;
}


std::string ResourceCheck_resource::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ResourceCheck_resource::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ResourceCheck_resource::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ResourceCheck_resource::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int32_t ResourceCheck_resource::getInstanceNum() const
{
    return instanceNum_;
}

void ResourceCheck_resource::setInstanceNum(int32_t value)
{
    instanceNum_ = value;
    instanceNumIsSet_ = true;
}

bool ResourceCheck_resource::instanceNumIsSet() const
{
    return instanceNumIsSet_;
}

void ResourceCheck_resource::unsetinstanceNum()
{
    instanceNumIsSet_ = false;
}

std::string ResourceCheck_resource::getMode() const
{
    return mode_;
}

void ResourceCheck_resource::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ResourceCheck_resource::modeIsSet() const
{
    return modeIsSet_;
}

void ResourceCheck_resource::unsetmode()
{
    modeIsSet_ = false;
}

std::string ResourceCheck_resource::getAvailabilityZoneMode() const
{
    return availabilityZoneMode_;
}

void ResourceCheck_resource::setAvailabilityZoneMode(const std::string& value)
{
    availabilityZoneMode_ = value;
    availabilityZoneModeIsSet_ = true;
}

bool ResourceCheck_resource::availabilityZoneModeIsSet() const
{
    return availabilityZoneModeIsSet_;
}

void ResourceCheck_resource::unsetavailabilityZoneMode()
{
    availabilityZoneModeIsSet_ = false;
}

int32_t ResourceCheck_resource::getFeNodeNum() const
{
    return feNodeNum_;
}

void ResourceCheck_resource::setFeNodeNum(int32_t value)
{
    feNodeNum_ = value;
    feNodeNumIsSet_ = true;
}

bool ResourceCheck_resource::feNodeNumIsSet() const
{
    return feNodeNumIsSet_;
}

void ResourceCheck_resource::unsetfeNodeNum()
{
    feNodeNumIsSet_ = false;
}

int32_t ResourceCheck_resource::getBeNodeNum() const
{
    return beNodeNum_;
}

void ResourceCheck_resource::setBeNodeNum(int32_t value)
{
    beNodeNum_ = value;
    beNodeNumIsSet_ = true;
}

bool ResourceCheck_resource::beNodeNumIsSet() const
{
    return beNodeNumIsSet_;
}

void ResourceCheck_resource::unsetbeNodeNum()
{
    beNodeNumIsSet_ = false;
}

std::string ResourceCheck_resource::getFeFlavorRef() const
{
    return feFlavorRef_;
}

void ResourceCheck_resource::setFeFlavorRef(const std::string& value)
{
    feFlavorRef_ = value;
    feFlavorRefIsSet_ = true;
}

bool ResourceCheck_resource::feFlavorRefIsSet() const
{
    return feFlavorRefIsSet_;
}

void ResourceCheck_resource::unsetfeFlavorRef()
{
    feFlavorRefIsSet_ = false;
}

std::string ResourceCheck_resource::getBeFlavorRef() const
{
    return beFlavorRef_;
}

void ResourceCheck_resource::setBeFlavorRef(const std::string& value)
{
    beFlavorRef_ = value;
    beFlavorRefIsSet_ = true;
}

bool ResourceCheck_resource::beFlavorRefIsSet() const
{
    return beFlavorRefIsSet_;
}

void ResourceCheck_resource::unsetbeFlavorRef()
{
    beFlavorRefIsSet_ = false;
}

std::string ResourceCheck_resource::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ResourceCheck_resource::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ResourceCheck_resource::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ResourceCheck_resource::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string ResourceCheck_resource::getSubnetId() const
{
    return subnetId_;
}

void ResourceCheck_resource::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ResourceCheck_resource::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ResourceCheck_resource::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

}
}
}
}
}


