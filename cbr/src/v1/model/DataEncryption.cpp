

#include "huaweicloud/cbr/v1/model/DataEncryption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




DataEncryption::DataEncryption()
{
    cmkid_ = "";
    cmkidIsSet_ = false;
    encryptedAlgorithm_ = "";
    encryptedAlgorithmIsSet_ = false;
}

DataEncryption::~DataEncryption() = default;

void DataEncryption::validate()
{
}

web::json::value DataEncryption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cmkidIsSet_) {
        val[utility::conversions::to_string_t("cmkid")] = ModelBase::toJson(cmkid_);
    }
    if(encryptedAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("encrypted_algorithm")] = ModelBase::toJson(encryptedAlgorithm_);
    }

    return val;
}
bool DataEncryption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cmkid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmkid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmkid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encrypted_algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encrypted_algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptedAlgorithm(refVal);
        }
    }
    return ok;
}


std::string DataEncryption::getCmkid() const
{
    return cmkid_;
}

void DataEncryption::setCmkid(const std::string& value)
{
    cmkid_ = value;
    cmkidIsSet_ = true;
}

bool DataEncryption::cmkidIsSet() const
{
    return cmkidIsSet_;
}

void DataEncryption::unsetcmkid()
{
    cmkidIsSet_ = false;
}

std::string DataEncryption::getEncryptedAlgorithm() const
{
    return encryptedAlgorithm_;
}

void DataEncryption::setEncryptedAlgorithm(const std::string& value)
{
    encryptedAlgorithm_ = value;
    encryptedAlgorithmIsSet_ = true;
}

bool DataEncryption::encryptedAlgorithmIsSet() const
{
    return encryptedAlgorithmIsSet_;
}

void DataEncryption::unsetencryptedAlgorithm()
{
    encryptedAlgorithmIsSet_ = false;
}

}
}
}
}
}


