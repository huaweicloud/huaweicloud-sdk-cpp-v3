

#include "huaweicloud/tms/v1/model/ResqTagResource.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ResqTagResource::ResqTagResource()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    resourceTypesIsSet_ = false;
    tagsIsSet_ = false;
    withoutAnyTag_ = false;
    withoutAnyTagIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ResqTagResource::~ResqTagResource() = default;

void ResqTagResource::validate()
{
}

web::json::value ResqTagResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(resourceTypesIsSet_) {
        val[utility::conversions::to_string_t("resource_types")] = ModelBase::toJson(resourceTypes_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(withoutAnyTagIsSet_) {
        val[utility::conversions::to_string_t("without_any_tag")] = ModelBase::toJson(withoutAnyTag_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ResqTagResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("without_any_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("without_any_tag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWithoutAnyTag(refVal);
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

std::string ResqTagResource::getProjectId() const
{
    return projectId_;
}

void ResqTagResource::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ResqTagResource::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ResqTagResource::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& ResqTagResource::getResourceTypes()
{
    return resourceTypes_;
}

void ResqTagResource::setResourceTypes(const std::vector<std::string>& value)
{
    resourceTypes_ = value;
    resourceTypesIsSet_ = true;
}

bool ResqTagResource::resourceTypesIsSet() const
{
    return resourceTypesIsSet_;
}

void ResqTagResource::unsetresourceTypes()
{
    resourceTypesIsSet_ = false;
}

std::vector<Tag>& ResqTagResource::getTags()
{
    return tags_;
}

void ResqTagResource::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ResqTagResource::tagsIsSet() const
{
    return tagsIsSet_;
}

void ResqTagResource::unsettags()
{
    tagsIsSet_ = false;
}

bool ResqTagResource::isWithoutAnyTag() const
{
    return withoutAnyTag_;
}

void ResqTagResource::setWithoutAnyTag(bool value)
{
    withoutAnyTag_ = value;
    withoutAnyTagIsSet_ = true;
}

bool ResqTagResource::withoutAnyTagIsSet() const
{
    return withoutAnyTagIsSet_;
}

void ResqTagResource::unsetwithoutAnyTag()
{
    withoutAnyTagIsSet_ = false;
}

int32_t ResqTagResource::getOffset() const
{
    return offset_;
}

void ResqTagResource::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ResqTagResource::offsetIsSet() const
{
    return offsetIsSet_;
}

void ResqTagResource::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ResqTagResource::getLimit() const
{
    return limit_;
}

void ResqTagResource::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ResqTagResource::limitIsSet() const
{
    return limitIsSet_;
}

void ResqTagResource::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


