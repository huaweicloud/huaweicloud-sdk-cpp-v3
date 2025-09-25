

#include "huaweicloud/codehub/v4/model/AssociateRemoteMirrorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




AssociateRemoteMirrorRequest::AssociateRemoteMirrorRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

AssociateRemoteMirrorRequest::~AssociateRemoteMirrorRequest() = default;

void AssociateRemoteMirrorRequest::validate()
{
}

web::json::value AssociateRemoteMirrorRequest::toJson() const
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
bool AssociateRemoteMirrorRequest::fromJson(const web::json::value& val)
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
            RemoteMirrorDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t AssociateRemoteMirrorRequest::getRepositoryId() const
{
    return repositoryId_;
}

void AssociateRemoteMirrorRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool AssociateRemoteMirrorRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void AssociateRemoteMirrorRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

RemoteMirrorDto AssociateRemoteMirrorRequest::getBody() const
{
    return body_;
}

void AssociateRemoteMirrorRequest::setBody(const RemoteMirrorDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateRemoteMirrorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateRemoteMirrorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


