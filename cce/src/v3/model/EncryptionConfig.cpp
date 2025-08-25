

#include "huaweicloud/cce/v3/model/EncryptionConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




EncryptionConfig::EncryptionConfig()
{
    mode_ = "";
    modeIsSet_ = false;
    kmsKeyID_ = "";
    kmsKeyIDIsSet_ = false;
}

EncryptionConfig::~EncryptionConfig() = default;

void EncryptionConfig::validate()
{
}

web::json::value EncryptionConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(kmsKeyIDIsSet_) {
        val[utility::conversions::to_string_t("kmsKeyID")] = ModelBase::toJson(kmsKeyID_);
    }

    return val;
}
bool EncryptionConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kmsKeyID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kmsKeyID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKmsKeyID(refVal);
        }
    }
    return ok;
}


std::string EncryptionConfig::getMode() const
{
    return mode_;
}

void EncryptionConfig::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool EncryptionConfig::modeIsSet() const
{
    return modeIsSet_;
}

void EncryptionConfig::unsetmode()
{
    modeIsSet_ = false;
}

std::string EncryptionConfig::getKmsKeyID() const
{
    return kmsKeyID_;
}

void EncryptionConfig::setKmsKeyID(const std::string& value)
{
    kmsKeyID_ = value;
    kmsKeyIDIsSet_ = true;
}

bool EncryptionConfig::kmsKeyIDIsSet() const
{
    return kmsKeyIDIsSet_;
}

void EncryptionConfig::unsetkmsKeyID()
{
    kmsKeyIDIsSet_ = false;
}

}
}
}
}
}


