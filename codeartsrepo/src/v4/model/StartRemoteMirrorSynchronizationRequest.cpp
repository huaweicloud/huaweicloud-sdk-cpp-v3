

#include "huaweicloud/codeartsrepo/v4/model/StartRemoteMirrorSynchronizationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




StartRemoteMirrorSynchronizationRequest::StartRemoteMirrorSynchronizationRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartRemoteMirrorSynchronizationRequest::~StartRemoteMirrorSynchronizationRequest() = default;

void StartRemoteMirrorSynchronizationRequest::validate()
{
}

web::json::value StartRemoteMirrorSynchronizationRequest::toJson() const
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
bool StartRemoteMirrorSynchronizationRequest::fromJson(const web::json::value& val)
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
            RemoteMirrorSyncInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t StartRemoteMirrorSynchronizationRequest::getRepositoryId() const
{
    return repositoryId_;
}

void StartRemoteMirrorSynchronizationRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool StartRemoteMirrorSynchronizationRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void StartRemoteMirrorSynchronizationRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

RemoteMirrorSyncInfoDto StartRemoteMirrorSynchronizationRequest::getBody() const
{
    return body_;
}

void StartRemoteMirrorSynchronizationRequest::setBody(const RemoteMirrorSyncInfoDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartRemoteMirrorSynchronizationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartRemoteMirrorSynchronizationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


