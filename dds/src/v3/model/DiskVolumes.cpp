

#include "huaweicloud/dds/v3/model/DiskVolumes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DiskVolumes::DiskVolumes()
{
    entityId_ = "";
    entityIdIsSet_ = false;
    entityName_ = "";
    entityNameIsSet_ = false;
    groupType_ = "";
    groupTypeIsSet_ = false;
    used_ = "";
    usedIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
}

DiskVolumes::~DiskVolumes() = default;

void DiskVolumes::validate()
{
}

web::json::value DiskVolumes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(entityIdIsSet_) {
        val[utility::conversions::to_string_t("entity_id")] = ModelBase::toJson(entityId_);
    }
    if(entityNameIsSet_) {
        val[utility::conversions::to_string_t("entity_name")] = ModelBase::toJson(entityName_);
    }
    if(groupTypeIsSet_) {
        val[utility::conversions::to_string_t("group_type")] = ModelBase::toJson(groupType_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool DiskVolumes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("entity_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntityId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entity_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntityName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
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


std::string DiskVolumes::getEntityId() const
{
    return entityId_;
}

void DiskVolumes::setEntityId(const std::string& value)
{
    entityId_ = value;
    entityIdIsSet_ = true;
}

bool DiskVolumes::entityIdIsSet() const
{
    return entityIdIsSet_;
}

void DiskVolumes::unsetentityId()
{
    entityIdIsSet_ = false;
}

std::string DiskVolumes::getEntityName() const
{
    return entityName_;
}

void DiskVolumes::setEntityName(const std::string& value)
{
    entityName_ = value;
    entityNameIsSet_ = true;
}

bool DiskVolumes::entityNameIsSet() const
{
    return entityNameIsSet_;
}

void DiskVolumes::unsetentityName()
{
    entityNameIsSet_ = false;
}

std::string DiskVolumes::getGroupType() const
{
    return groupType_;
}

void DiskVolumes::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool DiskVolumes::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void DiskVolumes::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

std::string DiskVolumes::getUsed() const
{
    return used_;
}

void DiskVolumes::setUsed(const std::string& value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool DiskVolumes::usedIsSet() const
{
    return usedIsSet_;
}

void DiskVolumes::unsetused()
{
    usedIsSet_ = false;
}

std::string DiskVolumes::getSize() const
{
    return size_;
}

void DiskVolumes::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool DiskVolumes::sizeIsSet() const
{
    return sizeIsSet_;
}

void DiskVolumes::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


