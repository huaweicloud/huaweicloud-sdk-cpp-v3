

#include "huaweicloud/codehub/v3/model/ListTemplatesTwoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListTemplatesTwoRequest::ListTemplatesTwoRequest()
{
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
    bodyIsSet_ = false;
}

ListTemplatesTwoRequest::~ListTemplatesTwoRequest() = default;

void ListTemplatesTwoRequest::validate()
{
}

web::json::value ListTemplatesTwoRequest::toJson() const
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
bool ListTemplatesTwoRequest::fromJson(const web::json::value& val)
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
            RepositoryTemplateVO2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListTemplatesTwoRequest::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void ListTemplatesTwoRequest::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool ListTemplatesTwoRequest::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void ListTemplatesTwoRequest::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

RepositoryTemplateVO2 ListTemplatesTwoRequest::getBody() const
{
    return body_;
}

void ListTemplatesTwoRequest::setBody(const RepositoryTemplateVO2& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTemplatesTwoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTemplatesTwoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


