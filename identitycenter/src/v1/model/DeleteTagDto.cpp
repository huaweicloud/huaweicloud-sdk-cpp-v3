

#include "huaweicloud/identitycenter/v1/model/DeleteTagDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DeleteTagDto::DeleteTagDto()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

DeleteTagDto::~DeleteTagDto() = default;

void DeleteTagDto::validate()
{
}

web::json::value DeleteTagDto::toJson() const
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
bool DeleteTagDto::fromJson(const web::json::value& val)
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


std::string DeleteTagDto::getKey() const
{
    return key_;
}

void DeleteTagDto::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeleteTagDto::keyIsSet() const
{
    return keyIsSet_;
}

void DeleteTagDto::unsetkey()
{
    keyIsSet_ = false;
}

std::string DeleteTagDto::getValue() const
{
    return value_;
}

void DeleteTagDto::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool DeleteTagDto::valueIsSet() const
{
    return valueIsSet_;
}

void DeleteTagDto::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


