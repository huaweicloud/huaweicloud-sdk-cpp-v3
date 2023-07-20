

#include "huaweicloud/gaussdbforopengauss/v3/model/AddTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




AddTagsRequestBody::AddTagsRequestBody()
{
    tagsIsSet_ = false;
}

AddTagsRequestBody::~AddTagsRequestBody() = default;

void AddTagsRequestBody::validate()
{
}

web::json::value AddTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool AddTagsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagsOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::vector<TagsOption>& AddTagsRequestBody::getTags()
{
    return tags_;
}

void AddTagsRequestBody::setTags(const std::vector<TagsOption>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool AddTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void AddTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


