

#include "huaweicloud/smn/v2/model/ListSubscriptionsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListSubscriptionsRequest::ListSubscriptionsRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    endpoint_ = "";
    endpointIsSet_ = false;
}

ListSubscriptionsRequest::~ListSubscriptionsRequest() = default;

void ListSubscriptionsRequest::validate()
{
}

web::json::value ListSubscriptionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }

    return val;
}

bool ListSubscriptionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoint(refVal);
        }
    }
    return ok;
}

int32_t ListSubscriptionsRequest::getOffset() const
{
    return offset_;
}

void ListSubscriptionsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSubscriptionsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSubscriptionsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSubscriptionsRequest::getLimit() const
{
    return limit_;
}

void ListSubscriptionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSubscriptionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSubscriptionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSubscriptionsRequest::getProtocol() const
{
    return protocol_;
}

void ListSubscriptionsRequest::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListSubscriptionsRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListSubscriptionsRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t ListSubscriptionsRequest::getStatus() const
{
    return status_;
}

void ListSubscriptionsRequest::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListSubscriptionsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListSubscriptionsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListSubscriptionsRequest::getEndpoint() const
{
    return endpoint_;
}

void ListSubscriptionsRequest::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool ListSubscriptionsRequest::endpointIsSet() const
{
    return endpointIsSet_;
}

void ListSubscriptionsRequest::unsetendpoint()
{
    endpointIsSet_ = false;
}

}
}
}
}
}


