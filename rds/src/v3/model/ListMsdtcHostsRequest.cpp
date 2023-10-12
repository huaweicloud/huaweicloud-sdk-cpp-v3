

#include "huaweicloud/rds/v3/model/ListMsdtcHostsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListMsdtcHostsRequest::ListMsdtcHostsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListMsdtcHostsRequest::~ListMsdtcHostsRequest() = default;

void ListMsdtcHostsRequest::validate()
{
}

web::json::value ListMsdtcHostsRequest::toJson() const
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
bool ListMsdtcHostsRequest::fromJson(const web::json::value& val)
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


std::string ListMsdtcHostsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListMsdtcHostsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListMsdtcHostsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListMsdtcHostsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListMsdtcHostsRequest::getOffset() const
{
    return offset_;
}

void ListMsdtcHostsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMsdtcHostsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMsdtcHostsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMsdtcHostsRequest::getLimit() const
{
    return limit_;
}

void ListMsdtcHostsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMsdtcHostsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMsdtcHostsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


