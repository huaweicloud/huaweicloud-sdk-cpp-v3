

#include "huaweicloud/organizations/v1/model/TagResourceReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




TagResourceReqBody::TagResourceReqBody()
{
    tagsIsSet_ = false;
}

TagResourceReqBody::~TagResourceReqBody() = default;

void TagResourceReqBody::validate()
{
}

web::json::value TagResourceReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool TagResourceReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<TagDto>& TagResourceReqBody::getTags()
{
    return tags_;
}

void TagResourceReqBody::setTags(const std::vector<TagDto>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool TagResourceReqBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void TagResourceReqBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


