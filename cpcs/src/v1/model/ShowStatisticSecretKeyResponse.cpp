

#include "huaweicloud/cpcs/v1/model/ShowStatisticSecretKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatisticSecretKeyResponse::ShowStatisticSecretKeyResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    invalidCount_ = 0;
    invalidCountIsSet_ = false;
    validCount_ = 0;
    validCountIsSet_ = false;
    keyCountsByServiceTypeIsSet_ = false;
    keyCountsByAlgorithmIsSet_ = false;
    keyCountsByAlgorithmAndClusterIsSet_ = false;
}

ShowStatisticSecretKeyResponse::~ShowStatisticSecretKeyResponse() = default;

void ShowStatisticSecretKeyResponse::validate()
{
}

web::json::value ShowStatisticSecretKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(invalidCountIsSet_) {
        val[utility::conversions::to_string_t("invalid_count")] = ModelBase::toJson(invalidCount_);
    }
    if(validCountIsSet_) {
        val[utility::conversions::to_string_t("valid_count")] = ModelBase::toJson(validCount_);
    }
    if(keyCountsByServiceTypeIsSet_) {
        val[utility::conversions::to_string_t("key_counts_by_service_type")] = ModelBase::toJson(keyCountsByServiceType_);
    }
    if(keyCountsByAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("key_counts_by_algorithm")] = ModelBase::toJson(keyCountsByAlgorithm_);
    }
    if(keyCountsByAlgorithmAndClusterIsSet_) {
        val[utility::conversions::to_string_t("key_counts_by_algorithm_and_cluster")] = ModelBase::toJson(keyCountsByAlgorithmAndCluster_);
    }

    return val;
}
bool ShowStatisticSecretKeyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("invalid_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("invalid_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInvalidCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_counts_by_service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_counts_by_service_type"));
        if(!fieldValue.is_null())
        {
            std::vector<VendorKeyStatistic> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyCountsByServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_counts_by_algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_counts_by_algorithm"));
        if(!fieldValue.is_null())
        {
            std::vector<VendorKeyStatistic> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyCountsByAlgorithm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_counts_by_algorithm_and_cluster"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_counts_by_algorithm_and_cluster"));
        if(!fieldValue.is_null())
        {
            std::vector<VendorKeyStatistic> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyCountsByAlgorithmAndCluster(refVal);
        }
    }
    return ok;
}


int32_t ShowStatisticSecretKeyResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowStatisticSecretKeyResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowStatisticSecretKeyResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowStatisticSecretKeyResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int32_t ShowStatisticSecretKeyResponse::getInvalidCount() const
{
    return invalidCount_;
}

void ShowStatisticSecretKeyResponse::setInvalidCount(int32_t value)
{
    invalidCount_ = value;
    invalidCountIsSet_ = true;
}

bool ShowStatisticSecretKeyResponse::invalidCountIsSet() const
{
    return invalidCountIsSet_;
}

void ShowStatisticSecretKeyResponse::unsetinvalidCount()
{
    invalidCountIsSet_ = false;
}

int32_t ShowStatisticSecretKeyResponse::getValidCount() const
{
    return validCount_;
}

void ShowStatisticSecretKeyResponse::setValidCount(int32_t value)
{
    validCount_ = value;
    validCountIsSet_ = true;
}

bool ShowStatisticSecretKeyResponse::validCountIsSet() const
{
    return validCountIsSet_;
}

void ShowStatisticSecretKeyResponse::unsetvalidCount()
{
    validCountIsSet_ = false;
}

std::vector<VendorKeyStatistic>& ShowStatisticSecretKeyResponse::getKeyCountsByServiceType()
{
    return keyCountsByServiceType_;
}

void ShowStatisticSecretKeyResponse::setKeyCountsByServiceType(const std::vector<VendorKeyStatistic>& value)
{
    keyCountsByServiceType_ = value;
    keyCountsByServiceTypeIsSet_ = true;
}

bool ShowStatisticSecretKeyResponse::keyCountsByServiceTypeIsSet() const
{
    return keyCountsByServiceTypeIsSet_;
}

void ShowStatisticSecretKeyResponse::unsetkeyCountsByServiceType()
{
    keyCountsByServiceTypeIsSet_ = false;
}

std::vector<VendorKeyStatistic>& ShowStatisticSecretKeyResponse::getKeyCountsByAlgorithm()
{
    return keyCountsByAlgorithm_;
}

void ShowStatisticSecretKeyResponse::setKeyCountsByAlgorithm(const std::vector<VendorKeyStatistic>& value)
{
    keyCountsByAlgorithm_ = value;
    keyCountsByAlgorithmIsSet_ = true;
}

bool ShowStatisticSecretKeyResponse::keyCountsByAlgorithmIsSet() const
{
    return keyCountsByAlgorithmIsSet_;
}

void ShowStatisticSecretKeyResponse::unsetkeyCountsByAlgorithm()
{
    keyCountsByAlgorithmIsSet_ = false;
}

std::vector<VendorKeyStatistic>& ShowStatisticSecretKeyResponse::getKeyCountsByAlgorithmAndCluster()
{
    return keyCountsByAlgorithmAndCluster_;
}

void ShowStatisticSecretKeyResponse::setKeyCountsByAlgorithmAndCluster(const std::vector<VendorKeyStatistic>& value)
{
    keyCountsByAlgorithmAndCluster_ = value;
    keyCountsByAlgorithmAndClusterIsSet_ = true;
}

bool ShowStatisticSecretKeyResponse::keyCountsByAlgorithmAndClusterIsSet() const
{
    return keyCountsByAlgorithmAndClusterIsSet_;
}

void ShowStatisticSecretKeyResponse::unsetkeyCountsByAlgorithmAndCluster()
{
    keyCountsByAlgorithmAndClusterIsSet_ = false;
}

}
}
}
}
}


