

#include "huaweicloud/ram/v1/model/ListResourceSharesByTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ListResourceSharesByTagsRequest::ListResourceSharesByTagsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

ListResourceSharesByTagsRequest::~ListResourceSharesByTagsRequest() = default;

void ListResourceSharesByTagsRequest::validate()
{
}

web::json::value ListResourceSharesByTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListResourceSharesByTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ResourceSharesByTagsReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t ListResourceSharesByTagsRequest::getLimit() const
{
    return limit_;
}

void ListResourceSharesByTagsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListResourceSharesByTagsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListResourceSharesByTagsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListResourceSharesByTagsRequest::getOffset() const
{
    return offset_;
}

void ListResourceSharesByTagsRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListResourceSharesByTagsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListResourceSharesByTagsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListResourceSharesByTagsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListResourceSharesByTagsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListResourceSharesByTagsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListResourceSharesByTagsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

ResourceSharesByTagsReqBody ListResourceSharesByTagsRequest::getBody() const
{
    return body_;
}

void ListResourceSharesByTagsRequest::setBody(const ResourceSharesByTagsReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListResourceSharesByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListResourceSharesByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


