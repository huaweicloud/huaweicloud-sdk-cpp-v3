

#include "huaweicloud/evs/v2/model/TagsForListVolumes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




TagsForListVolumes::TagsForListVolumes()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

TagsForListVolumes::~TagsForListVolumes() = default;

void TagsForListVolumes::validate()
{
}

web::json::value TagsForListVolumes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool TagsForListVolumes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


std::string TagsForListVolumes::getKey() const
{
    return key_;
}

void TagsForListVolumes::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagsForListVolumes::keyIsSet() const
{
    return keyIsSet_;
}

void TagsForListVolumes::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& TagsForListVolumes::getValues()
{
    return values_;
}

void TagsForListVolumes::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool TagsForListVolumes::valuesIsSet() const
{
    return valuesIsSet_;
}

void TagsForListVolumes::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


