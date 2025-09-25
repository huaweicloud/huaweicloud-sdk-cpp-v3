

#include "huaweicloud/codehub/v4/model/ListRepositoryForksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryForksRequest::ListRepositoryForksRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    orderBy_ = "";
    orderByIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    view_ = "";
    viewIsSet_ = false;
}

ListRepositoryForksRequest::~ListRepositoryForksRequest() = default;

void ListRepositoryForksRequest::validate()
{
}

web::json::value ListRepositoryForksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(orderByIsSet_) {
        val[utility::conversions::to_string_t("order_by")] = ModelBase::toJson(orderBy_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(viewIsSet_) {
        val[utility::conversions::to_string_t("view")] = ModelBase::toJson(view_);
    }

    return val;
}
bool ListRepositoryForksRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("order_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setView(refVal);
        }
    }
    return ok;
}


int32_t ListRepositoryForksRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryForksRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryForksRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryForksRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListRepositoryForksRequest::getOrderBy() const
{
    return orderBy_;
}

void ListRepositoryForksRequest::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool ListRepositoryForksRequest::orderByIsSet() const
{
    return orderByIsSet_;
}

void ListRepositoryForksRequest::unsetorderBy()
{
    orderByIsSet_ = false;
}

std::string ListRepositoryForksRequest::getSort() const
{
    return sort_;
}

void ListRepositoryForksRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListRepositoryForksRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListRepositoryForksRequest::unsetsort()
{
    sortIsSet_ = false;
}

std::string ListRepositoryForksRequest::getView() const
{
    return view_;
}

void ListRepositoryForksRequest::setView(const std::string& value)
{
    view_ = value;
    viewIsSet_ = true;
}

bool ListRepositoryForksRequest::viewIsSet() const
{
    return viewIsSet_;
}

void ListRepositoryForksRequest::unsetview()
{
    viewIsSet_ = false;
}

}
}
}
}
}


