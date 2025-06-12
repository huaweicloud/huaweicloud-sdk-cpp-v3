

#include "huaweicloud/metastudio/v1/model/ReplicationEncInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ReplicationEncInfo::ReplicationEncInfo()
{
    algorithm_ = "";
    algorithmIsSet_ = false;
    keyId_ = "";
    keyIdIsSet_ = false;
    iv_ = "";
    ivIsSet_ = false;
}

ReplicationEncInfo::~ReplicationEncInfo() = default;

void ReplicationEncInfo::validate()
{
}

web::json::value ReplicationEncInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(algorithmIsSet_) {
        val[utility::conversions::to_string_t("algorithm")] = ModelBase::toJson(algorithm_);
    }
    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(ivIsSet_) {
        val[utility::conversions::to_string_t("iv")] = ModelBase::toJson(iv_);
    }

    return val;
}
bool ReplicationEncInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithm(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("iv"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iv"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIv(refVal);
        }
    }
    return ok;
}


std::string ReplicationEncInfo::getAlgorithm() const
{
    return algorithm_;
}

void ReplicationEncInfo::setAlgorithm(const std::string& value)
{
    algorithm_ = value;
    algorithmIsSet_ = true;
}

bool ReplicationEncInfo::algorithmIsSet() const
{
    return algorithmIsSet_;
}

void ReplicationEncInfo::unsetalgorithm()
{
    algorithmIsSet_ = false;
}

std::string ReplicationEncInfo::getKeyId() const
{
    return keyId_;
}

void ReplicationEncInfo::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ReplicationEncInfo::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ReplicationEncInfo::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string ReplicationEncInfo::getIv() const
{
    return iv_;
}

void ReplicationEncInfo::setIv(const std::string& value)
{
    iv_ = value;
    ivIsSet_ = true;
}

bool ReplicationEncInfo::ivIsSet() const
{
    return ivIsSet_;
}

void ReplicationEncInfo::unsetiv()
{
    ivIsSet_ = false;
}

}
}
}
}
}


