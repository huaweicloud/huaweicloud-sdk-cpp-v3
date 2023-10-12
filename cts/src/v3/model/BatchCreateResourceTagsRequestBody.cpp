

#include "huaweicloud/cts/v3/model/BatchCreateResourceTagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




BatchCreateResourceTagsRequestBody::BatchCreateResourceTagsRequestBody()
{
    tagsIsSet_ = false;
}

BatchCreateResourceTagsRequestBody::~BatchCreateResourceTagsRequestBody() = default;

void BatchCreateResourceTagsRequestBody::validate()
{
}

web::json::value BatchCreateResourceTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool BatchCreateResourceTagsRequestBody::fromJson(const web::json::value& val)
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


std::vector<Tags>& BatchCreateResourceTagsRequestBody::getTags()
{
    return tags_;
}

void BatchCreateResourceTagsRequestBody::setTags(const std::vector<Tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchCreateResourceTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchCreateResourceTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


