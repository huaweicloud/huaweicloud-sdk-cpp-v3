

#include "huaweicloud/gaussdb/v3/model/MysqlTags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlTags::MysqlTags()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

MysqlTags::~MysqlTags() = default;

void MysqlTags::validate()
{
}

web::json::value MysqlTags::toJson() const
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
bool MysqlTags::fromJson(const web::json::value& val)
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


std::string MysqlTags::getKey() const
{
    return key_;
}

void MysqlTags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool MysqlTags::keyIsSet() const
{
    return keyIsSet_;
}

void MysqlTags::unsetkey()
{
    keyIsSet_ = false;
}

std::string MysqlTags::getValue() const
{
    return value_;
}

void MysqlTags::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool MysqlTags::valueIsSet() const
{
    return valueIsSet_;
}

void MysqlTags::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


