

#include "huaweicloud/iotda/v5/model/TagRef.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




TagRef::TagRef()
{
    tagKeyIsSet_ = false;
    tagValueIsSet_ = false;
}

TagRef::~TagRef() = default;

void TagRef::validate()
{
}

web::json::value TagRef::toJson() const
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
bool TagRef::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_key"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_value"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagValue(refVal);
        }
    }
    return ok;
}


Object TagRef::getTagKey() const
{
    return tagKey_;
}

void TagRef::setTagKey(const Object& value)
{
    tagKey_ = value;
    tagKeyIsSet_ = true;
}

bool TagRef::tagKeyIsSet() const
{
    return tagKeyIsSet_;
}

void TagRef::unsettagKey()
{
    tagKeyIsSet_ = false;
}

Object TagRef::getTagValue() const
{
    return tagValue_;
}

void TagRef::setTagValue(const Object& value)
{
    tagValue_ = value;
    tagValueIsSet_ = true;
}

bool TagRef::tagValueIsSet() const
{
    return tagValueIsSet_;
}

void TagRef::unsettagValue()
{
    tagValueIsSet_ = false;
}

}
}
}
}
}


