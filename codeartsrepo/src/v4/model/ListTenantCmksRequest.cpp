

#include "huaweicloud/codeartsrepo/v4/model/ListTenantCmksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListTenantCmksRequest::ListTenantCmksRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListTenantCmksRequest::~ListTenantCmksRequest() = default;

void ListTenantCmksRequest::validate()
{
}

web::json::value ListTenantCmksRequest::toJson() const
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

    return val;
}
bool ListTenantCmksRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListTenantCmksRequest::getTenantId() const
{
    return tenantId_;
}

void ListTenantCmksRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ListTenantCmksRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ListTenantCmksRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

int32_t ListTenantCmksRequest::getOffset() const
{
    return offset_;
}

void ListTenantCmksRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTenantCmksRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTenantCmksRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTenantCmksRequest::getLimit() const
{
    return limit_;
}

void ListTenantCmksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTenantCmksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTenantCmksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


