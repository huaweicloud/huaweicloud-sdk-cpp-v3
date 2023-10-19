

#include "huaweicloud/cfw/v1/model/TagsVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




TagsVO::TagsVO()
{
    tagId_ = "";
    tagIdIsSet_ = false;
    tagKey_ = "";
    tagKeyIsSet_ = false;
    tagValue_ = "";
    tagValueIsSet_ = false;
}

TagsVO::~TagsVO() = default;

void TagsVO::validate()
{
}

web::json::value TagsVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIdIsSet_) {
        val[utility::conversions::to_string_t("tag_id")] = ModelBase::toJson(tagId_);
    }
    if(tagKeyIsSet_) {
        val[utility::conversions::to_string_t("tag_key")] = ModelBase::toJson(tagKey_);
    }
    if(tagValueIsSet_) {
        val[utility::conversions::to_string_t("tag_value")] = ModelBase::toJson(tagValue_);
    }

    return val;
}
bool TagsVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagValue(refVal);
        }
    }
    return ok;
}


std::string TagsVO::getTagId() const
{
    return tagId_;
}

void TagsVO::setTagId(const std::string& value)
{
    tagId_ = value;
    tagIdIsSet_ = true;
}

bool TagsVO::tagIdIsSet() const
{
    return tagIdIsSet_;
}

void TagsVO::unsettagId()
{
    tagIdIsSet_ = false;
}

std::string TagsVO::getTagKey() const
{
    return tagKey_;
}

void TagsVO::setTagKey(const std::string& value)
{
    tagKey_ = value;
    tagKeyIsSet_ = true;
}

bool TagsVO::tagKeyIsSet() const
{
    return tagKeyIsSet_;
}

void TagsVO::unsettagKey()
{
    tagKeyIsSet_ = false;
}

std::string TagsVO::getTagValue() const
{
    return tagValue_;
}

void TagsVO::setTagValue(const std::string& value)
{
    tagValue_ = value;
    tagValueIsSet_ = true;
}

bool TagsVO::tagValueIsSet() const
{
    return tagValueIsSet_;
}

void TagsVO::unsettagValue()
{
    tagValueIsSet_ = false;
}

}
}
}
}
}


