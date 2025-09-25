

#include "huaweicloud/codehub/v4/model/ShowGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowGroupResponse::ShowGroupResponse()
{
    creatorId_ = 0;
    creatorIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    fullName_ = "";
    fullNameIsSet_ = false;
    ancestorIdsIsSet_ = false;
    ancestorNamesIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    membersCount_ = 0;
    membersCountIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    repositoryCount_ = 0;
    repositoryCountIsSet_ = false;
    starCount_ = 0;
    starCountIsSet_ = false;
    starred_ = false;
    starredIsSet_ = false;
    subgroupCount_ = 0;
    subgroupCountIsSet_ = false;
    visibility_ = "";
    visibilityIsSet_ = false;
    sumIsSet_ = false;
}

ShowGroupResponse::~ShowGroupResponse() = default;

void ShowGroupResponse::validate()
{
}

web::json::value ShowGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(fullNameIsSet_) {
        val[utility::conversions::to_string_t("full_name")] = ModelBase::toJson(fullName_);
    }
    if(ancestorIdsIsSet_) {
        val[utility::conversions::to_string_t("ancestor_ids")] = ModelBase::toJson(ancestorIds_);
    }
    if(ancestorNamesIsSet_) {
        val[utility::conversions::to_string_t("ancestor_names")] = ModelBase::toJson(ancestorNames_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(membersCountIsSet_) {
        val[utility::conversions::to_string_t("members_count")] = ModelBase::toJson(membersCount_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(repositoryCountIsSet_) {
        val[utility::conversions::to_string_t("repository_count")] = ModelBase::toJson(repositoryCount_);
    }
    if(starCountIsSet_) {
        val[utility::conversions::to_string_t("star_count")] = ModelBase::toJson(starCount_);
    }
    if(starredIsSet_) {
        val[utility::conversions::to_string_t("starred")] = ModelBase::toJson(starred_);
    }
    if(subgroupCountIsSet_) {
        val[utility::conversions::to_string_t("subgroup_count")] = ModelBase::toJson(subgroupCount_);
    }
    if(visibilityIsSet_) {
        val[utility::conversions::to_string_t("visibility")] = ModelBase::toJson(visibility_);
    }
    if(sumIsSet_) {
        val[utility::conversions::to_string_t("sum")] = ModelBase::toJson(sum_);
    }

    return val;
}
bool ShowGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("full_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ancestor_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ancestor_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAncestorIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ancestor_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ancestor_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAncestorNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("members_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("members_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMembersCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repository_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("star_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("star_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStarCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("starred"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("starred"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStarred(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subgroup_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subgroup_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubgroupCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visibility"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibility(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sum"));
        if(!fieldValue.is_null())
        {
            GroupSumDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSum(refVal);
        }
    }
    return ok;
}


int32_t ShowGroupResponse::getCreatorId() const
{
    return creatorId_;
}

void ShowGroupResponse::setCreatorId(int32_t value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool ShowGroupResponse::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void ShowGroupResponse::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string ShowGroupResponse::getProjectId() const
{
    return projectId_;
}

void ShowGroupResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowGroupResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowGroupResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

utility::datetime ShowGroupResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowGroupResponse::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowGroupResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowGroupResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowGroupResponse::getDescription() const
{
    return description_;
}

void ShowGroupResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowGroupResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowGroupResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowGroupResponse::getFullName() const
{
    return fullName_;
}

void ShowGroupResponse::setFullName(const std::string& value)
{
    fullName_ = value;
    fullNameIsSet_ = true;
}

bool ShowGroupResponse::fullNameIsSet() const
{
    return fullNameIsSet_;
}

void ShowGroupResponse::unsetfullName()
{
    fullNameIsSet_ = false;
}

std::vector<int32_t>& ShowGroupResponse::getAncestorIds()
{
    return ancestorIds_;
}

void ShowGroupResponse::setAncestorIds(std::vector<int32_t> value)
{
    ancestorIds_ = value;
    ancestorIdsIsSet_ = true;
}

bool ShowGroupResponse::ancestorIdsIsSet() const
{
    return ancestorIdsIsSet_;
}

void ShowGroupResponse::unsetancestorIds()
{
    ancestorIdsIsSet_ = false;
}

std::vector<std::string>& ShowGroupResponse::getAncestorNames()
{
    return ancestorNames_;
}

void ShowGroupResponse::setAncestorNames(const std::vector<std::string>& value)
{
    ancestorNames_ = value;
    ancestorNamesIsSet_ = true;
}

bool ShowGroupResponse::ancestorNamesIsSet() const
{
    return ancestorNamesIsSet_;
}

void ShowGroupResponse::unsetancestorNames()
{
    ancestorNamesIsSet_ = false;
}

int32_t ShowGroupResponse::getId() const
{
    return id_;
}

void ShowGroupResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowGroupResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowGroupResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t ShowGroupResponse::getMembersCount() const
{
    return membersCount_;
}

void ShowGroupResponse::setMembersCount(int32_t value)
{
    membersCount_ = value;
    membersCountIsSet_ = true;
}

bool ShowGroupResponse::membersCountIsSet() const
{
    return membersCountIsSet_;
}

void ShowGroupResponse::unsetmembersCount()
{
    membersCountIsSet_ = false;
}

std::string ShowGroupResponse::getName() const
{
    return name_;
}

void ShowGroupResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowGroupResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowGroupResponse::unsetname()
{
    nameIsSet_ = false;
}

int32_t ShowGroupResponse::getRepositoryCount() const
{
    return repositoryCount_;
}

void ShowGroupResponse::setRepositoryCount(int32_t value)
{
    repositoryCount_ = value;
    repositoryCountIsSet_ = true;
}

bool ShowGroupResponse::repositoryCountIsSet() const
{
    return repositoryCountIsSet_;
}

void ShowGroupResponse::unsetrepositoryCount()
{
    repositoryCountIsSet_ = false;
}

int32_t ShowGroupResponse::getStarCount() const
{
    return starCount_;
}

void ShowGroupResponse::setStarCount(int32_t value)
{
    starCount_ = value;
    starCountIsSet_ = true;
}

bool ShowGroupResponse::starCountIsSet() const
{
    return starCountIsSet_;
}

void ShowGroupResponse::unsetstarCount()
{
    starCountIsSet_ = false;
}

bool ShowGroupResponse::isStarred() const
{
    return starred_;
}

void ShowGroupResponse::setStarred(bool value)
{
    starred_ = value;
    starredIsSet_ = true;
}

bool ShowGroupResponse::starredIsSet() const
{
    return starredIsSet_;
}

void ShowGroupResponse::unsetstarred()
{
    starredIsSet_ = false;
}

int32_t ShowGroupResponse::getSubgroupCount() const
{
    return subgroupCount_;
}

void ShowGroupResponse::setSubgroupCount(int32_t value)
{
    subgroupCount_ = value;
    subgroupCountIsSet_ = true;
}

bool ShowGroupResponse::subgroupCountIsSet() const
{
    return subgroupCountIsSet_;
}

void ShowGroupResponse::unsetsubgroupCount()
{
    subgroupCountIsSet_ = false;
}

std::string ShowGroupResponse::getVisibility() const
{
    return visibility_;
}

void ShowGroupResponse::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool ShowGroupResponse::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void ShowGroupResponse::unsetvisibility()
{
    visibilityIsSet_ = false;
}

GroupSumDto ShowGroupResponse::getSum() const
{
    return sum_;
}

void ShowGroupResponse::setSum(const GroupSumDto& value)
{
    sum_ = value;
    sumIsSet_ = true;
}

bool ShowGroupResponse::sumIsSet() const
{
    return sumIsSet_;
}

void ShowGroupResponse::unsetsum()
{
    sumIsSet_ = false;
}

}
}
}
}
}


