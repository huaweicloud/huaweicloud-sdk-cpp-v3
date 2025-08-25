

#include "huaweicloud/cce/v3/model/BatchDeleteClusterTagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




BatchDeleteClusterTagsRequestBody::BatchDeleteClusterTagsRequestBody()
{
    tagsIsSet_ = false;
}

BatchDeleteClusterTagsRequestBody::~BatchDeleteClusterTagsRequestBody() = default;

void BatchDeleteClusterTagsRequestBody::validate()
{
}

web::json::value BatchDeleteClusterTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool BatchDeleteClusterTagsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceDeleteTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<ResourceDeleteTag>& BatchDeleteClusterTagsRequestBody::getTags()
{
    return tags_;
}

void BatchDeleteClusterTagsRequestBody::setTags(const std::vector<ResourceDeleteTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchDeleteClusterTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchDeleteClusterTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


