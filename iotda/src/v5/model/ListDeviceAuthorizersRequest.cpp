

#include "huaweicloud/iotda/v5/model/ListDeviceAuthorizersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceAuthorizersRequest::ListDeviceAuthorizersRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    authorizerName_ = "";
    authorizerNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListDeviceAuthorizersRequest::~ListDeviceAuthorizersRequest() = default;

void ListDeviceAuthorizersRequest::validate()
{
}

web::json::value ListDeviceAuthorizersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(authorizerNameIsSet_) {
        val[utility::conversions::to_string_t("authorizer_name")] = ModelBase::toJson(authorizerName_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListDeviceAuthorizersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authorizer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorizer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorizerName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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


std::string ListDeviceAuthorizersRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDeviceAuthorizersRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDeviceAuthorizersRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDeviceAuthorizersRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDeviceAuthorizersRequest::getAuthorizerName() const
{
    return authorizerName_;
}

void ListDeviceAuthorizersRequest::setAuthorizerName(const std::string& value)
{
    authorizerName_ = value;
    authorizerNameIsSet_ = true;
}

bool ListDeviceAuthorizersRequest::authorizerNameIsSet() const
{
    return authorizerNameIsSet_;
}

void ListDeviceAuthorizersRequest::unsetauthorizerName()
{
    authorizerNameIsSet_ = false;
}

int32_t ListDeviceAuthorizersRequest::getLimit() const
{
    return limit_;
}

void ListDeviceAuthorizersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDeviceAuthorizersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDeviceAuthorizersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDeviceAuthorizersRequest::getMarker() const
{
    return marker_;
}

void ListDeviceAuthorizersRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListDeviceAuthorizersRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListDeviceAuthorizersRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListDeviceAuthorizersRequest::getOffset() const
{
    return offset_;
}

void ListDeviceAuthorizersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDeviceAuthorizersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDeviceAuthorizersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


