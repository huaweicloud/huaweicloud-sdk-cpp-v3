

#include "huaweicloud/codeartsartifact/v2/model/ListMavenListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListMavenListRequest::ListMavenListRequest()
{
    default_ = false;
    defaultIsSet_ = false;
    policy_ = "";
    policyIsSet_ = false;
    repoIds_ = "";
    repoIdsIsSet_ = false;
    access_ = "";
    accessIsSet_ = false;
}

ListMavenListRequest::~ListMavenListRequest() = default;

void ListMavenListRequest::validate()
{
}

web::json::value ListMavenListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(defaultIsSet_) {
        val[utility::conversions::to_string_t("default")] = ModelBase::toJson(default_);
    }
    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }
    if(repoIdsIsSet_) {
        val[utility::conversions::to_string_t("repo_ids")] = ModelBase::toJson(repoIds_);
    }
    if(accessIsSet_) {
        val[utility::conversions::to_string_t("access")] = ModelBase::toJson(access_);
    }

    return val;
}
bool ListMavenListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccess(refVal);
        }
    }
    return ok;
}


bool ListMavenListRequest::isDefault() const
{
    return default_;
}

void ListMavenListRequest::setDefault(bool value)
{
    default_ = value;
    defaultIsSet_ = true;
}

bool ListMavenListRequest::defaultIsSet() const
{
    return defaultIsSet_;
}

void ListMavenListRequest::unsetdefault()
{
    defaultIsSet_ = false;
}

std::string ListMavenListRequest::getPolicy() const
{
    return policy_;
}

void ListMavenListRequest::setPolicy(const std::string& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool ListMavenListRequest::policyIsSet() const
{
    return policyIsSet_;
}

void ListMavenListRequest::unsetpolicy()
{
    policyIsSet_ = false;
}

std::string ListMavenListRequest::getRepoIds() const
{
    return repoIds_;
}

void ListMavenListRequest::setRepoIds(const std::string& value)
{
    repoIds_ = value;
    repoIdsIsSet_ = true;
}

bool ListMavenListRequest::repoIdsIsSet() const
{
    return repoIdsIsSet_;
}

void ListMavenListRequest::unsetrepoIds()
{
    repoIdsIsSet_ = false;
}

std::string ListMavenListRequest::getAccess() const
{
    return access_;
}

void ListMavenListRequest::setAccess(const std::string& value)
{
    access_ = value;
    accessIsSet_ = true;
}

bool ListMavenListRequest::accessIsSet() const
{
    return accessIsSet_;
}

void ListMavenListRequest::unsetaccess()
{
    accessIsSet_ = false;
}

}
}
}
}
}


