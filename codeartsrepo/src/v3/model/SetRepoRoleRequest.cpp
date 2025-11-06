

#include "huaweicloud/codeartsrepo/v3/model/SetRepoRoleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




SetRepoRoleRequest::SetRepoRoleRequest()
{
    memberId_ = "";
    memberIdIsSet_ = false;
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
    bodyIsSet_ = false;
}

SetRepoRoleRequest::~SetRepoRoleRequest() = default;

void SetRepoRoleRequest::validate()
{
}

web::json::value SetRepoRoleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(memberIdIsSet_) {
        val[utility::conversions::to_string_t("member_id")] = ModelBase::toJson(memberId_);
    }
    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetRepoRoleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("member_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SetRepoRoleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetRepoRoleRequest::getMemberId() const
{
    return memberId_;
}

void SetRepoRoleRequest::setMemberId(const std::string& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool SetRepoRoleRequest::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void SetRepoRoleRequest::unsetmemberId()
{
    memberIdIsSet_ = false;
}

std::string SetRepoRoleRequest::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void SetRepoRoleRequest::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool SetRepoRoleRequest::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void SetRepoRoleRequest::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

SetRepoRoleRequestBody SetRepoRoleRequest::getBody() const
{
    return body_;
}

void SetRepoRoleRequest::setBody(const SetRepoRoleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetRepoRoleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetRepoRoleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


