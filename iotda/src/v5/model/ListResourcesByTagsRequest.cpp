

#include "huaweicloud/iotda/v5/model/ListResourcesByTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListResourcesByTagsRequest::ListResourcesByTagsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    bodyIsSet_ = false;
}

ListResourcesByTagsRequest::~ListResourcesByTagsRequest() = default;

void ListResourcesByTagsRequest::validate()
{
}

web::json::value ListResourcesByTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListResourcesByTagsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            QueryResourceByTagsDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListResourcesByTagsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListResourcesByTagsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListResourcesByTagsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListResourcesByTagsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListResourcesByTagsRequest::getLimit() const
{
    return limit_;
}

void ListResourcesByTagsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListResourcesByTagsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListResourcesByTagsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListResourcesByTagsRequest::getMarker() const
{
    return marker_;
}

void ListResourcesByTagsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListResourcesByTagsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListResourcesByTagsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListResourcesByTagsRequest::getOffset() const
{
    return offset_;
}

void ListResourcesByTagsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListResourcesByTagsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListResourcesByTagsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

QueryResourceByTagsDTO ListResourcesByTagsRequest::getBody() const
{
    return body_;
}

void ListResourcesByTagsRequest::setBody(const QueryResourceByTagsDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListResourcesByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListResourcesByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


