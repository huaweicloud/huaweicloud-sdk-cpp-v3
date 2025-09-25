

#include "huaweicloud/codeartspipeline/v2/model/CreatePipelineGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePipelineGroupResponse::CreatePipelineGroupResponse()
{
    id_ = "";
    idIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    pathId_ = "";
    pathIdIsSet_ = false;
    ordinal_ = 0;
    ordinalIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    updater_ = "";
    updaterIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    childrenIsSet_ = false;
}

CreatePipelineGroupResponse::~CreatePipelineGroupResponse() = default;

void CreatePipelineGroupResponse::validate()
{
}

web::json::value CreatePipelineGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(pathIdIsSet_) {
        val[utility::conversions::to_string_t("path_id")] = ModelBase::toJson(pathId_);
    }
    if(ordinalIsSet_) {
        val[utility::conversions::to_string_t("ordinal")] = ModelBase::toJson(ordinal_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(updaterIsSet_) {
        val[utility::conversions::to_string_t("updater")] = ModelBase::toJson(updater_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(children_);
    }

    return val;
}
bool CreatePipelineGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPathId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ordinal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ordinal"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrdinal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updater"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updater"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdater(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineGroupVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    return ok;
}


std::string CreatePipelineGroupResponse::getId() const
{
    return id_;
}

void CreatePipelineGroupResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreatePipelineGroupResponse::idIsSet() const
{
    return idIsSet_;
}

void CreatePipelineGroupResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreatePipelineGroupResponse::getDomainId() const
{
    return domainId_;
}

void CreatePipelineGroupResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreatePipelineGroupResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreatePipelineGroupResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string CreatePipelineGroupResponse::getProjectId() const
{
    return projectId_;
}

void CreatePipelineGroupResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreatePipelineGroupResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreatePipelineGroupResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreatePipelineGroupResponse::getName() const
{
    return name_;
}

void CreatePipelineGroupResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreatePipelineGroupResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreatePipelineGroupResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreatePipelineGroupResponse::getParentId() const
{
    return parentId_;
}

void CreatePipelineGroupResponse::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool CreatePipelineGroupResponse::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void CreatePipelineGroupResponse::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string CreatePipelineGroupResponse::getPathId() const
{
    return pathId_;
}

void CreatePipelineGroupResponse::setPathId(const std::string& value)
{
    pathId_ = value;
    pathIdIsSet_ = true;
}

bool CreatePipelineGroupResponse::pathIdIsSet() const
{
    return pathIdIsSet_;
}

void CreatePipelineGroupResponse::unsetpathId()
{
    pathIdIsSet_ = false;
}

int32_t CreatePipelineGroupResponse::getOrdinal() const
{
    return ordinal_;
}

void CreatePipelineGroupResponse::setOrdinal(int32_t value)
{
    ordinal_ = value;
    ordinalIsSet_ = true;
}

bool CreatePipelineGroupResponse::ordinalIsSet() const
{
    return ordinalIsSet_;
}

void CreatePipelineGroupResponse::unsetordinal()
{
    ordinalIsSet_ = false;
}

std::string CreatePipelineGroupResponse::getCreator() const
{
    return creator_;
}

void CreatePipelineGroupResponse::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool CreatePipelineGroupResponse::creatorIsSet() const
{
    return creatorIsSet_;
}

void CreatePipelineGroupResponse::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string CreatePipelineGroupResponse::getUpdater() const
{
    return updater_;
}

void CreatePipelineGroupResponse::setUpdater(const std::string& value)
{
    updater_ = value;
    updaterIsSet_ = true;
}

bool CreatePipelineGroupResponse::updaterIsSet() const
{
    return updaterIsSet_;
}

void CreatePipelineGroupResponse::unsetupdater()
{
    updaterIsSet_ = false;
}

int64_t CreatePipelineGroupResponse::getCreateTime() const
{
    return createTime_;
}

void CreatePipelineGroupResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreatePipelineGroupResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreatePipelineGroupResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t CreatePipelineGroupResponse::getUpdateTime() const
{
    return updateTime_;
}

void CreatePipelineGroupResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CreatePipelineGroupResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CreatePipelineGroupResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::vector<PipelineGroupVo>& CreatePipelineGroupResponse::getChildren()
{
    return children_;
}

void CreatePipelineGroupResponse::setChildren(const std::vector<PipelineGroupVo>& value)
{
    children_ = value;
    childrenIsSet_ = true;
}

bool CreatePipelineGroupResponse::childrenIsSet() const
{
    return childrenIsSet_;
}

void CreatePipelineGroupResponse::unsetchildren()
{
    childrenIsSet_ = false;
}

}
}
}
}
}


