

#include "huaweicloud/geip/v3/model/GetAccountTagsV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




GetAccountTagsV2::GetAccountTagsV2()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

GetAccountTagsV2::~GetAccountTagsV2() = default;

void GetAccountTagsV2::validate()
{
}

web::json::value GetAccountTagsV2::toJson() const
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
bool GetAccountTagsV2::fromJson(const web::json::value& val)
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


std::string GetAccountTagsV2::getKey() const
{
    return key_;
}

void GetAccountTagsV2::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool GetAccountTagsV2::keyIsSet() const
{
    return keyIsSet_;
}

void GetAccountTagsV2::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& GetAccountTagsV2::getValues()
{
    return values_;
}

void GetAccountTagsV2::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool GetAccountTagsV2::valuesIsSet() const
{
    return valuesIsSet_;
}

void GetAccountTagsV2::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


