

#include "huaweicloud/evs/v2/model/ListSnapshotGroupTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListSnapshotGroupTagsResponse::ListSnapshotGroupTagsResponse()
{
    tagsIsSet_ = false;
}

ListSnapshotGroupTagsResponse::~ListSnapshotGroupTagsResponse() = default;

void ListSnapshotGroupTagsResponse::validate()
{
}

web::json::value ListSnapshotGroupTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListSnapshotGroupTagsResponse::fromJson(const web::json::value& val)
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


std::vector<ListResourceTagsResponseBody_tags>& ListSnapshotGroupTagsResponse::getTags()
{
    return tags_;
}

void ListSnapshotGroupTagsResponse::setTags(const std::vector<ListResourceTagsResponseBody_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListSnapshotGroupTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListSnapshotGroupTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


