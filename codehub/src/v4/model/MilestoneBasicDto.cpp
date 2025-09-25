

#include "huaweicloud/codehub/v4/model/MilestoneBasicDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




MilestoneBasicDto::MilestoneBasicDto()
{
    id_ = 0;
    idIsSet_ = false;
    iid_ = 0;
    iidIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    dueDate_ = "";
    dueDateIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    repositoryPath_ = "";
    repositoryPathIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
}

MilestoneBasicDto::~MilestoneBasicDto() = default;

void MilestoneBasicDto::validate()
{
}

web::json::value MilestoneBasicDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(iidIsSet_) {
        val[utility::conversions::to_string_t("iid")] = ModelBase::toJson(iid_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(dueDateIsSet_) {
        val[utility::conversions::to_string_t("due_date")] = ModelBase::toJson(dueDate_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(repositoryPathIsSet_) {
        val[utility::conversions::to_string_t("repository_path")] = ModelBase::toJson(repositoryPath_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }

    return val;
}
bool MilestoneBasicDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("due_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("due_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("web_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("web_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebUrl(refVal);
        }
    }
    return ok;
}


int32_t MilestoneBasicDto::getId() const
{
    return id_;
}

void MilestoneBasicDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MilestoneBasicDto::idIsSet() const
{
    return idIsSet_;
}

void MilestoneBasicDto::unsetid()
{
    idIsSet_ = false;
}

int32_t MilestoneBasicDto::getIid() const
{
    return iid_;
}

void MilestoneBasicDto::setIid(int32_t value)
{
    iid_ = value;
    iidIsSet_ = true;
}

bool MilestoneBasicDto::iidIsSet() const
{
    return iidIsSet_;
}

void MilestoneBasicDto::unsetiid()
{
    iidIsSet_ = false;
}

int32_t MilestoneBasicDto::getRepositoryId() const
{
    return repositoryId_;
}

void MilestoneBasicDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool MilestoneBasicDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void MilestoneBasicDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string MilestoneBasicDto::getTitle() const
{
    return title_;
}

void MilestoneBasicDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool MilestoneBasicDto::titleIsSet() const
{
    return titleIsSet_;
}

void MilestoneBasicDto::unsettitle()
{
    titleIsSet_ = false;
}

std::string MilestoneBasicDto::getDescription() const
{
    return description_;
}

void MilestoneBasicDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool MilestoneBasicDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void MilestoneBasicDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string MilestoneBasicDto::getState() const
{
    return state_;
}

void MilestoneBasicDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool MilestoneBasicDto::stateIsSet() const
{
    return stateIsSet_;
}

void MilestoneBasicDto::unsetstate()
{
    stateIsSet_ = false;
}

std::string MilestoneBasicDto::getCreatedAt() const
{
    return createdAt_;
}

void MilestoneBasicDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool MilestoneBasicDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void MilestoneBasicDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string MilestoneBasicDto::getUpdatedAt() const
{
    return updatedAt_;
}

void MilestoneBasicDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool MilestoneBasicDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void MilestoneBasicDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string MilestoneBasicDto::getDueDate() const
{
    return dueDate_;
}

void MilestoneBasicDto::setDueDate(const std::string& value)
{
    dueDate_ = value;
    dueDateIsSet_ = true;
}

bool MilestoneBasicDto::dueDateIsSet() const
{
    return dueDateIsSet_;
}

void MilestoneBasicDto::unsetdueDate()
{
    dueDateIsSet_ = false;
}

std::string MilestoneBasicDto::getStartDate() const
{
    return startDate_;
}

void MilestoneBasicDto::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool MilestoneBasicDto::startDateIsSet() const
{
    return startDateIsSet_;
}

void MilestoneBasicDto::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string MilestoneBasicDto::getRepositoryPath() const
{
    return repositoryPath_;
}

void MilestoneBasicDto::setRepositoryPath(const std::string& value)
{
    repositoryPath_ = value;
    repositoryPathIsSet_ = true;
}

bool MilestoneBasicDto::repositoryPathIsSet() const
{
    return repositoryPathIsSet_;
}

void MilestoneBasicDto::unsetrepositoryPath()
{
    repositoryPathIsSet_ = false;
}

std::string MilestoneBasicDto::getWebUrl() const
{
    return webUrl_;
}

void MilestoneBasicDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool MilestoneBasicDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void MilestoneBasicDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

}
}
}
}
}


