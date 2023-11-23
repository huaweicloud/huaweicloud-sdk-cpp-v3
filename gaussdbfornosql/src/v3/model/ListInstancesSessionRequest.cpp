

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstancesSessionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstancesSessionRequest::ListInstancesSessionRequest()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    addrPrefix_ = "";
    addrPrefixIsSet_ = false;
}

ListInstancesSessionRequest::~ListInstancesSessionRequest() = default;

void ListInstancesSessionRequest::validate()
{
}

web::json::value ListInstancesSessionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(addrPrefixIsSet_) {
        val[utility::conversions::to_string_t("addr_prefix")] = ModelBase::toJson(addrPrefix_);
    }

    return val;
}
bool ListInstancesSessionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("addr_prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addr_prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddrPrefix(refVal);
        }
    }
    return ok;
}


std::string ListInstancesSessionRequest::getNodeId() const
{
    return nodeId_;
}

void ListInstancesSessionRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListInstancesSessionRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListInstancesSessionRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

int32_t ListInstancesSessionRequest::getOffset() const
{
    return offset_;
}

void ListInstancesSessionRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstancesSessionRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstancesSessionRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInstancesSessionRequest::getLimit() const
{
    return limit_;
}

void ListInstancesSessionRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstancesSessionRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstancesSessionRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInstancesSessionRequest::getAddrPrefix() const
{
    return addrPrefix_;
}

void ListInstancesSessionRequest::setAddrPrefix(const std::string& value)
{
    addrPrefix_ = value;
    addrPrefixIsSet_ = true;
}

bool ListInstancesSessionRequest::addrPrefixIsSet() const
{
    return addrPrefixIsSet_;
}

void ListInstancesSessionRequest::unsetaddrPrefix()
{
    addrPrefixIsSet_ = false;
}

}
}
}
}
}


