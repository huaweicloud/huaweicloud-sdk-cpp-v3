

#include "huaweicloud/aad/v2/model/ListInstanceDomainsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListInstanceDomainsRequest::ListInstanceDomainsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListInstanceDomainsRequest::~ListInstanceDomainsRequest() = default;

void ListInstanceDomainsRequest::validate()
{
}

web::json::value ListInstanceDomainsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListInstanceDomainsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListInstanceDomainsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListInstanceDomainsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListInstanceDomainsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListInstanceDomainsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListInstanceDomainsRequest::getLimit() const
{
    return limit_;
}

void ListInstanceDomainsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstanceDomainsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstanceDomainsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListInstanceDomainsRequest::getOffset() const
{
    return offset_;
}

void ListInstanceDomainsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstanceDomainsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstanceDomainsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


