

#include "huaweicloud/codeartspipeline/v2/model/ListPipelinesPage_tag_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelinesPage_tag_list::ListPipelinesPage_tag_list()
{
    tagId_ = "";
    tagIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    color_ = "";
    colorIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
    updaterId_ = "";
    updaterIdIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
}

ListPipelinesPage_tag_list::~ListPipelinesPage_tag_list() = default;

void ListPipelinesPage_tag_list::validate()
{
}

web::json::value ListPipelinesPage_tag_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIdIsSet_) {
        val[utility::conversions::to_string_t("tag_id")] = ModelBase::toJson(tagId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(colorIsSet_) {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(color_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(updaterIdIsSet_) {
        val[utility::conversions::to_string_t("updater_id")] = ModelBase::toJson(updaterId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool ListPipelinesPage_tag_list::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("color"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("color"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updater_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updater_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdaterId(refVal);
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
    return ok;
}


std::string ListPipelinesPage_tag_list::getTagId() const
{
    return tagId_;
}

void ListPipelinesPage_tag_list::setTagId(const std::string& value)
{
    tagId_ = value;
    tagIdIsSet_ = true;
}

bool ListPipelinesPage_tag_list::tagIdIsSet() const
{
    return tagIdIsSet_;
}

void ListPipelinesPage_tag_list::unsettagId()
{
    tagIdIsSet_ = false;
}

std::string ListPipelinesPage_tag_list::getName() const
{
    return name_;
}

void ListPipelinesPage_tag_list::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListPipelinesPage_tag_list::nameIsSet() const
{
    return nameIsSet_;
}

void ListPipelinesPage_tag_list::unsetname()
{
    nameIsSet_ = false;
}

std::string ListPipelinesPage_tag_list::getColor() const
{
    return color_;
}

void ListPipelinesPage_tag_list::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool ListPipelinesPage_tag_list::colorIsSet() const
{
    return colorIsSet_;
}

void ListPipelinesPage_tag_list::unsetcolor()
{
    colorIsSet_ = false;
}

std::string ListPipelinesPage_tag_list::getProjectId() const
{
    return projectId_;
}

void ListPipelinesPage_tag_list::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListPipelinesPage_tag_list::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListPipelinesPage_tag_list::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListPipelinesPage_tag_list::getDomainId() const
{
    return domainId_;
}

void ListPipelinesPage_tag_list::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListPipelinesPage_tag_list::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListPipelinesPage_tag_list::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListPipelinesPage_tag_list::getCreatorId() const
{
    return creatorId_;
}

void ListPipelinesPage_tag_list::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool ListPipelinesPage_tag_list::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void ListPipelinesPage_tag_list::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string ListPipelinesPage_tag_list::getUpdaterId() const
{
    return updaterId_;
}

void ListPipelinesPage_tag_list::setUpdaterId(const std::string& value)
{
    updaterId_ = value;
    updaterIdIsSet_ = true;
}

bool ListPipelinesPage_tag_list::updaterIdIsSet() const
{
    return updaterIdIsSet_;
}

void ListPipelinesPage_tag_list::unsetupdaterId()
{
    updaterIdIsSet_ = false;
}

int64_t ListPipelinesPage_tag_list::getCreateTime() const
{
    return createTime_;
}

void ListPipelinesPage_tag_list::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ListPipelinesPage_tag_list::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ListPipelinesPage_tag_list::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t ListPipelinesPage_tag_list::getUpdateTime() const
{
    return updateTime_;
}

void ListPipelinesPage_tag_list::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ListPipelinesPage_tag_list::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ListPipelinesPage_tag_list::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


