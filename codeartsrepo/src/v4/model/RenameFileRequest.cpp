

#include "huaweicloud/codeartsrepo/v4/model/RenameFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RenameFileRequest::RenameFileRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

RenameFileRequest::~RenameFileRequest() = default;

void RenameFileRequest::validate()
{
}

web::json::value RenameFileRequest::toJson() const
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
bool RenameFileRequest::fromJson(const web::json::value& val)
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
            RenameFileBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t RenameFileRequest::getRepositoryId() const
{
    return repositoryId_;
}

void RenameFileRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool RenameFileRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void RenameFileRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

RenameFileBodyDto RenameFileRequest::getBody() const
{
    return body_;
}

void RenameFileRequest::setBody(const RenameFileBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RenameFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RenameFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


