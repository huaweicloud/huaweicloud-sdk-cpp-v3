

#include "huaweicloud/cce/v3/model/ResourceDeleteTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ResourceDeleteTag::ResourceDeleteTag()
{
    key_ = "";
    keyIsSet_ = false;
}

ResourceDeleteTag::~ResourceDeleteTag() = default;

void ResourceDeleteTag::validate()
{
}

web::json::value ResourceDeleteTag::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}
bool ResourceDeleteTag::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ResourceDeleteTag::getKey() const
{
    return key_;
}

void ResourceDeleteTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ResourceDeleteTag::keyIsSet() const
{
    return keyIsSet_;
}

void ResourceDeleteTag::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


