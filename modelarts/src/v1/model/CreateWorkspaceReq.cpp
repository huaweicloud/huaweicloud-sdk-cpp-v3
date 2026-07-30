

#include "huaweicloud/modelarts/v1/model/CreateWorkspaceReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateWorkspaceReq::CreateWorkspaceReq()
{
    grantsIsSet_ = false;
    authType_ = "";
    authTypeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CreateWorkspaceReq::~CreateWorkspaceReq() = default;

void CreateWorkspaceReq::validate()
{
}

web::json::value CreateWorkspaceReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(grantsIsSet_) {
        val[utility::conversions::to_string_t("grants")] = ModelBase::toJson(grants_);
    }
    if(authTypeIsSet_) {
        val[utility::conversions::to_string_t("auth_type")] = ModelBase::toJson(authType_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool CreateWorkspaceReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("grants"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grants"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateWorkspaceReq_grants> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrants(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthType(refVal);
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


std::vector<CreateWorkspaceReq_grants>& CreateWorkspaceReq::getGrants()
{
    return grants_;
}

void CreateWorkspaceReq::setGrants(const std::vector<CreateWorkspaceReq_grants>& value)
{
    grants_ = value;
    grantsIsSet_ = true;
}

bool CreateWorkspaceReq::grantsIsSet() const
{
    return grantsIsSet_;
}

void CreateWorkspaceReq::unsetgrants()
{
    grantsIsSet_ = false;
}

std::string CreateWorkspaceReq::getAuthType() const
{
    return authType_;
}

void CreateWorkspaceReq::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool CreateWorkspaceReq::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void CreateWorkspaceReq::unsetauthType()
{
    authTypeIsSet_ = false;
}

std::string CreateWorkspaceReq::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateWorkspaceReq::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateWorkspaceReq::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateWorkspaceReq::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateWorkspaceReq::getName() const
{
    return name_;
}

void CreateWorkspaceReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateWorkspaceReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateWorkspaceReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateWorkspaceReq::getDescription() const
{
    return description_;
}

void CreateWorkspaceReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateWorkspaceReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateWorkspaceReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


