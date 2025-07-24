

#include "huaweicloud/cloudtest/v1/model/TaskResultVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TaskResultVo::TaskResultVo()
{
    uri_ = "";
    uriIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    ownerName_ = "";
    ownerNameIsSet_ = false;
    releaseDev_ = "";
    releaseDevIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updator_ = "";
    updatorIsSet_ = false;
    updatorName_ = "";
    updatorNameIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    resultName_ = "";
    resultNameIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
}

TaskResultVo::~TaskResultVo() = default;

void TaskResultVo::validate()
{
}

web::json::value TaskResultVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(ownerNameIsSet_) {
        val[utility::conversions::to_string_t("owner_name")] = ModelBase::toJson(ownerName_);
    }
    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("release_dev")] = ModelBase::toJson(releaseDev_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updatorIsSet_) {
        val[utility::conversions::to_string_t("updator")] = ModelBase::toJson(updator_);
    }
    if(updatorNameIsSet_) {
        val[utility::conversions::to_string_t("updator_name")] = ModelBase::toJson(updatorName_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(resultNameIsSet_) {
        val[utility::conversions::to_string_t("result_name")] = ModelBase::toJson(resultName_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }

    return val;
}
bool TaskResultVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("release_dev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_dev"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDev(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatorName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    return ok;
}


std::string TaskResultVo::getUri() const
{
    return uri_;
}

void TaskResultVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool TaskResultVo::uriIsSet() const
{
    return uriIsSet_;
}

void TaskResultVo::unseturi()
{
    uriIsSet_ = false;
}

std::string TaskResultVo::getName() const
{
    return name_;
}

void TaskResultVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TaskResultVo::nameIsSet() const
{
    return nameIsSet_;
}

void TaskResultVo::unsetname()
{
    nameIsSet_ = false;
}

std::string TaskResultVo::getTaskUri() const
{
    return taskUri_;
}

void TaskResultVo::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool TaskResultVo::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void TaskResultVo::unsettaskUri()
{
    taskUriIsSet_ = false;
}

std::string TaskResultVo::getDescription() const
{
    return description_;
}

void TaskResultVo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TaskResultVo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TaskResultVo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string TaskResultVo::getOwner() const
{
    return owner_;
}

void TaskResultVo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool TaskResultVo::ownerIsSet() const
{
    return ownerIsSet_;
}

void TaskResultVo::unsetowner()
{
    ownerIsSet_ = false;
}

std::string TaskResultVo::getOwnerName() const
{
    return ownerName_;
}

void TaskResultVo::setOwnerName(const std::string& value)
{
    ownerName_ = value;
    ownerNameIsSet_ = true;
}

bool TaskResultVo::ownerNameIsSet() const
{
    return ownerNameIsSet_;
}

void TaskResultVo::unsetownerName()
{
    ownerNameIsSet_ = false;
}

std::string TaskResultVo::getReleaseDev() const
{
    return releaseDev_;
}

void TaskResultVo::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool TaskResultVo::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void TaskResultVo::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

std::string TaskResultVo::getVersionUri() const
{
    return versionUri_;
}

void TaskResultVo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool TaskResultVo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void TaskResultVo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string TaskResultVo::getCreator() const
{
    return creator_;
}

void TaskResultVo::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool TaskResultVo::creatorIsSet() const
{
    return creatorIsSet_;
}

void TaskResultVo::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string TaskResultVo::getCreatorName() const
{
    return creatorName_;
}

void TaskResultVo::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool TaskResultVo::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void TaskResultVo::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string TaskResultVo::getCreateTime() const
{
    return createTime_;
}

void TaskResultVo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TaskResultVo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TaskResultVo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TaskResultVo::getUpdator() const
{
    return updator_;
}

void TaskResultVo::setUpdator(const std::string& value)
{
    updator_ = value;
    updatorIsSet_ = true;
}

bool TaskResultVo::updatorIsSet() const
{
    return updatorIsSet_;
}

void TaskResultVo::unsetupdator()
{
    updatorIsSet_ = false;
}

std::string TaskResultVo::getUpdatorName() const
{
    return updatorName_;
}

void TaskResultVo::setUpdatorName(const std::string& value)
{
    updatorName_ = value;
    updatorNameIsSet_ = true;
}

bool TaskResultVo::updatorNameIsSet() const
{
    return updatorNameIsSet_;
}

void TaskResultVo::unsetupdatorName()
{
    updatorNameIsSet_ = false;
}

std::string TaskResultVo::getUpdateTime() const
{
    return updateTime_;
}

void TaskResultVo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TaskResultVo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TaskResultVo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string TaskResultVo::getStartTime() const
{
    return startTime_;
}

void TaskResultVo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool TaskResultVo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void TaskResultVo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string TaskResultVo::getEndTime() const
{
    return endTime_;
}

void TaskResultVo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool TaskResultVo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void TaskResultVo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string TaskResultVo::getResultName() const
{
    return resultName_;
}

void TaskResultVo::setResultName(const std::string& value)
{
    resultName_ = value;
    resultNameIsSet_ = true;
}

bool TaskResultVo::resultNameIsSet() const
{
    return resultNameIsSet_;
}

void TaskResultVo::unsetresultName()
{
    resultNameIsSet_ = false;
}

std::string TaskResultVo::getProjectUuid() const
{
    return projectUuid_;
}

void TaskResultVo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool TaskResultVo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void TaskResultVo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

}
}
}
}
}


