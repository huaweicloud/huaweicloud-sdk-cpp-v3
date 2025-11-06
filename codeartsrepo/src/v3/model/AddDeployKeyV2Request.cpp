

#include "huaweicloud/codeartsrepo/v3/model/AddDeployKeyV2Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




AddDeployKeyV2Request::AddDeployKeyV2Request()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddDeployKeyV2Request::~AddDeployKeyV2Request() = default;

void AddDeployKeyV2Request::validate()
{
}

web::json::value AddDeployKeyV2Request::toJson() const
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
bool AddDeployKeyV2Request::fromJson(const web::json::value& val)
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
            AddDeployKeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t AddDeployKeyV2Request::getRepositoryId() const
{
    return repositoryId_;
}

void AddDeployKeyV2Request::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool AddDeployKeyV2Request::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void AddDeployKeyV2Request::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

AddDeployKeyRequestBody AddDeployKeyV2Request::getBody() const
{
    return body_;
}

void AddDeployKeyV2Request::setBody(const AddDeployKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddDeployKeyV2Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddDeployKeyV2Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


