

#include "huaweicloud/modelarts/v1/model/AlgorithmResponse_job_config_outputs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmResponse_job_config_outputs::AlgorithmResponse_job_config_outputs()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

AlgorithmResponse_job_config_outputs::~AlgorithmResponse_job_config_outputs() = default;

void AlgorithmResponse_job_config_outputs::validate()
{
}

web::json::value AlgorithmResponse_job_config_outputs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool AlgorithmResponse_job_config_outputs::fromJson(const web::json::value& val)
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
    return ok;
}


std::string AlgorithmResponse_job_config_outputs::getName() const
{
    return name_;
}

void AlgorithmResponse_job_config_outputs::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AlgorithmResponse_job_config_outputs::nameIsSet() const
{
    return nameIsSet_;
}

void AlgorithmResponse_job_config_outputs::unsetname()
{
    nameIsSet_ = false;
}

std::string AlgorithmResponse_job_config_outputs::getDescription() const
{
    return description_;
}

void AlgorithmResponse_job_config_outputs::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AlgorithmResponse_job_config_outputs::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AlgorithmResponse_job_config_outputs::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


