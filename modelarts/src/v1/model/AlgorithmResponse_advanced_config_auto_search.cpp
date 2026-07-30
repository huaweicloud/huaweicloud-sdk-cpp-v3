

#include "huaweicloud/modelarts/v1/model/AlgorithmResponse_advanced_config_auto_search.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmResponse_advanced_config_auto_search::AlgorithmResponse_advanced_config_auto_search()
{
    skipSearchParams_ = "";
    skipSearchParamsIsSet_ = false;
    rewardAttrsIsSet_ = false;
    searchParamsIsSet_ = false;
    algoConfigsIsSet_ = false;
}

AlgorithmResponse_advanced_config_auto_search::~AlgorithmResponse_advanced_config_auto_search() = default;

void AlgorithmResponse_advanced_config_auto_search::validate()
{
}

web::json::value AlgorithmResponse_advanced_config_auto_search::toJson() const
{
    web::json::value val = web::json::value::object();

    if(skipSearchParamsIsSet_) {
        val[utility::conversions::to_string_t("skip_search_params")] = ModelBase::toJson(skipSearchParams_);
    }
    if(rewardAttrsIsSet_) {
        val[utility::conversions::to_string_t("reward_attrs")] = ModelBase::toJson(rewardAttrs_);
    }
    if(searchParamsIsSet_) {
        val[utility::conversions::to_string_t("search_params")] = ModelBase::toJson(searchParams_);
    }
    if(algoConfigsIsSet_) {
        val[utility::conversions::to_string_t("algo_configs")] = ModelBase::toJson(algoConfigs_);
    }

    return val;
}
bool AlgorithmResponse_advanced_config_auto_search::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("skip_search_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skip_search_params"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkipSearchParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reward_attrs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reward_attrs"));
        if(!fieldValue.is_null())
        {
            std::vector<JobAlgorithmResponse_policies_auto_search_reward_attrs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRewardAttrs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_params"));
        if(!fieldValue.is_null())
        {
            std::vector<AlgorithmResponse_advanced_config_auto_search_search_params> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("algo_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algo_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<JobAlgorithmResponse_policies_auto_search_algo_configs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgoConfigs(refVal);
        }
    }
    return ok;
}


std::string AlgorithmResponse_advanced_config_auto_search::getSkipSearchParams() const
{
    return skipSearchParams_;
}

void AlgorithmResponse_advanced_config_auto_search::setSkipSearchParams(const std::string& value)
{
    skipSearchParams_ = value;
    skipSearchParamsIsSet_ = true;
}

bool AlgorithmResponse_advanced_config_auto_search::skipSearchParamsIsSet() const
{
    return skipSearchParamsIsSet_;
}

void AlgorithmResponse_advanced_config_auto_search::unsetskipSearchParams()
{
    skipSearchParamsIsSet_ = false;
}

std::vector<JobAlgorithmResponse_policies_auto_search_reward_attrs>& AlgorithmResponse_advanced_config_auto_search::getRewardAttrs()
{
    return rewardAttrs_;
}

void AlgorithmResponse_advanced_config_auto_search::setRewardAttrs(const std::vector<JobAlgorithmResponse_policies_auto_search_reward_attrs>& value)
{
    rewardAttrs_ = value;
    rewardAttrsIsSet_ = true;
}

bool AlgorithmResponse_advanced_config_auto_search::rewardAttrsIsSet() const
{
    return rewardAttrsIsSet_;
}

void AlgorithmResponse_advanced_config_auto_search::unsetrewardAttrs()
{
    rewardAttrsIsSet_ = false;
}

std::vector<AlgorithmResponse_advanced_config_auto_search_search_params>& AlgorithmResponse_advanced_config_auto_search::getSearchParams()
{
    return searchParams_;
}

void AlgorithmResponse_advanced_config_auto_search::setSearchParams(const std::vector<AlgorithmResponse_advanced_config_auto_search_search_params>& value)
{
    searchParams_ = value;
    searchParamsIsSet_ = true;
}

bool AlgorithmResponse_advanced_config_auto_search::searchParamsIsSet() const
{
    return searchParamsIsSet_;
}

void AlgorithmResponse_advanced_config_auto_search::unsetsearchParams()
{
    searchParamsIsSet_ = false;
}

std::vector<JobAlgorithmResponse_policies_auto_search_algo_configs>& AlgorithmResponse_advanced_config_auto_search::getAlgoConfigs()
{
    return algoConfigs_;
}

void AlgorithmResponse_advanced_config_auto_search::setAlgoConfigs(const std::vector<JobAlgorithmResponse_policies_auto_search_algo_configs>& value)
{
    algoConfigs_ = value;
    algoConfigsIsSet_ = true;
}

bool AlgorithmResponse_advanced_config_auto_search::algoConfigsIsSet() const
{
    return algoConfigsIsSet_;
}

void AlgorithmResponse_advanced_config_auto_search::unsetalgoConfigs()
{
    algoConfigsIsSet_ = false;
}

}
}
}
}
}


