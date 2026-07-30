

#include "huaweicloud/modelarts/v1/model/ChangeTrainingExperimentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ChangeTrainingExperimentResponse::ChangeTrainingExperimentResponse()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ChangeTrainingExperimentResponse::~ChangeTrainingExperimentResponse() = default;

void ChangeTrainingExperimentResponse::validate()
{
}

web::json::value ChangeTrainingExperimentResponse::toJson() const
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
bool ChangeTrainingExperimentResponse::fromJson(const web::json::value& val)
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


std::string ChangeTrainingExperimentResponse::getName() const
{
    return name_;
}

void ChangeTrainingExperimentResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ChangeTrainingExperimentResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ChangeTrainingExperimentResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ChangeTrainingExperimentResponse::getDescription() const
{
    return description_;
}

void ChangeTrainingExperimentResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ChangeTrainingExperimentResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ChangeTrainingExperimentResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


