

#include "huaweicloud/codeartspipeline/v2/model/CreateVariableGroupReq_variables.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreateVariableGroupReq_variables::CreateVariableGroupReq_variables()
{
    sequence_ = 0;
    sequenceIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    isSecret_ = false;
    isSecretIsSet_ = false;
}

CreateVariableGroupReq_variables::~CreateVariableGroupReq_variables() = default;

void CreateVariableGroupReq_variables::validate()
{
}

web::json::value CreateVariableGroupReq_variables::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(isSecretIsSet_) {
        val[utility::conversions::to_string_t("is_secret")] = ModelBase::toJson(isSecret_);
    }

    return val;
}
bool CreateVariableGroupReq_variables::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_secret"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSecret(refVal);
        }
    }
    return ok;
}


int32_t CreateVariableGroupReq_variables::getSequence() const
{
    return sequence_;
}

void CreateVariableGroupReq_variables::setSequence(int32_t value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool CreateVariableGroupReq_variables::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void CreateVariableGroupReq_variables::unsetsequence()
{
    sequenceIsSet_ = false;
}

std::string CreateVariableGroupReq_variables::getName() const
{
    return name_;
}

void CreateVariableGroupReq_variables::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateVariableGroupReq_variables::nameIsSet() const
{
    return nameIsSet_;
}

void CreateVariableGroupReq_variables::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateVariableGroupReq_variables::getType() const
{
    return type_;
}

void CreateVariableGroupReq_variables::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateVariableGroupReq_variables::typeIsSet() const
{
    return typeIsSet_;
}

void CreateVariableGroupReq_variables::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateVariableGroupReq_variables::getValue() const
{
    return value_;
}

void CreateVariableGroupReq_variables::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CreateVariableGroupReq_variables::valueIsSet() const
{
    return valueIsSet_;
}

void CreateVariableGroupReq_variables::unsetvalue()
{
    valueIsSet_ = false;
}

std::string CreateVariableGroupReq_variables::getDescription() const
{
    return description_;
}

void CreateVariableGroupReq_variables::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateVariableGroupReq_variables::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateVariableGroupReq_variables::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool CreateVariableGroupReq_variables::isIsSecret() const
{
    return isSecret_;
}

void CreateVariableGroupReq_variables::setIsSecret(bool value)
{
    isSecret_ = value;
    isSecretIsSet_ = true;
}

bool CreateVariableGroupReq_variables::isSecretIsSet() const
{
    return isSecretIsSet_;
}

void CreateVariableGroupReq_variables::unsetisSecret()
{
    isSecretIsSet_ = false;
}

}
}
}
}
}


