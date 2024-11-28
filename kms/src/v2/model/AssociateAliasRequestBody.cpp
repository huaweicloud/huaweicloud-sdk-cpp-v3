

#include "huaweicloud/kms/v2/model/AssociateAliasRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




AssociateAliasRequestBody::AssociateAliasRequestBody()
{
    alias_ = "";
    aliasIsSet_ = false;
    targetKeyId_ = "";
    targetKeyIdIsSet_ = false;
}

AssociateAliasRequestBody::~AssociateAliasRequestBody() = default;

void AssociateAliasRequestBody::validate()
{
}

web::json::value AssociateAliasRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }
    if(targetKeyIdIsSet_) {
        val[utility::conversions::to_string_t("target_key_id")] = ModelBase::toJson(targetKeyId_);
    }

    return val;
}
bool AssociateAliasRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetKeyId(refVal);
        }
    }
    return ok;
}


std::string AssociateAliasRequestBody::getAlias() const
{
    return alias_;
}

void AssociateAliasRequestBody::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool AssociateAliasRequestBody::aliasIsSet() const
{
    return aliasIsSet_;
}

void AssociateAliasRequestBody::unsetalias()
{
    aliasIsSet_ = false;
}

std::string AssociateAliasRequestBody::getTargetKeyId() const
{
    return targetKeyId_;
}

void AssociateAliasRequestBody::setTargetKeyId(const std::string& value)
{
    targetKeyId_ = value;
    targetKeyIdIsSet_ = true;
}

bool AssociateAliasRequestBody::targetKeyIdIsSet() const
{
    return targetKeyIdIsSet_;
}

void AssociateAliasRequestBody::unsettargetKeyId()
{
    targetKeyIdIsSet_ = false;
}

}
}
}
}
}


