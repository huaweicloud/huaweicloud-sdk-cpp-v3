

#include "huaweicloud/codehub/v4/model/CreateFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateFileRequest::CreateFileRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateFileRequest::~CreateFileRequest() = default;

void CreateFileRequest::validate()
{
}

web::json::value CreateFileRequest::toJson() const
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
bool CreateFileRequest::fromJson(const web::json::value& val)
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
            FileBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CreateFileRequest::getRepositoryId() const
{
    return repositoryId_;
}

void CreateFileRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateFileRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateFileRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

FileBodyDto CreateFileRequest::getBody() const
{
    return body_;
}

void CreateFileRequest::setBody(const FileBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


