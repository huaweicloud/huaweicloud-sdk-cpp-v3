

#include "huaweicloud/modelarts/v1/model/TrainingExperimentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TrainingExperimentRequest::TrainingExperimentRequest()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

TrainingExperimentRequest::~TrainingExperimentRequest() = default;

void TrainingExperimentRequest::validate()
{
}

web::json::value TrainingExperimentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool TrainingExperimentRequest::fromJson(const web::json::value& val)
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


std::string TrainingExperimentRequest::getId() const
{
    return id_;
}

void TrainingExperimentRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TrainingExperimentRequest::idIsSet() const
{
    return idIsSet_;
}

void TrainingExperimentRequest::unsetid()
{
    idIsSet_ = false;
}

std::string TrainingExperimentRequest::getName() const
{
    return name_;
}

void TrainingExperimentRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TrainingExperimentRequest::nameIsSet() const
{
    return nameIsSet_;
}

void TrainingExperimentRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string TrainingExperimentRequest::getDescription() const
{
    return description_;
}

void TrainingExperimentRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TrainingExperimentRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TrainingExperimentRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


