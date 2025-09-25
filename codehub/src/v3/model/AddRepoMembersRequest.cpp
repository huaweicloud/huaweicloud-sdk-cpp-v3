

#include "huaweicloud/codehub/v3/model/AddRepoMembersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




AddRepoMembersRequest::AddRepoMembersRequest()
{
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
    bodyIsSet_ = false;
}

AddRepoMembersRequest::~AddRepoMembersRequest() = default;

void AddRepoMembersRequest::validate()
{
}

web::json::value AddRepoMembersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddRepoMembersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            CreateRepoMemberRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddRepoMembersRequest::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void AddRepoMembersRequest::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool AddRepoMembersRequest::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void AddRepoMembersRequest::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

CreateRepoMemberRequest AddRepoMembersRequest::getBody() const
{
    return body_;
}

void AddRepoMembersRequest::setBody(const CreateRepoMemberRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddRepoMembersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddRepoMembersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


