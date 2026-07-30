

#include "huaweicloud/modelarts/v1/model/UpdateWorkspaceReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateWorkspaceReq::UpdateWorkspaceReq()
{
    grantsIsSet_ = false;
    authType_ = "";
    authTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

UpdateWorkspaceReq::~UpdateWorkspaceReq() = default;

void UpdateWorkspaceReq::validate()
{
}

web::json::value UpdateWorkspaceReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(grantsIsSet_) {
        val[utility::conversions::to_string_t("grants")] = ModelBase::toJson(grants_);
    }
    if(authTypeIsSet_) {
        val[utility::conversions::to_string_t("auth_type")] = ModelBase::toJson(authType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool UpdateWorkspaceReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("grants"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grants"));
        if(!fieldValue.is_null())
        {
            std::vector<ViewWorkspaceResponse_grants> refVal;
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


std::vector<ViewWorkspaceResponse_grants>& UpdateWorkspaceReq::getGrants()
{
    return grants_;
}

void UpdateWorkspaceReq::setGrants(const std::vector<ViewWorkspaceResponse_grants>& value)
{
    grants_ = value;
    grantsIsSet_ = true;
}

bool UpdateWorkspaceReq::grantsIsSet() const
{
    return grantsIsSet_;
}

void UpdateWorkspaceReq::unsetgrants()
{
    grantsIsSet_ = false;
}

std::string UpdateWorkspaceReq::getAuthType() const
{
    return authType_;
}

void UpdateWorkspaceReq::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool UpdateWorkspaceReq::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void UpdateWorkspaceReq::unsetauthType()
{
    authTypeIsSet_ = false;
}

std::string UpdateWorkspaceReq::getName() const
{
    return name_;
}

void UpdateWorkspaceReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateWorkspaceReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateWorkspaceReq::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateWorkspaceReq::getDescription() const
{
    return description_;
}

void UpdateWorkspaceReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateWorkspaceReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateWorkspaceReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


