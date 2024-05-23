

#include "huaweicloud/ram/v1/model/ListResourceShareTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ListResourceShareTagsResponse::ListResourceShareTagsResponse()
{
    tagsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListResourceShareTagsResponse::~ListResourceShareTagsResponse() = default;

void ListResourceShareTagsResponse::validate()
{
}

web::json::value ListResourceShareTagsResponse::toJson() const
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
bool ListResourceShareTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoMarkerByKey refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<TagDTO>& ListResourceShareTagsResponse::getTags()
{
    return tags_;
}

void ListResourceShareTagsResponse::setTags(const std::vector<TagDTO>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListResourceShareTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListResourceShareTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

PageInfoMarkerByKey ListResourceShareTagsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListResourceShareTagsResponse::setPageInfo(const PageInfoMarkerByKey& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListResourceShareTagsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListResourceShareTagsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


