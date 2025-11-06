

#include "huaweicloud/codeartsrepo/v4/model/ListTenantRepositoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListTenantRepositoriesRequest::ListTenantRepositoriesRequest()
{
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
    memberNumber_ = 0;
    memberNumberIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    createdAfter_ = utility::datetime();
    createdAfterIsSet_ = false;
    createdBefore_ = utility::datetime();
    createdBeforeIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListTenantRepositoriesRequest::~ListTenantRepositoriesRequest() = default;

void ListTenantRepositoriesRequest::validate()
{
}

web::json::value ListTenantRepositoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repository_name")] = ModelBase::toJson(repositoryName_);
    }
    if(memberNumberIsSet_) {
        val[utility::conversions::to_string_t("member_number")] = ModelBase::toJson(memberNumber_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(createdAfterIsSet_) {
        val[utility::conversions::to_string_t("created_after")] = ModelBase::toJson(createdAfter_);
    }
    if(createdBeforeIsSet_) {
        val[utility::conversions::to_string_t("created_before")] = ModelBase::toJson(createdBefore_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListTenantRepositoriesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("member_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_after"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_after"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAfter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_before"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_before"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBefore(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortField(refVal);
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


std::string ListTenantRepositoriesRequest::getRepositoryName() const
{
    return repositoryName_;
}

void ListTenantRepositoriesRequest::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool ListTenantRepositoriesRequest::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void ListTenantRepositoriesRequest::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

int32_t ListTenantRepositoriesRequest::getMemberNumber() const
{
    return memberNumber_;
}

void ListTenantRepositoriesRequest::setMemberNumber(int32_t value)
{
    memberNumber_ = value;
    memberNumberIsSet_ = true;
}

bool ListTenantRepositoriesRequest::memberNumberIsSet() const
{
    return memberNumberIsSet_;
}

void ListTenantRepositoriesRequest::unsetmemberNumber()
{
    memberNumberIsSet_ = false;
}

int32_t ListTenantRepositoriesRequest::getStatus() const
{
    return status_;
}

void ListTenantRepositoriesRequest::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTenantRepositoriesRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListTenantRepositoriesRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListTenantRepositoriesRequest::getOwner() const
{
    return owner_;
}

void ListTenantRepositoriesRequest::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ListTenantRepositoriesRequest::ownerIsSet() const
{
    return ownerIsSet_;
}

void ListTenantRepositoriesRequest::unsetowner()
{
    ownerIsSet_ = false;
}

utility::datetime ListTenantRepositoriesRequest::getCreatedAfter() const
{
    return createdAfter_;
}

void ListTenantRepositoriesRequest::setCreatedAfter(const utility::datetime& value)
{
    createdAfter_ = value;
    createdAfterIsSet_ = true;
}

bool ListTenantRepositoriesRequest::createdAfterIsSet() const
{
    return createdAfterIsSet_;
}

void ListTenantRepositoriesRequest::unsetcreatedAfter()
{
    createdAfterIsSet_ = false;
}

utility::datetime ListTenantRepositoriesRequest::getCreatedBefore() const
{
    return createdBefore_;
}

void ListTenantRepositoriesRequest::setCreatedBefore(const utility::datetime& value)
{
    createdBefore_ = value;
    createdBeforeIsSet_ = true;
}

bool ListTenantRepositoriesRequest::createdBeforeIsSet() const
{
    return createdBeforeIsSet_;
}

void ListTenantRepositoriesRequest::unsetcreatedBefore()
{
    createdBeforeIsSet_ = false;
}

std::string ListTenantRepositoriesRequest::getSort() const
{
    return sort_;
}

void ListTenantRepositoriesRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListTenantRepositoriesRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListTenantRepositoriesRequest::unsetsort()
{
    sortIsSet_ = false;
}

std::string ListTenantRepositoriesRequest::getSortField() const
{
    return sortField_;
}

void ListTenantRepositoriesRequest::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool ListTenantRepositoriesRequest::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void ListTenantRepositoriesRequest::unsetsortField()
{
    sortFieldIsSet_ = false;
}

int32_t ListTenantRepositoriesRequest::getOffset() const
{
    return offset_;
}

void ListTenantRepositoriesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTenantRepositoriesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTenantRepositoriesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTenantRepositoriesRequest::getLimit() const
{
    return limit_;
}

void ListTenantRepositoriesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTenantRepositoriesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTenantRepositoriesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


