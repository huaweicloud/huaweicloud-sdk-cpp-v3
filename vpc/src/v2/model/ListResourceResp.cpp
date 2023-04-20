

#include "huaweicloud/vpc/v2/model/ListResourceResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListResourceResp::ListResourceResp()
{
    resourceDetailIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    tagsIsSet_ = false;
}

ListResourceResp::~ListResourceResp() = default;

void ListResourceResp::validate()
{
}

web::json::value ListResourceResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceDetailIsSet_) {
        val[utility::conversions::to_string_t("resource_detail")] = ModelBase::toJson(resourceDetail_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool ListResourceResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_detail"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


Object ListResourceResp::getResourceDetail() const
{
    return resourceDetail_;
}

void ListResourceResp::setResourceDetail(const Object& value)
{
    resourceDetail_ = value;
    resourceDetailIsSet_ = true;
}

bool ListResourceResp::resourceDetailIsSet() const
{
    return resourceDetailIsSet_;
}

void ListResourceResp::unsetresourceDetail()
{
    resourceDetailIsSet_ = false;
}

std::string ListResourceResp::getResourceId() const
{
    return resourceId_;
}

void ListResourceResp::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ListResourceResp::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ListResourceResp::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ListResourceResp::getResourceName() const
{
    return resourceName_;
}

void ListResourceResp::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ListResourceResp::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ListResourceResp::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::vector<ResourceTag>& ListResourceResp::getTags()
{
    return tags_;
}

void ListResourceResp::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListResourceResp::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListResourceResp::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


