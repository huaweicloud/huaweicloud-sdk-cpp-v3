

#include "huaweicloud/drs/v5/model/ListInstanceByTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListInstanceByTagsRequest::ListInstanceByTagsRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    bodyIsSet_ = false;
}

ListInstanceByTagsRequest::~ListInstanceByTagsRequest() = default;

void ListInstanceByTagsRequest::validate()
{
}

web::json::value ListInstanceByTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListInstanceByTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            QueryInstanceByTagReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListInstanceByTagsRequest::getResourceType() const
{
    return resourceType_;
}

void ListInstanceByTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListInstanceByTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListInstanceByTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ListInstanceByTagsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListInstanceByTagsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListInstanceByTagsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListInstanceByTagsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ListInstanceByTagsRequest::getLimit() const
{
    return limit_;
}

void ListInstanceByTagsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstanceByTagsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstanceByTagsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListInstanceByTagsRequest::getOffset() const
{
    return offset_;
}

void ListInstanceByTagsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstanceByTagsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstanceByTagsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

QueryInstanceByTagReq ListInstanceByTagsRequest::getBody() const
{
    return body_;
}

void ListInstanceByTagsRequest::setBody(const QueryInstanceByTagReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListInstanceByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListInstanceByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


