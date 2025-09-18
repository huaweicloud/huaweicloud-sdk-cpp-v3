

#include "huaweicloud/codeartsartifact/v2/model/ShowRepositoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowRepositoryRequest::ShowRepositoryRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    repoId_ = "";
    repoIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
}

ShowRepositoryRequest::~ShowRepositoryRequest() = default;

void ShowRepositoryRequest::validate()
{
}

web::json::value ShowRepositoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }

    return val;
}
bool ShowRepositoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    return ok;
}


std::string ShowRepositoryRequest::getTenantId() const
{
    return tenantId_;
}

void ShowRepositoryRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ShowRepositoryRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ShowRepositoryRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ShowRepositoryRequest::getRepoId() const
{
    return repoId_;
}

void ShowRepositoryRequest::setRepoId(const std::string& value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool ShowRepositoryRequest::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void ShowRepositoryRequest::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string ShowRepositoryRequest::getRegion() const
{
    return region_;
}

void ShowRepositoryRequest::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ShowRepositoryRequest::regionIsSet() const
{
    return regionIsSet_;
}

void ShowRepositoryRequest::unsetregion()
{
    regionIsSet_ = false;
}

}
}
}
}
}


