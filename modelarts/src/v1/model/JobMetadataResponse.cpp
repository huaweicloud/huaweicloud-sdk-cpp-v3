

#include "huaweicloud/modelarts/v1/model/JobMetadataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobMetadataResponse::JobMetadataResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    annotationsIsSet_ = false;
    trainingExperimentReferenceIsSet_ = false;
}

JobMetadataResponse::~JobMetadataResponse() = default;

void JobMetadataResponse::validate()
{
}

web::json::value JobMetadataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(annotationsIsSet_) {
        val[utility::conversions::to_string_t("annotations")] = ModelBase::toJson(annotations_);
    }
    if(trainingExperimentReferenceIsSet_) {
        val[utility::conversions::to_string_t("training_experiment_reference")] = ModelBase::toJson(trainingExperimentReference_);
    }

    return val;
}
bool JobMetadataResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("annotations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("annotations"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnnotations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("training_experiment_reference"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("training_experiment_reference"));
        if(!fieldValue.is_null())
        {
            TrainingExperimentResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainingExperimentReference(refVal);
        }
    }
    return ok;
}


std::string JobMetadataResponse::getId() const
{
    return id_;
}

void JobMetadataResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobMetadataResponse::idIsSet() const
{
    return idIsSet_;
}

void JobMetadataResponse::unsetid()
{
    idIsSet_ = false;
}

std::string JobMetadataResponse::getName() const
{
    return name_;
}

void JobMetadataResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobMetadataResponse::nameIsSet() const
{
    return nameIsSet_;
}

void JobMetadataResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string JobMetadataResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void JobMetadataResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool JobMetadataResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void JobMetadataResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string JobMetadataResponse::getDescription() const
{
    return description_;
}

void JobMetadataResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool JobMetadataResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void JobMetadataResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

int64_t JobMetadataResponse::getCreateTime() const
{
    return createTime_;
}

void JobMetadataResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool JobMetadataResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void JobMetadataResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string JobMetadataResponse::getUserName() const
{
    return userName_;
}

void JobMetadataResponse::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool JobMetadataResponse::userNameIsSet() const
{
    return userNameIsSet_;
}

void JobMetadataResponse::unsetuserName()
{
    userNameIsSet_ = false;
}

std::map<std::string, std::string>& JobMetadataResponse::getAnnotations()
{
    return annotations_;
}

void JobMetadataResponse::setAnnotations(const std::map<std::string, std::string>& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool JobMetadataResponse::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void JobMetadataResponse::unsetannotations()
{
    annotationsIsSet_ = false;
}

TrainingExperimentResp JobMetadataResponse::getTrainingExperimentReference() const
{
    return trainingExperimentReference_;
}

void JobMetadataResponse::setTrainingExperimentReference(const TrainingExperimentResp& value)
{
    trainingExperimentReference_ = value;
    trainingExperimentReferenceIsSet_ = true;
}

bool JobMetadataResponse::trainingExperimentReferenceIsSet() const
{
    return trainingExperimentReferenceIsSet_;
}

void JobMetadataResponse::unsettrainingExperimentReference()
{
    trainingExperimentReferenceIsSet_ = false;
}

}
}
}
}
}


