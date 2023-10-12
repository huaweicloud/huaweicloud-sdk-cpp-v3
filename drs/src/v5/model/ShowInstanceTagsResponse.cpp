

#include "huaweicloud/drs/v5/model/ShowInstanceTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowInstanceTagsResponse::ShowInstanceTagsResponse()
{
    tagsIsSet_ = false;
}

ShowInstanceTagsResponse::~ShowInstanceTagsResponse() = default;

void ShowInstanceTagsResponse::validate()
{
}

web::json::value ShowInstanceTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ShowInstanceTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<BatchResourceTag>& ShowInstanceTagsResponse::getTags()
{
    return tags_;
}

void ShowInstanceTagsResponse::setTags(const std::vector<BatchResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowInstanceTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowInstanceTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


