

#include "huaweicloud/codeartsrepo/v4/model/DeployKeyValueDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DeployKeyValueDto::DeployKeyValueDto()
{
    key_ = "";
    keyIsSet_ = false;
}

DeployKeyValueDto::~DeployKeyValueDto() = default;

void DeployKeyValueDto::validate()
{
}

web::json::value DeployKeyValueDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}
bool DeployKeyValueDto::fromJson(const web::json::value& val)
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


std::string DeployKeyValueDto::getKey() const
{
    return key_;
}

void DeployKeyValueDto::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeployKeyValueDto::keyIsSet() const
{
    return keyIsSet_;
}

void DeployKeyValueDto::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


