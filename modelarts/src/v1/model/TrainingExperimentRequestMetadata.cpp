

#include "huaweicloud/modelarts/v1/model/TrainingExperimentRequestMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TrainingExperimentRequestMetadata::TrainingExperimentRequestMetadata()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

TrainingExperimentRequestMetadata::~TrainingExperimentRequestMetadata() = default;

void TrainingExperimentRequestMetadata::validate()
{
}

web::json::value TrainingExperimentRequestMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool TrainingExperimentRequestMetadata::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    return ok;
}


std::string TrainingExperimentRequestMetadata::getName() const
{
    return name_;
}

void TrainingExperimentRequestMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TrainingExperimentRequestMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void TrainingExperimentRequestMetadata::unsetname()
{
    nameIsSet_ = false;
}

std::string TrainingExperimentRequestMetadata::getDescription() const
{
    return description_;
}

void TrainingExperimentRequestMetadata::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TrainingExperimentRequestMetadata::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TrainingExperimentRequestMetadata::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string TrainingExperimentRequestMetadata::getWorkspaceId() const
{
    return workspaceId_;
}

void TrainingExperimentRequestMetadata::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool TrainingExperimentRequestMetadata::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void TrainingExperimentRequestMetadata::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


