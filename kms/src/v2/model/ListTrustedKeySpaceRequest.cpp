

#include "huaweicloud/kms/v2/model/ListTrustedKeySpaceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListTrustedKeySpaceRequest::ListTrustedKeySpaceRequest()
{
    limit_ = "";
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    keyspaceId_ = "";
    keyspaceIdIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
}

ListTrustedKeySpaceRequest::~ListTrustedKeySpaceRequest() = default;

void ListTrustedKeySpaceRequest::validate()
{
}

web::json::value ListTrustedKeySpaceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(keyspaceIdIsSet_) {
        val[utility::conversions::to_string_t("keyspace_id")] = ModelBase::toJson(keyspaceId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListTrustedKeySpaceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("keyspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ListTrustedKeySpaceRequest::getLimit() const
{
    return limit_;
}

void ListTrustedKeySpaceRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTrustedKeySpaceRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTrustedKeySpaceRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListTrustedKeySpaceRequest::getMarker() const
{
    return marker_;
}

void ListTrustedKeySpaceRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListTrustedKeySpaceRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListTrustedKeySpaceRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListTrustedKeySpaceRequest::getKeyspaceId() const
{
    return keyspaceId_;
}

void ListTrustedKeySpaceRequest::setKeyspaceId(const std::string& value)
{
    keyspaceId_ = value;
    keyspaceIdIsSet_ = true;
}

bool ListTrustedKeySpaceRequest::keyspaceIdIsSet() const
{
    return keyspaceIdIsSet_;
}

void ListTrustedKeySpaceRequest::unsetkeyspaceId()
{
    keyspaceIdIsSet_ = false;
}

int32_t ListTrustedKeySpaceRequest::getType() const
{
    return type_;
}

void ListTrustedKeySpaceRequest::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListTrustedKeySpaceRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListTrustedKeySpaceRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


