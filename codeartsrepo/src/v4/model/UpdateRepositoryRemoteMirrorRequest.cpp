

#include "huaweicloud/codeartsrepo/v4/model/UpdateRepositoryRemoteMirrorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateRepositoryRemoteMirrorRequest::UpdateRepositoryRemoteMirrorRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRepositoryRemoteMirrorRequest::~UpdateRepositoryRemoteMirrorRequest() = default;

void UpdateRepositoryRemoteMirrorRequest::validate()
{
}

web::json::value UpdateRepositoryRemoteMirrorRequest::toJson() const
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
bool UpdateRepositoryRemoteMirrorRequest::fromJson(const web::json::value& val)
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
            RemoteMirrorUpdateBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateRepositoryRemoteMirrorRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateRepositoryRemoteMirrorRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateRepositoryRemoteMirrorRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateRepositoryRemoteMirrorRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

RemoteMirrorUpdateBody UpdateRepositoryRemoteMirrorRequest::getBody() const
{
    return body_;
}

void UpdateRepositoryRemoteMirrorRequest::setBody(const RemoteMirrorUpdateBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRepositoryRemoteMirrorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRepositoryRemoteMirrorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


