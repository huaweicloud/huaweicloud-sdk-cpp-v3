

#include "huaweicloud/functiongraph/v2/model/CreateFunctionAppRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateFunctionAppRequestBody::CreateFunctionAppRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    agencyName_ = "";
    agencyNameIsSet_ = false;
    paramsIsSet_ = false;
}

CreateFunctionAppRequestBody::~CreateFunctionAppRequestBody() = default;

void CreateFunctionAppRequestBody::validate()
{
}

web::json::value CreateFunctionAppRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CreateFunctionAppRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string CreateFunctionAppRequestBody::getName() const
{
    return name_;
}

void CreateFunctionAppRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateFunctionAppRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateFunctionAppRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateFunctionAppRequestBody::getTemplateId() const
{
    return templateId_;
}

void CreateFunctionAppRequestBody::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CreateFunctionAppRequestBody::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CreateFunctionAppRequestBody::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string CreateFunctionAppRequestBody::getDescription() const
{
    return description_;
}

void CreateFunctionAppRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateFunctionAppRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateFunctionAppRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateFunctionAppRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateFunctionAppRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateFunctionAppRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateFunctionAppRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateFunctionAppRequestBody::getAgencyName() const
{
    return agencyName_;
}

void CreateFunctionAppRequestBody::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool CreateFunctionAppRequestBody::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void CreateFunctionAppRequestBody::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

std::map<std::string, std::string>& CreateFunctionAppRequestBody::getParams()
{
    return params_;
}

void CreateFunctionAppRequestBody::setParams(const std::map<std::string, std::string>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CreateFunctionAppRequestBody::paramsIsSet() const
{
    return paramsIsSet_;
}

void CreateFunctionAppRequestBody::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


