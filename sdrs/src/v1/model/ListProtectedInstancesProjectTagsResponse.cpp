

#include "huaweicloud/sdrs/v1/model/ListProtectedInstancesProjectTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListProtectedInstancesProjectTagsResponse::ListProtectedInstancesProjectTagsResponse()
{
    tagsIsSet_ = false;
}

ListProtectedInstancesProjectTagsResponse::~ListProtectedInstancesProjectTagsResponse() = default;

void ListProtectedInstancesProjectTagsResponse::validate()
{
}

web::json::value ListProtectedInstancesProjectTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListProtectedInstancesProjectTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<TagParams>& ListProtectedInstancesProjectTagsResponse::getTags()
{
    return tags_;
}

void ListProtectedInstancesProjectTagsResponse::setTags(const std::vector<TagParams>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListProtectedInstancesProjectTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListProtectedInstancesProjectTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


