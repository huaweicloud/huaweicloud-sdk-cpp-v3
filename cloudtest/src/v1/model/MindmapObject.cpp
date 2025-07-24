

#include "huaweicloud/cloudtest/v1/model/MindmapObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




MindmapObject::MindmapObject()
{
    createTime_ = "";
    createTimeIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    creatorNum_ = "";
    creatorNumIsSet_ = false;
    folderId_ = "";
    folderIdIsSet_ = false;
    folderRootId_ = "";
    folderRootIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    maxDepth_ = 0;
    maxDepthIsSet_ = false;
    mindmap_ = "";
    mindmapIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

MindmapObject::~MindmapObject() = default;

void MindmapObject::validate()
{
}

web::json::value MindmapObject::toJson() const
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
    if(folderIdIsSet_) {
        val[utility::conversions::to_string_t("folder_id")] = ModelBase::toJson(folderId_);
    }
    if(folderRootIdIsSet_) {
        val[utility::conversions::to_string_t("folder_root_id")] = ModelBase::toJson(folderRootId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(maxDepthIsSet_) {
        val[utility::conversions::to_string_t("max_depth")] = ModelBase::toJson(maxDepth_);
    }
    if(mindmapIsSet_) {
        val[utility::conversions::to_string_t("mindmap")] = ModelBase::toJson(mindmap_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool MindmapObject::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("folder_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("folder_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFolderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("folder_root_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("folder_root_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFolderRootId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("max_depth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_depth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxDepth(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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


std::string MindmapObject::getCreateTime() const
{
    return createTime_;
}

void MindmapObject::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool MindmapObject::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void MindmapObject::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string MindmapObject::getCreatorName() const
{
    return creatorName_;
}

void MindmapObject::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool MindmapObject::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void MindmapObject::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string MindmapObject::getCreatorNum() const
{
    return creatorNum_;
}

void MindmapObject::setCreatorNum(const std::string& value)
{
    creatorNum_ = value;
    creatorNumIsSet_ = true;
}

bool MindmapObject::creatorNumIsSet() const
{
    return creatorNumIsSet_;
}

void MindmapObject::unsetcreatorNum()
{
    creatorNumIsSet_ = false;
}

std::string MindmapObject::getFolderId() const
{
    return folderId_;
}

void MindmapObject::setFolderId(const std::string& value)
{
    folderId_ = value;
    folderIdIsSet_ = true;
}

bool MindmapObject::folderIdIsSet() const
{
    return folderIdIsSet_;
}

void MindmapObject::unsetfolderId()
{
    folderIdIsSet_ = false;
}

std::string MindmapObject::getFolderRootId() const
{
    return folderRootId_;
}

void MindmapObject::setFolderRootId(const std::string& value)
{
    folderRootId_ = value;
    folderRootIdIsSet_ = true;
}

bool MindmapObject::folderRootIdIsSet() const
{
    return folderRootIdIsSet_;
}

void MindmapObject::unsetfolderRootId()
{
    folderRootIdIsSet_ = false;
}

std::string MindmapObject::getId() const
{
    return id_;
}

void MindmapObject::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MindmapObject::idIsSet() const
{
    return idIsSet_;
}

void MindmapObject::unsetid()
{
    idIsSet_ = false;
}

int32_t MindmapObject::getMaxDepth() const
{
    return maxDepth_;
}

void MindmapObject::setMaxDepth(int32_t value)
{
    maxDepth_ = value;
    maxDepthIsSet_ = true;
}

bool MindmapObject::maxDepthIsSet() const
{
    return maxDepthIsSet_;
}

void MindmapObject::unsetmaxDepth()
{
    maxDepthIsSet_ = false;
}

std::string MindmapObject::getMindmap() const
{
    return mindmap_;
}

void MindmapObject::setMindmap(const std::string& value)
{
    mindmap_ = value;
    mindmapIsSet_ = true;
}

bool MindmapObject::mindmapIsSet() const
{
    return mindmapIsSet_;
}

void MindmapObject::unsetmindmap()
{
    mindmapIsSet_ = false;
}

std::string MindmapObject::getName() const
{
    return name_;
}

void MindmapObject::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MindmapObject::nameIsSet() const
{
    return nameIsSet_;
}

void MindmapObject::unsetname()
{
    nameIsSet_ = false;
}

std::string MindmapObject::getProjectId() const
{
    return projectId_;
}

void MindmapObject::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool MindmapObject::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void MindmapObject::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string MindmapObject::getUpdateTime() const
{
    return updateTime_;
}

void MindmapObject::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool MindmapObject::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void MindmapObject::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


