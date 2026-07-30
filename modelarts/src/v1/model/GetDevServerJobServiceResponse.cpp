

#include "huaweicloud/modelarts/v1/model/GetDevServerJobServiceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetDevServerJobServiceResponse::GetDevServerJobServiceResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    specIsSet_ = false;
    instancesIsSet_ = false;
    modelIsSet_ = false;
}

GetDevServerJobServiceResponse::~GetDevServerJobServiceResponse() = default;

void GetDevServerJobServiceResponse::validate()
{
}

web::json::value GetDevServerJobServiceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }
    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }
    if(modelIsSet_) {
        val[utility::conversions::to_string_t("model")] = ModelBase::toJson(model_);
    }

    return val;
}
bool GetDevServerJobServiceResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<AIServiceInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model"));
        if(!fieldValue.is_null())
        {
            Model refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModel(refVal);
        }
    }
    return ok;
}


std::string GetDevServerJobServiceResponse::getId() const
{
    return id_;
}

void GetDevServerJobServiceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetDevServerJobServiceResponse::idIsSet() const
{
    return idIsSet_;
}

void GetDevServerJobServiceResponse::unsetid()
{
    idIsSet_ = false;
}

std::string GetDevServerJobServiceResponse::getName() const
{
    return name_;
}

void GetDevServerJobServiceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetDevServerJobServiceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void GetDevServerJobServiceResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string GetDevServerJobServiceResponse::getStatus() const
{
    return status_;
}

void GetDevServerJobServiceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GetDevServerJobServiceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void GetDevServerJobServiceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::map<std::string, std::string>& GetDevServerJobServiceResponse::getSpec()
{
    return spec_;
}

void GetDevServerJobServiceResponse::setSpec(const std::map<std::string, std::string>& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool GetDevServerJobServiceResponse::specIsSet() const
{
    return specIsSet_;
}

void GetDevServerJobServiceResponse::unsetspec()
{
    specIsSet_ = false;
}

std::vector<AIServiceInstance>& GetDevServerJobServiceResponse::getInstances()
{
    return instances_;
}

void GetDevServerJobServiceResponse::setInstances(const std::vector<AIServiceInstance>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool GetDevServerJobServiceResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void GetDevServerJobServiceResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

Model GetDevServerJobServiceResponse::getModel() const
{
    return model_;
}

void GetDevServerJobServiceResponse::setModel(const Model& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool GetDevServerJobServiceResponse::modelIsSet() const
{
    return modelIsSet_;
}

void GetDevServerJobServiceResponse::unsetmodel()
{
    modelIsSet_ = false;
}

}
}
}
}
}


