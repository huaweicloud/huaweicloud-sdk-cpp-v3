

#include "huaweicloud/dbss/v1/model/ListProjectResourceTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListProjectResourceTagsResponse::ListProjectResourceTagsResponse()
{
    tagsIsSet_ = false;
}

ListProjectResourceTagsResponse::~ListProjectResourceTagsResponse() = default;

void ListProjectResourceTagsResponse::validate()
{
}

web::json::value ListProjectResourceTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListProjectResourceTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectResourceTagResponse_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<ProjectResourceTagResponse_tags>& ListProjectResourceTagsResponse::getTags()
{
    return tags_;
}

void ListProjectResourceTagsResponse::setTags(const std::vector<ProjectResourceTagResponse_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListProjectResourceTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListProjectResourceTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


