

#include "huaweicloud/functiongraph/v2/model/TagItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




TagItem::TagItem()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

TagItem::~TagItem() = default;

void TagItem::validate()
{
}

web::json::value TagItem::toJson() const
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
bool TagItem::fromJson(const web::json::value& val)
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


std::string TagItem::getKey() const
{
    return key_;
}

void TagItem::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagItem::keyIsSet() const
{
    return keyIsSet_;
}

void TagItem::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& TagItem::getValues()
{
    return values_;
}

void TagItem::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool TagItem::valuesIsSet() const
{
    return valuesIsSet_;
}

void TagItem::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


