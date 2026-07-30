

#include "huaweicloud/modelarts/v1/model/AlgorithmResponse_job_config_inputs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmResponse_job_config_inputs::AlgorithmResponse_job_config_inputs()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    remoteConstraintsIsSet_ = false;
}

AlgorithmResponse_job_config_inputs::~AlgorithmResponse_job_config_inputs() = default;

void AlgorithmResponse_job_config_inputs::validate()
{
}

web::json::value AlgorithmResponse_job_config_inputs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(remoteConstraintsIsSet_) {
        val[utility::conversions::to_string_t("remote_constraints")] = ModelBase::toJson(remoteConstraints_);
    }

    return val;
}
bool AlgorithmResponse_job_config_inputs::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("remote_constraints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_constraints"));
        if(!fieldValue.is_null())
        {
            std::vector<AlgorithmResponse_job_config_remote_constraints> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteConstraints(refVal);
        }
    }
    return ok;
}


std::string AlgorithmResponse_job_config_inputs::getName() const
{
    return name_;
}

void AlgorithmResponse_job_config_inputs::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AlgorithmResponse_job_config_inputs::nameIsSet() const
{
    return nameIsSet_;
}

void AlgorithmResponse_job_config_inputs::unsetname()
{
    nameIsSet_ = false;
}

std::string AlgorithmResponse_job_config_inputs::getDescription() const
{
    return description_;
}

void AlgorithmResponse_job_config_inputs::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AlgorithmResponse_job_config_inputs::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AlgorithmResponse_job_config_inputs::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<AlgorithmResponse_job_config_remote_constraints>& AlgorithmResponse_job_config_inputs::getRemoteConstraints()
{
    return remoteConstraints_;
}

void AlgorithmResponse_job_config_inputs::setRemoteConstraints(const std::vector<AlgorithmResponse_job_config_remote_constraints>& value)
{
    remoteConstraints_ = value;
    remoteConstraintsIsSet_ = true;
}

bool AlgorithmResponse_job_config_inputs::remoteConstraintsIsSet() const
{
    return remoteConstraintsIsSet_;
}

void AlgorithmResponse_job_config_inputs::unsetremoteConstraints()
{
    remoteConstraintsIsSet_ = false;
}

}
}
}
}
}


