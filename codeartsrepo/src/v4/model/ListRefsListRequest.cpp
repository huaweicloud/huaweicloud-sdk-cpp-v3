

#include "huaweicloud/codeartsrepo/v4/model/ListRefsListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRefsListRequest::ListRefsListRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRefsListRequest::~ListRefsListRequest() = default;

void ListRefsListRequest::validate()
{
}

web::json::value ListRefsListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListRefsListRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


int32_t ListRefsListRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRefsListRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRefsListRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRefsListRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListRefsListRequest::getType() const
{
    return type_;
}

void ListRefsListRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListRefsListRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListRefsListRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListRefsListRequest::getSearch() const
{
    return search_;
}

void ListRefsListRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListRefsListRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListRefsListRequest::unsetsearch()
{
    searchIsSet_ = false;
}

int32_t ListRefsListRequest::getOffset() const
{
    return offset_;
}

void ListRefsListRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRefsListRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRefsListRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRefsListRequest::getLimit() const
{
    return limit_;
}

void ListRefsListRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRefsListRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRefsListRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


