

#include "huaweicloud/cts/v3/model/BatchDeleteResourceTagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




BatchDeleteResourceTagsRequestBody::BatchDeleteResourceTagsRequestBody()
{
    tagsIsSet_ = false;
}

BatchDeleteResourceTagsRequestBody::~BatchDeleteResourceTagsRequestBody() = default;

void BatchDeleteResourceTagsRequestBody::validate()
{
}

web::json::value BatchDeleteResourceTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool BatchDeleteResourceTagsRequestBody::fromJson(const web::json::value& val)
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


std::vector<Tags>& BatchDeleteResourceTagsRequestBody::getTags()
{
    return tags_;
}

void BatchDeleteResourceTagsRequestBody::setTags(const std::vector<Tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchDeleteResourceTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchDeleteResourceTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


