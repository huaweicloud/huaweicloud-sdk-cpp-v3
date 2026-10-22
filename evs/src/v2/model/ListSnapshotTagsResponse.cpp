

#include "huaweicloud/evs/v2/model/ListSnapshotTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListSnapshotTagsResponse::ListSnapshotTagsResponse()
{
    tagsIsSet_ = false;
}

ListSnapshotTagsResponse::~ListSnapshotTagsResponse() = default;

void ListSnapshotTagsResponse::validate()
{
}

web::json::value ListSnapshotTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListSnapshotTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ListResourceTagsResponseBody_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<ListResourceTagsResponseBody_tags>& ListSnapshotTagsResponse::getTags()
{
    return tags_;
}

void ListSnapshotTagsResponse::setTags(const std::vector<ListResourceTagsResponseBody_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListSnapshotTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListSnapshotTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


