

#include "huaweicloud/codeartsrepo/v3/model/DeleteRepoMemberRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




DeleteRepoMemberRequest::DeleteRepoMemberRequest()
{
    memberId_ = "";
    memberIdIsSet_ = false;
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
}

DeleteRepoMemberRequest::~DeleteRepoMemberRequest() = default;

void DeleteRepoMemberRequest::validate()
{
}

web::json::value DeleteRepoMemberRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(memberIdIsSet_) {
        val[utility::conversions::to_string_t("member_id")] = ModelBase::toJson(memberId_);
    }
    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }

    return val;
}
bool DeleteRepoMemberRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteRepoMemberRequest::getMemberId() const
{
    return memberId_;
}

void DeleteRepoMemberRequest::setMemberId(const std::string& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool DeleteRepoMemberRequest::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void DeleteRepoMemberRequest::unsetmemberId()
{
    memberIdIsSet_ = false;
}

std::string DeleteRepoMemberRequest::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void DeleteRepoMemberRequest::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool DeleteRepoMemberRequest::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void DeleteRepoMemberRequest::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

}
}
}
}
}


