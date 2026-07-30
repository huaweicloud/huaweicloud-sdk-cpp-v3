

#include "huaweicloud/modelarts/v1/model/CheckTrainingExperimentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CheckTrainingExperimentRequest::CheckTrainingExperimentRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    experimentName_ = "";
    experimentNameIsSet_ = false;
}

CheckTrainingExperimentRequest::~CheckTrainingExperimentRequest() = default;

void CheckTrainingExperimentRequest::validate()
{
}

web::json::value CheckTrainingExperimentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(experimentNameIsSet_) {
        val[utility::conversions::to_string_t("experiment_name")] = ModelBase::toJson(experimentName_);
    }

    return val;
}
bool CheckTrainingExperimentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("experiment_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("experiment_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExperimentName(refVal);
        }
    }
    return ok;
}


std::string CheckTrainingExperimentRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void CheckTrainingExperimentRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool CheckTrainingExperimentRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void CheckTrainingExperimentRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string CheckTrainingExperimentRequest::getExperimentName() const
{
    return experimentName_;
}

void CheckTrainingExperimentRequest::setExperimentName(const std::string& value)
{
    experimentName_ = value;
    experimentNameIsSet_ = true;
}

bool CheckTrainingExperimentRequest::experimentNameIsSet() const
{
    return experimentNameIsSet_;
}

void CheckTrainingExperimentRequest::unsetexperimentName()
{
    experimentNameIsSet_ = false;
}

}
}
}
}
}


