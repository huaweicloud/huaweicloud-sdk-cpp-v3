

#include "huaweicloud/codeartsrepo/v4/model/ListTenantEncryptedRepositoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListTenantEncryptedRepositoriesRequest::ListTenantEncryptedRepositoriesRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    orderBy_ = "";
    orderByIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
}

ListTenantEncryptedRepositoriesRequest::~ListTenantEncryptedRepositoriesRequest() = default;

void ListTenantEncryptedRepositoriesRequest::validate()
{
}

web::json::value ListTenantEncryptedRepositoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(orderByIsSet_) {
        val[utility::conversions::to_string_t("order_by")] = ModelBase::toJson(orderBy_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }

    return val;
}
bool ListTenantEncryptedRepositoriesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
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
    return ok;
}


std::string ListTenantEncryptedRepositoriesRequest::getTenantId() const
{
    return tenantId_;
}

void ListTenantEncryptedRepositoriesRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ListTenantEncryptedRepositoriesRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ListTenantEncryptedRepositoriesRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

int32_t ListTenantEncryptedRepositoriesRequest::getOffset() const
{
    return offset_;
}

void ListTenantEncryptedRepositoriesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTenantEncryptedRepositoriesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTenantEncryptedRepositoriesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTenantEncryptedRepositoriesRequest::getLimit() const
{
    return limit_;
}

void ListTenantEncryptedRepositoriesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTenantEncryptedRepositoriesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTenantEncryptedRepositoriesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListTenantEncryptedRepositoriesRequest::getOrderBy() const
{
    return orderBy_;
}

void ListTenantEncryptedRepositoriesRequest::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool ListTenantEncryptedRepositoriesRequest::orderByIsSet() const
{
    return orderByIsSet_;
}

void ListTenantEncryptedRepositoriesRequest::unsetorderBy()
{
    orderByIsSet_ = false;
}

std::string ListTenantEncryptedRepositoriesRequest::getSort() const
{
    return sort_;
}

void ListTenantEncryptedRepositoriesRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListTenantEncryptedRepositoriesRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListTenantEncryptedRepositoriesRequest::unsetsort()
{
    sortIsSet_ = false;
}

}
}
}
}
}


