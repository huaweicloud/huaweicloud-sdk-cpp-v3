

#include "huaweicloud/functiongraph/v2/model/ShowProjectTagsListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowProjectTagsListResponse::ShowProjectTagsListResponse()
{
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
}

ShowProjectTagsListResponse::~ShowProjectTagsListResponse() = default;

void ShowProjectTagsListResponse::validate()
{
}

web::json::value ShowProjectTagsListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }

    return val;
}
bool ShowProjectTagsListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    return ok;
}


std::vector<TagItem>& ShowProjectTagsListResponse::getTags()
{
    return tags_;
}

void ShowProjectTagsListResponse::setTags(const std::vector<TagItem>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowProjectTagsListResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowProjectTagsListResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<TagItem>& ShowProjectTagsListResponse::getSysTags()
{
    return sysTags_;
}

void ShowProjectTagsListResponse::setSysTags(const std::vector<TagItem>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ShowProjectTagsListResponse::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ShowProjectTagsListResponse::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

}
}
}
}
}


