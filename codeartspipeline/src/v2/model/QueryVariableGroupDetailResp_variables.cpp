

#include "huaweicloud/codeartspipeline/v2/model/QueryVariableGroupDetailResp_variables.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




QueryVariableGroupDetailResp_variables::QueryVariableGroupDetailResp_variables()
{
    name_ = "";
    nameIsSet_ = false;
    sequence_ = 0;
    sequenceIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    isSecret_ = false;
    isSecretIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

QueryVariableGroupDetailResp_variables::~QueryVariableGroupDetailResp_variables() = default;

void QueryVariableGroupDetailResp_variables::validate()
{
}

web::json::value QueryVariableGroupDetailResp_variables::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(isSecretIsSet_) {
        val[utility::conversions::to_string_t("is_secret")] = ModelBase::toJson(isSecret_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool QueryVariableGroupDetailResp_variables::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_secret"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSecret(refVal);
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


std::string QueryVariableGroupDetailResp_variables::getName() const
{
    return name_;
}

void QueryVariableGroupDetailResp_variables::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QueryVariableGroupDetailResp_variables::nameIsSet() const
{
    return nameIsSet_;
}

void QueryVariableGroupDetailResp_variables::unsetname()
{
    nameIsSet_ = false;
}

int32_t QueryVariableGroupDetailResp_variables::getSequence() const
{
    return sequence_;
}

void QueryVariableGroupDetailResp_variables::setSequence(int32_t value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool QueryVariableGroupDetailResp_variables::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void QueryVariableGroupDetailResp_variables::unsetsequence()
{
    sequenceIsSet_ = false;
}

std::string QueryVariableGroupDetailResp_variables::getType() const
{
    return type_;
}

void QueryVariableGroupDetailResp_variables::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QueryVariableGroupDetailResp_variables::typeIsSet() const
{
    return typeIsSet_;
}

void QueryVariableGroupDetailResp_variables::unsettype()
{
    typeIsSet_ = false;
}

std::string QueryVariableGroupDetailResp_variables::getValue() const
{
    return value_;
}

void QueryVariableGroupDetailResp_variables::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool QueryVariableGroupDetailResp_variables::valueIsSet() const
{
    return valueIsSet_;
}

void QueryVariableGroupDetailResp_variables::unsetvalue()
{
    valueIsSet_ = false;
}

bool QueryVariableGroupDetailResp_variables::isIsSecret() const
{
    return isSecret_;
}

void QueryVariableGroupDetailResp_variables::setIsSecret(bool value)
{
    isSecret_ = value;
    isSecretIsSet_ = true;
}

bool QueryVariableGroupDetailResp_variables::isSecretIsSet() const
{
    return isSecretIsSet_;
}

void QueryVariableGroupDetailResp_variables::unsetisSecret()
{
    isSecretIsSet_ = false;
}

std::string QueryVariableGroupDetailResp_variables::getDescription() const
{
    return description_;
}

void QueryVariableGroupDetailResp_variables::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool QueryVariableGroupDetailResp_variables::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void QueryVariableGroupDetailResp_variables::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


