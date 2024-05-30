

#include "huaweicloud/organizations/v1/model/ListTagResourcesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListTagResourcesResponse::ListTagResourcesResponse()
{
    tagsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListTagResourcesResponse::~ListTagResourcesResponse() = default;

void ListTagResourcesResponse::validate()
{
}

web::json::value ListTagResourcesResponse::toJson() const
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
bool ListTagResourcesResponse::fromJson(const web::json::value& val)
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


std::vector<TagDto>& ListTagResourcesResponse::getTags()
{
    return tags_;
}

void ListTagResourcesResponse::setTags(const std::vector<TagDto>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListTagResourcesResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListTagResourcesResponse::unsettags()
{
    tagsIsSet_ = false;
}

PageInfoDto ListTagResourcesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListTagResourcesResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListTagResourcesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListTagResourcesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


