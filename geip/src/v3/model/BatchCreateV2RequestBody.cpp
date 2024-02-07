

#include "huaweicloud/geip/v3/model/BatchCreateV2RequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchCreateV2RequestBody::BatchCreateV2RequestBody()
{
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
}

BatchCreateV2RequestBody::~BatchCreateV2RequestBody() = default;

void BatchCreateV2RequestBody::validate()
{
}

web::json::value BatchCreateV2RequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }

    return val;
}
bool BatchCreateV2RequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchCreateV2RequestBody_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchCreateV2RequestBody_sys_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    return ok;
}


std::vector<BatchCreateV2RequestBody_tags>& BatchCreateV2RequestBody::getTags()
{
    return tags_;
}

void BatchCreateV2RequestBody::setTags(const std::vector<BatchCreateV2RequestBody_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchCreateV2RequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchCreateV2RequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<BatchCreateV2RequestBody_sys_tags>& BatchCreateV2RequestBody::getSysTags()
{
    return sysTags_;
}

void BatchCreateV2RequestBody::setSysTags(const std::vector<BatchCreateV2RequestBody_sys_tags>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool BatchCreateV2RequestBody::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void BatchCreateV2RequestBody::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

}
}
}
}
}


