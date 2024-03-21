

#include "huaweicloud/geip/v3/model/BatchDeleteV2RequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchDeleteV2RequestBody::BatchDeleteV2RequestBody()
{
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
}

BatchDeleteV2RequestBody::~BatchDeleteV2RequestBody() = default;

void BatchDeleteV2RequestBody::validate()
{
}

web::json::value BatchDeleteV2RequestBody::toJson() const
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
bool BatchDeleteV2RequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchDeleteV2RequestBody_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchDeleteV2RequestBody_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    return ok;
}


std::vector<BatchDeleteV2RequestBody_tags>& BatchDeleteV2RequestBody::getTags()
{
    return tags_;
}

void BatchDeleteV2RequestBody::setTags(const std::vector<BatchDeleteV2RequestBody_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchDeleteV2RequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchDeleteV2RequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<BatchDeleteV2RequestBody_tags>& BatchDeleteV2RequestBody::getSysTags()
{
    return sysTags_;
}

void BatchDeleteV2RequestBody::setSysTags(const std::vector<BatchDeleteV2RequestBody_tags>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool BatchDeleteV2RequestBody::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void BatchDeleteV2RequestBody::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

}
}
}
}
}


