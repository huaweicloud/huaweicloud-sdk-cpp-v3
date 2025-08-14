

#include "huaweicloud/kms/v2/model/CreateKeyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateKeyRequestBody::CreateKeyRequestBody()
{
    keyAlias_ = "";
    keyAliasIsSet_ = false;
    keySpec_ = "";
    keySpecIsSet_ = false;
    keyUsage_ = "";
    keyUsageIsSet_ = false;
    keyDescription_ = "";
    keyDescriptionIsSet_ = false;
    origin_ = "";
    originIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
    vmId_ = "";
    vmIdIsSet_ = false;
}

CreateKeyRequestBody::~CreateKeyRequestBody() = default;

void CreateKeyRequestBody::validate()
{
}

web::json::value CreateKeyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyAliasIsSet_) {
        val[utility::conversions::to_string_t("key_alias")] = ModelBase::toJson(keyAlias_);
    }
    if(keySpecIsSet_) {
        val[utility::conversions::to_string_t("key_spec")] = ModelBase::toJson(keySpec_);
    }
    if(keyUsageIsSet_) {
        val[utility::conversions::to_string_t("key_usage")] = ModelBase::toJson(keyUsage_);
    }
    if(keyDescriptionIsSet_) {
        val[utility::conversions::to_string_t("key_description")] = ModelBase::toJson(keyDescription_);
    }
    if(originIsSet_) {
        val[utility::conversions::to_string_t("origin")] = ModelBase::toJson(origin_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }
    if(keystoreIdIsSet_) {
        val[utility::conversions::to_string_t("keystore_id")] = ModelBase::toJson(keystoreId_);
    }
    if(vmIdIsSet_) {
        val[utility::conversions::to_string_t("vm_id")] = ModelBase::toJson(vmId_);
    }

    return val;
}
bool CreateKeyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_spec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeySpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_usage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyUsage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrigin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keystore_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vm_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vm_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmId(refVal);
        }
    }
    return ok;
}


std::string CreateKeyRequestBody::getKeyAlias() const
{
    return keyAlias_;
}

void CreateKeyRequestBody::setKeyAlias(const std::string& value)
{
    keyAlias_ = value;
    keyAliasIsSet_ = true;
}

bool CreateKeyRequestBody::keyAliasIsSet() const
{
    return keyAliasIsSet_;
}

void CreateKeyRequestBody::unsetkeyAlias()
{
    keyAliasIsSet_ = false;
}

std::string CreateKeyRequestBody::getKeySpec() const
{
    return keySpec_;
}

void CreateKeyRequestBody::setKeySpec(const std::string& value)
{
    keySpec_ = value;
    keySpecIsSet_ = true;
}

bool CreateKeyRequestBody::keySpecIsSet() const
{
    return keySpecIsSet_;
}

void CreateKeyRequestBody::unsetkeySpec()
{
    keySpecIsSet_ = false;
}

std::string CreateKeyRequestBody::getKeyUsage() const
{
    return keyUsage_;
}

void CreateKeyRequestBody::setKeyUsage(const std::string& value)
{
    keyUsage_ = value;
    keyUsageIsSet_ = true;
}

bool CreateKeyRequestBody::keyUsageIsSet() const
{
    return keyUsageIsSet_;
}

void CreateKeyRequestBody::unsetkeyUsage()
{
    keyUsageIsSet_ = false;
}

std::string CreateKeyRequestBody::getKeyDescription() const
{
    return keyDescription_;
}

void CreateKeyRequestBody::setKeyDescription(const std::string& value)
{
    keyDescription_ = value;
    keyDescriptionIsSet_ = true;
}

bool CreateKeyRequestBody::keyDescriptionIsSet() const
{
    return keyDescriptionIsSet_;
}

void CreateKeyRequestBody::unsetkeyDescription()
{
    keyDescriptionIsSet_ = false;
}

std::string CreateKeyRequestBody::getOrigin() const
{
    return origin_;
}

void CreateKeyRequestBody::setOrigin(const std::string& value)
{
    origin_ = value;
    originIsSet_ = true;
}

bool CreateKeyRequestBody::originIsSet() const
{
    return originIsSet_;
}

void CreateKeyRequestBody::unsetorigin()
{
    originIsSet_ = false;
}

std::string CreateKeyRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateKeyRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateKeyRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateKeyRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateKeyRequestBody::getSequence() const
{
    return sequence_;
}

void CreateKeyRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool CreateKeyRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void CreateKeyRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

std::string CreateKeyRequestBody::getKeystoreId() const
{
    return keystoreId_;
}

void CreateKeyRequestBody::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool CreateKeyRequestBody::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void CreateKeyRequestBody::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

std::string CreateKeyRequestBody::getVmId() const
{
    return vmId_;
}

void CreateKeyRequestBody::setVmId(const std::string& value)
{
    vmId_ = value;
    vmIdIsSet_ = true;
}

bool CreateKeyRequestBody::vmIdIsSet() const
{
    return vmIdIsSet_;
}

void CreateKeyRequestBody::unsetvmId()
{
    vmIdIsSet_ = false;
}

}
}
}
}
}


