

#include "huaweicloud/cce/v3/model/BatchCreateClusterTagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




BatchCreateClusterTagsRequestBody::BatchCreateClusterTagsRequestBody()
{
    tagsIsSet_ = false;
}

BatchCreateClusterTagsRequestBody::~BatchCreateClusterTagsRequestBody() = default;

void BatchCreateClusterTagsRequestBody::validate()
{
}

web::json::value BatchCreateClusterTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool BatchCreateClusterTagsRequestBody::fromJson(const web::json::value& val)
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


std::vector<ResourceTag>& BatchCreateClusterTagsRequestBody::getTags()
{
    return tags_;
}

void BatchCreateClusterTagsRequestBody::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchCreateClusterTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchCreateClusterTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


