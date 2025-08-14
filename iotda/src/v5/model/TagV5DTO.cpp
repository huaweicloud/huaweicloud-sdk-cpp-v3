

#include "huaweicloud/iotda/v5/model/TagV5DTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




TagV5DTO::TagV5DTO()
{
    tagKey_ = "";
    tagKeyIsSet_ = false;
    tagValue_ = "";
    tagValueIsSet_ = false;
}

TagV5DTO::~TagV5DTO() = default;

void TagV5DTO::validate()
{
}

web::json::value TagV5DTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagKeyIsSet_) {
        val[utility::conversions::to_string_t("tag_key")] = ModelBase::toJson(tagKey_);
    }
    if(tagValueIsSet_) {
        val[utility::conversions::to_string_t("tag_value")] = ModelBase::toJson(tagValue_);
    }

    return val;
}
bool TagV5DTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string TagV5DTO::getTagKey() const
{
    return tagKey_;
}

void TagV5DTO::setTagKey(const std::string& value)
{
    tagKey_ = value;
    tagKeyIsSet_ = true;
}

bool TagV5DTO::tagKeyIsSet() const
{
    return tagKeyIsSet_;
}

void TagV5DTO::unsettagKey()
{
    tagKeyIsSet_ = false;
}

std::string TagV5DTO::getTagValue() const
{
    return tagValue_;
}

void TagV5DTO::setTagValue(const std::string& value)
{
    tagValue_ = value;
    tagValueIsSet_ = true;
}

bool TagV5DTO::tagValueIsSet() const
{
    return tagValueIsSet_;
}

void TagV5DTO::unsettagValue()
{
    tagValueIsSet_ = false;
}

}
}
}
}
}


