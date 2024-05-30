

#include "huaweicloud/organizations/v1/model/ListTagsForResourceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListTagsForResourceResponse::ListTagsForResourceResponse()
{
    tagsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListTagsForResourceResponse::~ListTagsForResourceResponse() = default;

void ListTagsForResourceResponse::validate()
{
}

web::json::value ListTagsForResourceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListTagsForResourceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<TagDto>& ListTagsForResourceResponse::getTags()
{
    return tags_;
}

void ListTagsForResourceResponse::setTags(const std::vector<TagDto>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListTagsForResourceResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListTagsForResourceResponse::unsettags()
{
    tagsIsSet_ = false;
}

PageInfoDto ListTagsForResourceResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListTagsForResourceResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListTagsForResourceResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListTagsForResourceResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


