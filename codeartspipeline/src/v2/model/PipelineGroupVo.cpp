

#include "huaweicloud/codeartspipeline/v2/model/PipelineGroupVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineGroupVo::PipelineGroupVo()
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

PipelineGroupVo::~PipelineGroupVo() = default;

void PipelineGroupVo::validate()
{
}

web::json::value PipelineGroupVo::toJson() const
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
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(*children_);
    }

    return val;
}
bool PipelineGroupVo::fromJson(const web::json::value& val)
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


std::string PipelineGroupVo::getId() const
{
    return id_;
}

void PipelineGroupVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PipelineGroupVo::idIsSet() const
{
    return idIsSet_;
}

void PipelineGroupVo::unsetid()
{
    idIsSet_ = false;
}

std::string PipelineGroupVo::getDomainId() const
{
    return domainId_;
}

void PipelineGroupVo::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool PipelineGroupVo::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void PipelineGroupVo::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string PipelineGroupVo::getProjectId() const
{
    return projectId_;
}

void PipelineGroupVo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool PipelineGroupVo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void PipelineGroupVo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string PipelineGroupVo::getName() const
{
    return name_;
}

void PipelineGroupVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PipelineGroupVo::nameIsSet() const
{
    return nameIsSet_;
}

void PipelineGroupVo::unsetname()
{
    nameIsSet_ = false;
}

std::string PipelineGroupVo::getParentId() const
{
    return parentId_;
}

void PipelineGroupVo::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool PipelineGroupVo::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void PipelineGroupVo::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string PipelineGroupVo::getPathId() const
{
    return pathId_;
}

void PipelineGroupVo::setPathId(const std::string& value)
{
    pathId_ = value;
    pathIdIsSet_ = true;
}

bool PipelineGroupVo::pathIdIsSet() const
{
    return pathIdIsSet_;
}

void PipelineGroupVo::unsetpathId()
{
    pathIdIsSet_ = false;
}

int32_t PipelineGroupVo::getOrdinal() const
{
    return ordinal_;
}

void PipelineGroupVo::setOrdinal(int32_t value)
{
    ordinal_ = value;
    ordinalIsSet_ = true;
}

bool PipelineGroupVo::ordinalIsSet() const
{
    return ordinalIsSet_;
}

void PipelineGroupVo::unsetordinal()
{
    ordinalIsSet_ = false;
}

std::string PipelineGroupVo::getCreator() const
{
    return creator_;
}

void PipelineGroupVo::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool PipelineGroupVo::creatorIsSet() const
{
    return creatorIsSet_;
}

void PipelineGroupVo::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string PipelineGroupVo::getUpdater() const
{
    return updater_;
}

void PipelineGroupVo::setUpdater(const std::string& value)
{
    updater_ = value;
    updaterIsSet_ = true;
}

bool PipelineGroupVo::updaterIsSet() const
{
    return updaterIsSet_;
}

void PipelineGroupVo::unsetupdater()
{
    updaterIsSet_ = false;
}

int64_t PipelineGroupVo::getCreateTime() const
{
    return createTime_;
}

void PipelineGroupVo::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool PipelineGroupVo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void PipelineGroupVo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t PipelineGroupVo::getUpdateTime() const
{
    return updateTime_;
}

void PipelineGroupVo::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool PipelineGroupVo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void PipelineGroupVo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::vector<PipelineGroupVo>& PipelineGroupVo::getChildren()
{
    return *children_;
}

void PipelineGroupVo::setChildren(const std::vector<PipelineGroupVo>& value)
{
    *children_ = value;
    childrenIsSet_ = true;
}

bool PipelineGroupVo::childrenIsSet() const
{
    return childrenIsSet_;
}

void PipelineGroupVo::unsetchildren()
{
    childrenIsSet_ = false;
}

}
}
}
}
}


