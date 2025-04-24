

#include "huaweicloud/ims/v2/model/BatchDeleteTagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




BatchDeleteTagsRequestBody::BatchDeleteTagsRequestBody()
{
    tagsIsSet_ = false;
}

BatchDeleteTagsRequestBody::~BatchDeleteTagsRequestBody() = default;

void BatchDeleteTagsRequestBody::validate()
{
}

web::json::value BatchDeleteTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool BatchDeleteTagsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<ResourceTag>& BatchDeleteTagsRequestBody::getTags()
{
    return tags_;
}

void BatchDeleteTagsRequestBody::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchDeleteTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchDeleteTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


