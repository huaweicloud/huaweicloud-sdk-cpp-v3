

#include "huaweicloud/dds/v3/model/QueryProjectTagItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




QueryProjectTagItem::QueryProjectTagItem()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

QueryProjectTagItem::~QueryProjectTagItem() = default;

void QueryProjectTagItem::validate()
{
}

web::json::value QueryProjectTagItem::toJson() const
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
bool QueryProjectTagItem::fromJson(const web::json::value& val)
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


std::string QueryProjectTagItem::getKey() const
{
    return key_;
}

void QueryProjectTagItem::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool QueryProjectTagItem::keyIsSet() const
{
    return keyIsSet_;
}

void QueryProjectTagItem::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& QueryProjectTagItem::getValues()
{
    return values_;
}

void QueryProjectTagItem::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool QueryProjectTagItem::valuesIsSet() const
{
    return valuesIsSet_;
}

void QueryProjectTagItem::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


