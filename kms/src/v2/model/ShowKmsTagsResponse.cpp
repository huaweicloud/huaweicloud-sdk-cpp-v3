

#include "huaweicloud/kms/v2/model/ShowKmsTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowKmsTagsResponse::ShowKmsTagsResponse()
{
    tagsIsSet_ = false;
    existTagsNum_ = 0;
    existTagsNumIsSet_ = false;
}

ShowKmsTagsResponse::~ShowKmsTagsResponse() = default;

void ShowKmsTagsResponse::validate()
{
}

web::json::value ShowKmsTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(existTagsNumIsSet_) {
        val[utility::conversions::to_string_t("existTagsNum")] = ModelBase::toJson(existTagsNum_);
    }

    return val;
}
bool ShowKmsTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("existTagsNum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("existTagsNum"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExistTagsNum(refVal);
        }
    }
    return ok;
}


std::vector<TagItem>& ShowKmsTagsResponse::getTags()
{
    return tags_;
}

void ShowKmsTagsResponse::setTags(const std::vector<TagItem>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowKmsTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowKmsTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

int32_t ShowKmsTagsResponse::getExistTagsNum() const
{
    return existTagsNum_;
}

void ShowKmsTagsResponse::setExistTagsNum(int32_t value)
{
    existTagsNum_ = value;
    existTagsNumIsSet_ = true;
}

bool ShowKmsTagsResponse::existTagsNumIsSet() const
{
    return existTagsNumIsSet_;
}

void ShowKmsTagsResponse::unsetexistTagsNum()
{
    existTagsNumIsSet_ = false;
}

}
}
}
}
}


