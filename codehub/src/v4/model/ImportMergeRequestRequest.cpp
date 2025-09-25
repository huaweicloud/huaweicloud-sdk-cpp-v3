

#include "huaweicloud/codehub/v4/model/ImportMergeRequestRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ImportMergeRequestRequest::ImportMergeRequestRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

ImportMergeRequestRequest::~ImportMergeRequestRequest() = default;

void ImportMergeRequestRequest::validate()
{
}

web::json::value ImportMergeRequestRequest::toJson() const
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
bool ImportMergeRequestRequest::fromJson(const web::json::value& val)
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
            ImportMrParamsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t ImportMergeRequestRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ImportMergeRequestRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ImportMergeRequestRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ImportMergeRequestRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

ImportMrParamsDto ImportMergeRequestRequest::getBody() const
{
    return body_;
}

void ImportMergeRequestRequest::setBody(const ImportMrParamsDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ImportMergeRequestRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ImportMergeRequestRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


