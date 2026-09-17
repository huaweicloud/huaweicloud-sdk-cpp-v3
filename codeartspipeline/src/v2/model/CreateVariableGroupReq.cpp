

#include "huaweicloud/codeartspipeline/v2/model/CreateVariableGroupReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreateVariableGroupReq::CreateVariableGroupReq()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    variablesIsSet_ = false;
}

CreateVariableGroupReq::~CreateVariableGroupReq() = default;

void CreateVariableGroupReq::validate()
{
}

web::json::value CreateVariableGroupReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(variablesIsSet_) {
        val[utility::conversions::to_string_t("variables")] = ModelBase::toJson(variables_);
    }

    return val;
}
bool CreateVariableGroupReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("variables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variables"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateVariableGroupReq_variables> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVariables(refVal);
        }
    }
    return ok;
}


std::string CreateVariableGroupReq::getName() const
{
    return name_;
}

void CreateVariableGroupReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateVariableGroupReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateVariableGroupReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateVariableGroupReq::getDescription() const
{
    return description_;
}

void CreateVariableGroupReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateVariableGroupReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateVariableGroupReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<CreateVariableGroupReq_variables>& CreateVariableGroupReq::getVariables()
{
    return variables_;
}

void CreateVariableGroupReq::setVariables(const std::vector<CreateVariableGroupReq_variables>& value)
{
    variables_ = value;
    variablesIsSet_ = true;
}

bool CreateVariableGroupReq::variablesIsSet() const
{
    return variablesIsSet_;
}

void CreateVariableGroupReq::unsetvariables()
{
    variablesIsSet_ = false;
}

}
}
}
}
}


