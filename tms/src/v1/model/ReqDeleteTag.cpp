

#include "huaweicloud/tms/v1/model/ReqDeleteTag.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ReqDeleteTag::ReqDeleteTag()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    resourcesIsSet_ = false;
    tagsIsSet_ = false;
}

ReqDeleteTag::~ReqDeleteTag() = default;

void ReqDeleteTag::validate()
{
}

web::json::value ReqDeleteTag::toJson() const
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

bool ReqDeleteTag::fromJson(const web::json::value& val)
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
            std::vector<DeleteTagRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string ReqDeleteTag::getProjectId() const
{
    return projectId_;
}

void ReqDeleteTag::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ReqDeleteTag::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ReqDeleteTag::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<ResourceTagBody>& ReqDeleteTag::getResources()
{
    return resources_;
}

void ReqDeleteTag::setResources(const std::vector<ResourceTagBody>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ReqDeleteTag::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ReqDeleteTag::unsetresources()
{
    resourcesIsSet_ = false;
}

std::vector<DeleteTagRequest>& ReqDeleteTag::getTags()
{
    return tags_;
}

void ReqDeleteTag::setTags(const std::vector<DeleteTagRequest>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ReqDeleteTag::tagsIsSet() const
{
    return tagsIsSet_;
}

void ReqDeleteTag::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


