

#include "huaweicloud/modelarts/v1/model/DeleteTagItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteTagItem::DeleteTagItem()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

DeleteTagItem::~DeleteTagItem() = default;

void DeleteTagItem::validate()
{
}

web::json::value DeleteTagItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool DeleteTagItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string DeleteTagItem::getKey() const
{
    return key_;
}

void DeleteTagItem::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeleteTagItem::keyIsSet() const
{
    return keyIsSet_;
}

void DeleteTagItem::unsetkey()
{
    keyIsSet_ = false;
}

std::string DeleteTagItem::getValue() const
{
    return value_;
}

void DeleteTagItem::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool DeleteTagItem::valueIsSet() const
{
    return valueIsSet_;
}

void DeleteTagItem::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


