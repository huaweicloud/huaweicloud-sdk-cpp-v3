

#include "huaweicloud/codeartsartifact/v2/model/ListChildProxyRepositoriesListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListChildProxyRepositoriesListRequest::ListChildProxyRepositoriesListRequest()
{
    repoId_ = "";
    repoIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ListChildProxyRepositoriesListRequest::~ListChildProxyRepositoriesListRequest() = default;

void ListChildProxyRepositoriesListRequest::validate()
{
}

web::json::value ListChildProxyRepositoriesListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListChildProxyRepositoriesListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ListChildProxyRepositoriesListRequest::getRepoId() const
{
    return repoId_;
}

void ListChildProxyRepositoriesListRequest::setRepoId(const std::string& value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool ListChildProxyRepositoriesListRequest::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void ListChildProxyRepositoriesListRequest::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string ListChildProxyRepositoriesListRequest::getType() const
{
    return type_;
}

void ListChildProxyRepositoriesListRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListChildProxyRepositoriesListRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListChildProxyRepositoriesListRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


