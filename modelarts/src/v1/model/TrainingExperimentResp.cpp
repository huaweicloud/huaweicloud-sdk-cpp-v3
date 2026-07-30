

#include "huaweicloud/modelarts/v1/model/TrainingExperimentResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TrainingExperimentResp::TrainingExperimentResp()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    serialNumber_ = "";
    serialNumberIsSet_ = false;
}

TrainingExperimentResp::~TrainingExperimentResp() = default;

void TrainingExperimentResp::validate()
{
}

web::json::value TrainingExperimentResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(serialNumberIsSet_) {
        val[utility::conversions::to_string_t("serial_number")] = ModelBase::toJson(serialNumber_);
    }

    return val;
}
bool TrainingExperimentResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serial_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serial_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSerialNumber(refVal);
        }
    }
    return ok;
}


std::string TrainingExperimentResp::getName() const
{
    return name_;
}

void TrainingExperimentResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TrainingExperimentResp::nameIsSet() const
{
    return nameIsSet_;
}

void TrainingExperimentResp::unsetname()
{
    nameIsSet_ = false;
}

std::string TrainingExperimentResp::getId() const
{
    return id_;
}

void TrainingExperimentResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TrainingExperimentResp::idIsSet() const
{
    return idIsSet_;
}

void TrainingExperimentResp::unsetid()
{
    idIsSet_ = false;
}

std::string TrainingExperimentResp::getSerialNumber() const
{
    return serialNumber_;
}

void TrainingExperimentResp::setSerialNumber(const std::string& value)
{
    serialNumber_ = value;
    serialNumberIsSet_ = true;
}

bool TrainingExperimentResp::serialNumberIsSet() const
{
    return serialNumberIsSet_;
}

void TrainingExperimentResp::unsetserialNumber()
{
    serialNumberIsSet_ = false;
}

}
}
}
}
}


