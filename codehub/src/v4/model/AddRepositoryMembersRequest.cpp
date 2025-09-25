

#include "huaweicloud/codehub/v4/model/AddRepositoryMembersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




AddRepositoryMembersRequest::AddRepositoryMembersRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddRepositoryMembersRequest::~AddRepositoryMembersRequest() = default;

void AddRepositoryMembersRequest::validate()
{
}

web::json::value AddRepositoryMembersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddRepositoryMembersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchCreateRepositoryMemberBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t AddRepositoryMembersRequest::getRepositoryId() const
{
    return repositoryId_;
}

void AddRepositoryMembersRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool AddRepositoryMembersRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void AddRepositoryMembersRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

BatchCreateRepositoryMemberBodyDto AddRepositoryMembersRequest::getBody() const
{
    return body_;
}

void AddRepositoryMembersRequest::setBody(const BatchCreateRepositoryMemberBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddRepositoryMembersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddRepositoryMembersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


