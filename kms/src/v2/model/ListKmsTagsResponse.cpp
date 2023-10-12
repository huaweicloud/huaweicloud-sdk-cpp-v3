

#include "huaweicloud/kms/v2/model/ListKmsTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListKmsTagsResponse::ListKmsTagsResponse()
{
    tagsIsSet_ = false;
}

ListKmsTagsResponse::~ListKmsTagsResponse() = default;

void ListKmsTagsResponse::validate()
{
}

web::json::value ListKmsTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListKmsTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<Tag>& ListKmsTagsResponse::getTags()
{
    return tags_;
}

void ListKmsTagsResponse::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListKmsTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListKmsTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


