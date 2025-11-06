

#include "huaweicloud/codeartsrepo/v3/model/AddSshKeyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




AddSshKeyRequestBody::AddSshKeyRequestBody()
{
    key_ = "";
    keyIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
}

AddSshKeyRequestBody::~AddSshKeyRequestBody() = default;

void AddSshKeyRequestBody::validate()
{
}

web::json::value AddSshKeyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }

    return val;
}
bool AddSshKeyRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    return ok;
}


std::string AddSshKeyRequestBody::getKey() const
{
    return key_;
}

void AddSshKeyRequestBody::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool AddSshKeyRequestBody::keyIsSet() const
{
    return keyIsSet_;
}

void AddSshKeyRequestBody::unsetkey()
{
    keyIsSet_ = false;
}

std::string AddSshKeyRequestBody::getTitle() const
{
    return title_;
}

void AddSshKeyRequestBody::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool AddSshKeyRequestBody::titleIsSet() const
{
    return titleIsSet_;
}

void AddSshKeyRequestBody::unsettitle()
{
    titleIsSet_ = false;
}

}
}
}
}
}


