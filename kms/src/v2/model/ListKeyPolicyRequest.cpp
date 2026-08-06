

#include "huaweicloud/kms/v2/model/ListKeyPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListKeyPolicyRequest::ListKeyPolicyRequest()
{
    keyspaceId_ = "";
    keyspaceIdIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListKeyPolicyRequest::~ListKeyPolicyRequest() = default;

void ListKeyPolicyRequest::validate()
{
}

web::json::value ListKeyPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyspaceIdIsSet_) {
        val[utility::conversions::to_string_t("keyspace_id")] = ModelBase::toJson(keyspaceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListKeyPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keyspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    return ok;
}


std::string ListKeyPolicyRequest::getKeyspaceId() const
{
    return keyspaceId_;
}

void ListKeyPolicyRequest::setKeyspaceId(const std::string& value)
{
    keyspaceId_ = value;
    keyspaceIdIsSet_ = true;
}

bool ListKeyPolicyRequest::keyspaceIdIsSet() const
{
    return keyspaceIdIsSet_;
}

void ListKeyPolicyRequest::unsetkeyspaceId()
{
    keyspaceIdIsSet_ = false;
}

std::string ListKeyPolicyRequest::getLimit() const
{
    return limit_;
}

void ListKeyPolicyRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListKeyPolicyRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListKeyPolicyRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListKeyPolicyRequest::getMarker() const
{
    return marker_;
}

void ListKeyPolicyRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListKeyPolicyRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListKeyPolicyRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


