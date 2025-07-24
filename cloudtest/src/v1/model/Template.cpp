

#include "huaweicloud/cloudtest/v1/model/Template.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




Template::Template()
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
}

Template::~Template() = default;

void Template::validate()
{
}

web::json::value Template::toJson() const
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

    return val;
}
bool Template::fromJson(const web::json::value& val)
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
    return ok;
}


std::string Template::getCreateTime() const
{
    return createTime_;
}

void Template::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool Template::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void Template::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string Template::getCreatorName() const
{
    return creatorName_;
}

void Template::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool Template::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void Template::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string Template::getCreatorNum() const
{
    return creatorNum_;
}

void Template::setCreatorNum(const std::string& value)
{
    creatorNum_ = value;
    creatorNumIsSet_ = true;
}

bool Template::creatorNumIsSet() const
{
    return creatorNumIsSet_;
}

void Template::unsetcreatorNum()
{
    creatorNumIsSet_ = false;
}

std::string Template::getDescription() const
{
    return description_;
}

void Template::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Template::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Template::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string Template::getId() const
{
    return id_;
}

void Template::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Template::idIsSet() const
{
    return idIsSet_;
}

void Template::unsetid()
{
    idIsSet_ = false;
}

std::string Template::getIsDefault() const
{
    return isDefault_;
}

void Template::setIsDefault(const std::string& value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool Template::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void Template::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

std::string Template::getMindmap() const
{
    return mindmap_;
}

void Template::setMindmap(const std::string& value)
{
    mindmap_ = value;
    mindmapIsSet_ = true;
}

bool Template::mindmapIsSet() const
{
    return mindmapIsSet_;
}

void Template::unsetmindmap()
{
    mindmapIsSet_ = false;
}

std::string Template::getName() const
{
    return name_;
}

void Template::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Template::nameIsSet() const
{
    return nameIsSet_;
}

void Template::unsetname()
{
    nameIsSet_ = false;
}

std::string Template::getUpdateTime() const
{
    return updateTime_;
}

void Template::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool Template::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void Template::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


