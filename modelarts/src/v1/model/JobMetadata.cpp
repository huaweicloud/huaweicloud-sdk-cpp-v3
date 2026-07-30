

#include "huaweicloud/modelarts/v1/model/JobMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobMetadata::JobMetadata()
{
    name_ = "";
    nameIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    annotationsIsSet_ = false;
    trainingExperimentReferenceIsSet_ = false;
}

JobMetadata::~JobMetadata() = default;

void JobMetadata::validate()
{
}

web::json::value JobMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(annotationsIsSet_) {
        val[utility::conversions::to_string_t("annotations")] = ModelBase::toJson(annotations_);
    }
    if(trainingExperimentReferenceIsSet_) {
        val[utility::conversions::to_string_t("training_experiment_reference")] = ModelBase::toJson(trainingExperimentReference_);
    }

    return val;
}
bool JobMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            TrainingExperimentRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainingExperimentReference(refVal);
        }
    }
    return ok;
}


std::string JobMetadata::getName() const
{
    return name_;
}

void JobMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void JobMetadata::unsetname()
{
    nameIsSet_ = false;
}

std::string JobMetadata::getWorkspaceId() const
{
    return workspaceId_;
}

void JobMetadata::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool JobMetadata::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void JobMetadata::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string JobMetadata::getDescription() const
{
    return description_;
}

void JobMetadata::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool JobMetadata::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void JobMetadata::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::map<std::string, std::string>& JobMetadata::getAnnotations()
{
    return annotations_;
}

void JobMetadata::setAnnotations(const std::map<std::string, std::string>& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool JobMetadata::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void JobMetadata::unsetannotations()
{
    annotationsIsSet_ = false;
}

TrainingExperimentRequest JobMetadata::getTrainingExperimentReference() const
{
    return trainingExperimentReference_;
}

void JobMetadata::setTrainingExperimentReference(const TrainingExperimentRequest& value)
{
    trainingExperimentReference_ = value;
    trainingExperimentReferenceIsSet_ = true;
}

bool JobMetadata::trainingExperimentReferenceIsSet() const
{
    return trainingExperimentReferenceIsSet_;
}

void JobMetadata::unsettrainingExperimentReference()
{
    trainingExperimentReferenceIsSet_ = false;
}

}
}
}
}
}


