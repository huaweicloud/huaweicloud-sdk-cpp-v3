

#include "huaweicloud/tms/v1/model/ReqCreateTag.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ReqCreateTag::ReqCreateTag()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    resourcesIsSet_ = false;
    tagsIsSet_ = false;
}

ReqCreateTag::~ReqCreateTag() = default;

void ReqCreateTag::validate()
{
}

web::json::value ReqCreateTag::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool ReqCreateTag::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTagBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateTagRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::string ReqCreateTag::getProjectId() const
{
    return projectId_;
}

void ReqCreateTag::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ReqCreateTag::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ReqCreateTag::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<ResourceTagBody>& ReqCreateTag::getResources()
{
    return resources_;
}

void ReqCreateTag::setResources(const std::vector<ResourceTagBody>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ReqCreateTag::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ReqCreateTag::unsetresources()
{
    resourcesIsSet_ = false;
}

std::vector<CreateTagRequest>& ReqCreateTag::getTags()
{
    return tags_;
}

void ReqCreateTag::setTags(const std::vector<CreateTagRequest>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ReqCreateTag::tagsIsSet() const
{
    return tagsIsSet_;
}

void ReqCreateTag::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


