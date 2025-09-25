

#include "huaweicloud/gaussdbforopengauss/v3/model/ListWaitEventRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListWaitEventRequestBody::ListWaitEventRequestBody()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    system_ = false;
    systemIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    orderFieldsIsSet_ = false;
    waitEventQueryInfoIsSet_ = false;
}

ListWaitEventRequestBody::~ListWaitEventRequestBody() = default;

void ListWaitEventRequestBody::validate()
{
}

web::json::value ListWaitEventRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(systemIsSet_) {
        val[utility::conversions::to_string_t("system")] = ModelBase::toJson(system_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(orderFieldsIsSet_) {
        val[utility::conversions::to_string_t("order_fields")] = ModelBase::toJson(orderFields_);
    }
    if(waitEventQueryInfoIsSet_) {
        val[utility::conversions::to_string_t("wait_event_query_info")] = ModelBase::toJson(waitEventQueryInfo_);
    }

    return val;
}
bool ListWaitEventRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("system"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystem(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("order_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wait_event_query_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wait_event_query_info"));
        if(!fieldValue.is_null())
        {
            WaitEventQueryInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitEventQueryInfo(refVal);
        }
    }
    return ok;
}


std::string ListWaitEventRequestBody::getNodeId() const
{
    return nodeId_;
}

void ListWaitEventRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListWaitEventRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListWaitEventRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

bool ListWaitEventRequestBody::isSystem() const
{
    return system_;
}

void ListWaitEventRequestBody::setSystem(bool value)
{
    system_ = value;
    systemIsSet_ = true;
}

bool ListWaitEventRequestBody::systemIsSet() const
{
    return systemIsSet_;
}

void ListWaitEventRequestBody::unsetsystem()
{
    systemIsSet_ = false;
}

int32_t ListWaitEventRequestBody::getLimit() const
{
    return limit_;
}

void ListWaitEventRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListWaitEventRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListWaitEventRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListWaitEventRequestBody::getOffset() const
{
    return offset_;
}

void ListWaitEventRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListWaitEventRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListWaitEventRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<std::vector<std::string>>& ListWaitEventRequestBody::getOrderFields()
{
    return orderFields_;
}

void ListWaitEventRequestBody::setOrderFields(const std::vector<std::vector<std::string>>& value)
{
    orderFields_ = value;
    orderFieldsIsSet_ = true;
}

bool ListWaitEventRequestBody::orderFieldsIsSet() const
{
    return orderFieldsIsSet_;
}

void ListWaitEventRequestBody::unsetorderFields()
{
    orderFieldsIsSet_ = false;
}

WaitEventQueryInfo ListWaitEventRequestBody::getWaitEventQueryInfo() const
{
    return waitEventQueryInfo_;
}

void ListWaitEventRequestBody::setWaitEventQueryInfo(const WaitEventQueryInfo& value)
{
    waitEventQueryInfo_ = value;
    waitEventQueryInfoIsSet_ = true;
}

bool ListWaitEventRequestBody::waitEventQueryInfoIsSet() const
{
    return waitEventQueryInfoIsSet_;
}

void ListWaitEventRequestBody::unsetwaitEventQueryInfo()
{
    waitEventQueryInfoIsSet_ = false;
}

}
}
}
}
}


