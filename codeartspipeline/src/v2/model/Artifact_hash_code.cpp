

#include "huaweicloud/codeartspipeline/v2/model/Artifact_hash_code.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




Artifact_hash_code::Artifact_hash_code()
{
    hashType_ = "";
    hashTypeIsSet_ = false;
    hashValue_ = "";
    hashValueIsSet_ = false;
}

Artifact_hash_code::~Artifact_hash_code() = default;

void Artifact_hash_code::validate()
{
}

web::json::value Artifact_hash_code::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hashTypeIsSet_) {
        val[utility::conversions::to_string_t("hash_type")] = ModelBase::toJson(hashType_);
    }
    if(hashValueIsSet_) {
        val[utility::conversions::to_string_t("hash_value")] = ModelBase::toJson(hashValue_);
    }

    return val;
}
bool Artifact_hash_code::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hash_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hash_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHashType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hash_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hash_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHashValue(refVal);
        }
    }
    return ok;
}


std::string Artifact_hash_code::getHashType() const
{
    return hashType_;
}

void Artifact_hash_code::setHashType(const std::string& value)
{
    hashType_ = value;
    hashTypeIsSet_ = true;
}

bool Artifact_hash_code::hashTypeIsSet() const
{
    return hashTypeIsSet_;
}

void Artifact_hash_code::unsethashType()
{
    hashTypeIsSet_ = false;
}

std::string Artifact_hash_code::getHashValue() const
{
    return hashValue_;
}

void Artifact_hash_code::setHashValue(const std::string& value)
{
    hashValue_ = value;
    hashValueIsSet_ = true;
}

bool Artifact_hash_code::hashValueIsSet() const
{
    return hashValueIsSet_;
}

void Artifact_hash_code::unsethashValue()
{
    hashValueIsSet_ = false;
}

}
}
}
}
}


