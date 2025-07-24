

#include "huaweicloud/cloudtest/v1/model/MindmapRecycle.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




MindmapRecycle::MindmapRecycle()
{
    app_ = "";
    appIsSet_ = false;
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
    mapVersion_ = "";
    mapVersionIsSet_ = false;
    mindmap_ = "";
    mindmapIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    privacy_ = "";
    privacyIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

MindmapRecycle::~MindmapRecycle() = default;

void MindmapRecycle::validate()
{
}

web::json::value MindmapRecycle::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
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
    if(mapVersionIsSet_) {
        val[utility::conversions::to_string_t("map_version")] = ModelBase::toJson(mapVersion_);
    }
    if(mindmapIsSet_) {
        val[utility::conversions::to_string_t("mindmap")] = ModelBase::toJson(mindmap_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(privacyIsSet_) {
        val[utility::conversions::to_string_t("privacy")] = ModelBase::toJson(privacy_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool MindmapRecycle::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("map_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("map_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMapVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("privacy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privacy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivacy(refVal);
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


std::string MindmapRecycle::getApp() const
{
    return app_;
}

void MindmapRecycle::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool MindmapRecycle::appIsSet() const
{
    return appIsSet_;
}

void MindmapRecycle::unsetapp()
{
    appIsSet_ = false;
}

std::string MindmapRecycle::getCreateTime() const
{
    return createTime_;
}

void MindmapRecycle::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool MindmapRecycle::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void MindmapRecycle::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string MindmapRecycle::getCreatorName() const
{
    return creatorName_;
}

void MindmapRecycle::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool MindmapRecycle::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void MindmapRecycle::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string MindmapRecycle::getCreatorNum() const
{
    return creatorNum_;
}

void MindmapRecycle::setCreatorNum(const std::string& value)
{
    creatorNum_ = value;
    creatorNumIsSet_ = true;
}

bool MindmapRecycle::creatorNumIsSet() const
{
    return creatorNumIsSet_;
}

void MindmapRecycle::unsetcreatorNum()
{
    creatorNumIsSet_ = false;
}

std::string MindmapRecycle::getFolderId() const
{
    return folderId_;
}

void MindmapRecycle::setFolderId(const std::string& value)
{
    folderId_ = value;
    folderIdIsSet_ = true;
}

bool MindmapRecycle::folderIdIsSet() const
{
    return folderIdIsSet_;
}

void MindmapRecycle::unsetfolderId()
{
    folderIdIsSet_ = false;
}

std::string MindmapRecycle::getFolderRootId() const
{
    return folderRootId_;
}

void MindmapRecycle::setFolderRootId(const std::string& value)
{
    folderRootId_ = value;
    folderRootIdIsSet_ = true;
}

bool MindmapRecycle::folderRootIdIsSet() const
{
    return folderRootIdIsSet_;
}

void MindmapRecycle::unsetfolderRootId()
{
    folderRootIdIsSet_ = false;
}

std::string MindmapRecycle::getId() const
{
    return id_;
}

void MindmapRecycle::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MindmapRecycle::idIsSet() const
{
    return idIsSet_;
}

void MindmapRecycle::unsetid()
{
    idIsSet_ = false;
}

std::string MindmapRecycle::getMapVersion() const
{
    return mapVersion_;
}

void MindmapRecycle::setMapVersion(const std::string& value)
{
    mapVersion_ = value;
    mapVersionIsSet_ = true;
}

bool MindmapRecycle::mapVersionIsSet() const
{
    return mapVersionIsSet_;
}

void MindmapRecycle::unsetmapVersion()
{
    mapVersionIsSet_ = false;
}

std::string MindmapRecycle::getMindmap() const
{
    return mindmap_;
}

void MindmapRecycle::setMindmap(const std::string& value)
{
    mindmap_ = value;
    mindmapIsSet_ = true;
}

bool MindmapRecycle::mindmapIsSet() const
{
    return mindmapIsSet_;
}

void MindmapRecycle::unsetmindmap()
{
    mindmapIsSet_ = false;
}

std::string MindmapRecycle::getName() const
{
    return name_;
}

void MindmapRecycle::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MindmapRecycle::nameIsSet() const
{
    return nameIsSet_;
}

void MindmapRecycle::unsetname()
{
    nameIsSet_ = false;
}

std::string MindmapRecycle::getPrivacy() const
{
    return privacy_;
}

void MindmapRecycle::setPrivacy(const std::string& value)
{
    privacy_ = value;
    privacyIsSet_ = true;
}

bool MindmapRecycle::privacyIsSet() const
{
    return privacyIsSet_;
}

void MindmapRecycle::unsetprivacy()
{
    privacyIsSet_ = false;
}

std::string MindmapRecycle::getProjectId() const
{
    return projectId_;
}

void MindmapRecycle::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool MindmapRecycle::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void MindmapRecycle::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string MindmapRecycle::getUpdateTime() const
{
    return updateTime_;
}

void MindmapRecycle::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool MindmapRecycle::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void MindmapRecycle::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


