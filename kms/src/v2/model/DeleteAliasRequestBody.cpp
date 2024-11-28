

#include "huaweicloud/kms/v2/model/DeleteAliasRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DeleteAliasRequestBody::DeleteAliasRequestBody()
{
    aliasesIsSet_ = false;
    keyId_ = "";
    keyIdIsSet_ = false;
}

DeleteAliasRequestBody::~DeleteAliasRequestBody() = default;

void DeleteAliasRequestBody::validate()
{
}

web::json::value DeleteAliasRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aliasesIsSet_) {
        val[utility::conversions::to_string_t("aliases")] = ModelBase::toJson(aliases_);
    }
    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }

    return val;
}
bool DeleteAliasRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("aliases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aliases"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAliases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeleteAliasRequestBody::getAliases()
{
    return aliases_;
}

void DeleteAliasRequestBody::setAliases(const std::vector<std::string>& value)
{
    aliases_ = value;
    aliasesIsSet_ = true;
}

bool DeleteAliasRequestBody::aliasesIsSet() const
{
    return aliasesIsSet_;
}

void DeleteAliasRequestBody::unsetaliases()
{
    aliasesIsSet_ = false;
}

std::string DeleteAliasRequestBody::getKeyId() const
{
    return keyId_;
}

void DeleteAliasRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool DeleteAliasRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void DeleteAliasRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

}
}
}
}
}


