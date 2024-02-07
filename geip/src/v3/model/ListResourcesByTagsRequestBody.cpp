

#include "huaweicloud/geip/v3/model/ListResourcesByTagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListResourcesByTagsRequestBody::ListResourcesByTagsRequestBody()
{
    tagsIsSet_ = false;
}

ListResourcesByTagsRequestBody::~ListResourcesByTagsRequestBody() = default;

void ListResourcesByTagsRequestBody::validate()
{
}

web::json::value ListResourcesByTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListResourcesByTagsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<CreateTag>& ListResourcesByTagsRequestBody::getTags()
{
    return tags_;
}

void ListResourcesByTagsRequestBody::setTags(const std::vector<CreateTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListResourcesByTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListResourcesByTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


