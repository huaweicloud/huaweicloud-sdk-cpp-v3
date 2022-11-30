

#include "huaweicloud/vod/v1/model/ListTemplateGroupCollectionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListTemplateGroupCollectionRequest::ListTemplateGroupCollectionRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    groupCollectionId_ = "";
    groupCollectionIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListTemplateGroupCollectionRequest::~ListTemplateGroupCollectionRequest() = default;

void ListTemplateGroupCollectionRequest::validate()
{
}

web::json::value ListTemplateGroupCollectionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(groupCollectionIdIsSet_) {
        val[utility::conversions::to_string_t("group_collection_id")] = ModelBase::toJson(groupCollectionId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ListTemplateGroupCollectionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_collection_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_collection_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupCollectionId(refVal);
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


std::string ListTemplateGroupCollectionRequest::getAuthorization() const
{
    return authorization_;
}

void ListTemplateGroupCollectionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListTemplateGroupCollectionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListTemplateGroupCollectionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListTemplateGroupCollectionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListTemplateGroupCollectionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListTemplateGroupCollectionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListTemplateGroupCollectionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListTemplateGroupCollectionRequest::getGroupCollectionId() const
{
    return groupCollectionId_;
}

void ListTemplateGroupCollectionRequest::setGroupCollectionId(const std::string& value)
{
    groupCollectionId_ = value;
    groupCollectionIdIsSet_ = true;
}

bool ListTemplateGroupCollectionRequest::groupCollectionIdIsSet() const
{
    return groupCollectionIdIsSet_;
}

void ListTemplateGroupCollectionRequest::unsetgroupCollectionId()
{
    groupCollectionIdIsSet_ = false;
}

int32_t ListTemplateGroupCollectionRequest::getOffset() const
{
    return offset_;
}

void ListTemplateGroupCollectionRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTemplateGroupCollectionRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTemplateGroupCollectionRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTemplateGroupCollectionRequest::getLimit() const
{
    return limit_;
}

void ListTemplateGroupCollectionRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTemplateGroupCollectionRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTemplateGroupCollectionRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


