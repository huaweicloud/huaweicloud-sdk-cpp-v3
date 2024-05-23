

#include "huaweicloud/ram/v1/model/UntagResourceReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




UntagResourceReqBody::UntagResourceReqBody()
{
    tagsIsSet_ = false;
}

UntagResourceReqBody::~UntagResourceReqBody() = default;

void UntagResourceReqBody::validate()
{
}

web::json::value UntagResourceReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool UntagResourceReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Untag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<Untag>& UntagResourceReqBody::getTags()
{
    return tags_;
}

void UntagResourceReqBody::setTags(const std::vector<Untag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UntagResourceReqBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void UntagResourceReqBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


