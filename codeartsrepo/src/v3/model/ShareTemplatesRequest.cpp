

#include "huaweicloud/codeartsrepo/v3/model/ShareTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShareTemplatesRequest::ShareTemplatesRequest()
{
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
    bodyIsSet_ = false;
}

ShareTemplatesRequest::~ShareTemplatesRequest() = default;

void ShareTemplatesRequest::validate()
{
}

web::json::value ShareTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShareTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RepositoryTemplateVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShareTemplatesRequest::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void ShareTemplatesRequest::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool ShareTemplatesRequest::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void ShareTemplatesRequest::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

RepositoryTemplateVO ShareTemplatesRequest::getBody() const
{
    return body_;
}

void ShareTemplatesRequest::setBody(const RepositoryTemplateVO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShareTemplatesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShareTemplatesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


