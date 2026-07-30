

#include "huaweicloud/modelarts/v1/model/ChangeTrainingExperimentRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ChangeTrainingExperimentRequestBody::ChangeTrainingExperimentRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ChangeTrainingExperimentRequestBody::~ChangeTrainingExperimentRequestBody() = default;

void ChangeTrainingExperimentRequestBody::validate()
{
}

web::json::value ChangeTrainingExperimentRequestBody::toJson() const
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
bool ChangeTrainingExperimentRequestBody::fromJson(const web::json::value& val)
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


std::string ChangeTrainingExperimentRequestBody::getName() const
{
    return name_;
}

void ChangeTrainingExperimentRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ChangeTrainingExperimentRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void ChangeTrainingExperimentRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string ChangeTrainingExperimentRequestBody::getDescription() const
{
    return description_;
}

void ChangeTrainingExperimentRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ChangeTrainingExperimentRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ChangeTrainingExperimentRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


