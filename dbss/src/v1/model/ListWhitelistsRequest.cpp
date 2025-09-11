

#include "huaweicloud/dbss/v1/model/ListWhitelistsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListWhitelistsRequest::ListWhitelistsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListWhitelistsRequest::~ListWhitelistsRequest() = default;

void ListWhitelistsRequest::validate()
{
}

web::json::value ListWhitelistsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListWhitelistsRequest::fromJson(const web::json::value& val)
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


std::string ListWhitelistsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListWhitelistsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListWhitelistsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListWhitelistsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListWhitelistsRequest::getOffset() const
{
    return offset_;
}

void ListWhitelistsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListWhitelistsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListWhitelistsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListWhitelistsRequest::getLimit() const
{
    return limit_;
}

void ListWhitelistsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListWhitelistsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListWhitelistsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


