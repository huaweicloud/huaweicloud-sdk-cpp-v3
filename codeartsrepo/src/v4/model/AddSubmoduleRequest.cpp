

#include "huaweicloud/codeartsrepo/v4/model/AddSubmoduleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




AddSubmoduleRequest::AddSubmoduleRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddSubmoduleRequest::~AddSubmoduleRequest() = default;

void AddSubmoduleRequest::validate()
{
}

web::json::value AddSubmoduleRequest::toJson() const
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
bool AddSubmoduleRequest::fromJson(const web::json::value& val)
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
            SubmoduleReqDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t AddSubmoduleRequest::getRepositoryId() const
{
    return repositoryId_;
}

void AddSubmoduleRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool AddSubmoduleRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void AddSubmoduleRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

SubmoduleReqDto AddSubmoduleRequest::getBody() const
{
    return body_;
}

void AddSubmoduleRequest::setBody(const SubmoduleReqDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddSubmoduleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddSubmoduleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


