

#include "huaweicloud/kms/v2/model/CreateAliasRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateAliasRequestBody::CreateAliasRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
}

CreateAliasRequestBody::~CreateAliasRequestBody() = default;

void CreateAliasRequestBody::validate()
{
}

web::json::value CreateAliasRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }

    return val;
}
bool CreateAliasRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    return ok;
}


std::string CreateAliasRequestBody::getKeyId() const
{
    return keyId_;
}

void CreateAliasRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool CreateAliasRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void CreateAliasRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string CreateAliasRequestBody::getAlias() const
{
    return alias_;
}

void CreateAliasRequestBody::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool CreateAliasRequestBody::aliasIsSet() const
{
    return aliasIsSet_;
}

void CreateAliasRequestBody::unsetalias()
{
    aliasIsSet_ = false;
}

}
}
}
}
}


