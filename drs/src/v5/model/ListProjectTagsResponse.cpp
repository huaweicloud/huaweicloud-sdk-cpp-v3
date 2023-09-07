

#include "huaweicloud/drs/v5/model/ListProjectTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListProjectTagsResponse::ListProjectTagsResponse()
{
    tagsIsSet_ = false;
}

ListProjectTagsResponse::~ListProjectTagsResponse() = default;

void ListProjectTagsResponse::validate()
{
}

web::json::value ListProjectTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool ListProjectTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::vector<ProjectTag>& ListProjectTagsResponse::getTags()
{
    return tags_;
}

void ListProjectTagsResponse::setTags(const std::vector<ProjectTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListProjectTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListProjectTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


