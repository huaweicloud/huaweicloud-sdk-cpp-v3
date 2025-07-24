

#include "huaweicloud/cloudtest/v1/model/TemplateV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TemplateV2::TemplateV2()
{
    createTime_ = "";
    createTimeIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    creatorNum_ = "";
    creatorNumIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    isDefault_ = "";
    isDefaultIsSet_ = false;
    mindmap_ = "";
    mindmapIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    editPermission_ = false;
    editPermissionIsSet_ = false;
    deletePermission_ = false;
    deletePermissionIsSet_ = false;
}

TemplateV2::~TemplateV2() = default;

void TemplateV2::validate()
{
}

web::json::value TemplateV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(creatorNumIsSet_) {
        val[utility::conversions::to_string_t("creator_num")] = ModelBase::toJson(creatorNum_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(isDefaultIsSet_) {
        val[utility::conversions::to_string_t("is_default")] = ModelBase::toJson(isDefault_);
    }
    if(mindmapIsSet_) {
        val[utility::conversions::to_string_t("mindmap")] = ModelBase::toJson(mindmap_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(editPermissionIsSet_) {
        val[utility::conversions::to_string_t("editPermission")] = ModelBase::toJson(editPermission_);
    }
    if(deletePermissionIsSet_) {
        val[utility::conversions::to_string_t("deletePermission")] = ModelBase::toJson(deletePermission_);
    }

    return val;
}
bool TemplateV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_default"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mindmap"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mindmap"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMindmap(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("editPermission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("editPermission"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEditPermission(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deletePermission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deletePermission"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletePermission(refVal);
        }
    }
    return ok;
}


std::string TemplateV2::getCreateTime() const
{
    return createTime_;
}

void TemplateV2::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TemplateV2::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TemplateV2::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TemplateV2::getCreatorName() const
{
    return creatorName_;
}

void TemplateV2::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool TemplateV2::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void TemplateV2::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string TemplateV2::getCreatorNum() const
{
    return creatorNum_;
}

void TemplateV2::setCreatorNum(const std::string& value)
{
    creatorNum_ = value;
    creatorNumIsSet_ = true;
}

bool TemplateV2::creatorNumIsSet() const
{
    return creatorNumIsSet_;
}

void TemplateV2::unsetcreatorNum()
{
    creatorNumIsSet_ = false;
}

std::string TemplateV2::getDescription() const
{
    return description_;
}

void TemplateV2::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TemplateV2::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TemplateV2::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string TemplateV2::getId() const
{
    return id_;
}

void TemplateV2::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TemplateV2::idIsSet() const
{
    return idIsSet_;
}

void TemplateV2::unsetid()
{
    idIsSet_ = false;
}

std::string TemplateV2::getIsDefault() const
{
    return isDefault_;
}

void TemplateV2::setIsDefault(const std::string& value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool TemplateV2::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void TemplateV2::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

std::string TemplateV2::getMindmap() const
{
    return mindmap_;
}

void TemplateV2::setMindmap(const std::string& value)
{
    mindmap_ = value;
    mindmapIsSet_ = true;
}

bool TemplateV2::mindmapIsSet() const
{
    return mindmapIsSet_;
}

void TemplateV2::unsetmindmap()
{
    mindmapIsSet_ = false;
}

std::string TemplateV2::getName() const
{
    return name_;
}

void TemplateV2::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TemplateV2::nameIsSet() const
{
    return nameIsSet_;
}

void TemplateV2::unsetname()
{
    nameIsSet_ = false;
}

std::string TemplateV2::getUpdateTime() const
{
    return updateTime_;
}

void TemplateV2::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TemplateV2::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TemplateV2::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

bool TemplateV2::isEditPermission() const
{
    return editPermission_;
}

void TemplateV2::setEditPermission(bool value)
{
    editPermission_ = value;
    editPermissionIsSet_ = true;
}

bool TemplateV2::editPermissionIsSet() const
{
    return editPermissionIsSet_;
}

void TemplateV2::unseteditPermission()
{
    editPermissionIsSet_ = false;
}

bool TemplateV2::isDeletePermission() const
{
    return deletePermission_;
}

void TemplateV2::setDeletePermission(bool value)
{
    deletePermission_ = value;
    deletePermissionIsSet_ = true;
}

bool TemplateV2::deletePermissionIsSet() const
{
    return deletePermissionIsSet_;
}

void TemplateV2::unsetdeletePermission()
{
    deletePermissionIsSet_ = false;
}

}
}
}
}
}


