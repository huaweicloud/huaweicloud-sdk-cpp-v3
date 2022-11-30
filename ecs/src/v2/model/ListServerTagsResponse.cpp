

#include "huaweicloud/ecs/v2/model/ListServerTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServerTagsResponse::ListServerTagsResponse()
{
    tagsIsSet_ = false;
}

ListServerTagsResponse::~ListServerTagsResponse() = default;

void ListServerTagsResponse::validate()
{
}

web::json::value ListServerTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool ListServerTagsResponse::fromJson(const web::json::value& val)
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


std::vector<ProjectTag>& ListServerTagsResponse::getTags()
{
    return tags_;
}

void ListServerTagsResponse::setTags(const std::vector<ProjectTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListServerTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListServerTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


