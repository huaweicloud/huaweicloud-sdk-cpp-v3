

#include "huaweicloud/ims/v2/model/ListImagesTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ListImagesTagsResponse::ListImagesTagsResponse()
{
    tagsIsSet_ = false;
}

ListImagesTagsResponse::~ListImagesTagsResponse() = default;

void ListImagesTagsResponse::validate()
{
}

web::json::value ListImagesTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListImagesTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<Tags>& ListImagesTagsResponse::getTags()
{
    return tags_;
}

void ListImagesTagsResponse::setTags(const std::vector<Tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListImagesTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListImagesTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


