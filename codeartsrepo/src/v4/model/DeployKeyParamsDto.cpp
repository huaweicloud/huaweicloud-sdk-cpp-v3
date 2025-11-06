

#include "huaweicloud/codeartsrepo/v4/model/DeployKeyParamsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DeployKeyParamsDto::DeployKeyParamsDto()
{
    title_ = "";
    titleIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
}

DeployKeyParamsDto::~DeployKeyParamsDto() = default;

void DeployKeyParamsDto::validate()
{
}

web::json::value DeployKeyParamsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}
bool DeployKeyParamsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
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


std::string DeployKeyParamsDto::getTitle() const
{
    return title_;
}

void DeployKeyParamsDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool DeployKeyParamsDto::titleIsSet() const
{
    return titleIsSet_;
}

void DeployKeyParamsDto::unsettitle()
{
    titleIsSet_ = false;
}

std::string DeployKeyParamsDto::getKey() const
{
    return key_;
}

void DeployKeyParamsDto::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeployKeyParamsDto::keyIsSet() const
{
    return keyIsSet_;
}

void DeployKeyParamsDto::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


