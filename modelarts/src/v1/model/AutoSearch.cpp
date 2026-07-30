

#include "huaweicloud/modelarts/v1/model/AutoSearch.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AutoSearch::AutoSearch()
{
    skipSearchParams_ = "";
    skipSearchParamsIsSet_ = false;
    rewardAttrsIsSet_ = false;
    searchParamsIsSet_ = false;
    algoConfigsIsSet_ = false;
}

AutoSearch::~AutoSearch() = default;

void AutoSearch::validate()
{
}

web::json::value AutoSearch::toJson() const
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
bool AutoSearch::fromJson(const web::json::value& val)
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
            std::vector<RewardAttrs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRewardAttrs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_params"));
        if(!fieldValue.is_null())
        {
            std::vector<SearchParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("algo_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algo_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<AlgoConfigs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgoConfigs(refVal);
        }
    }
    return ok;
}


std::string AutoSearch::getSkipSearchParams() const
{
    return skipSearchParams_;
}

void AutoSearch::setSkipSearchParams(const std::string& value)
{
    skipSearchParams_ = value;
    skipSearchParamsIsSet_ = true;
}

bool AutoSearch::skipSearchParamsIsSet() const
{
    return skipSearchParamsIsSet_;
}

void AutoSearch::unsetskipSearchParams()
{
    skipSearchParamsIsSet_ = false;
}

std::vector<RewardAttrs>& AutoSearch::getRewardAttrs()
{
    return rewardAttrs_;
}

void AutoSearch::setRewardAttrs(const std::vector<RewardAttrs>& value)
{
    rewardAttrs_ = value;
    rewardAttrsIsSet_ = true;
}

bool AutoSearch::rewardAttrsIsSet() const
{
    return rewardAttrsIsSet_;
}

void AutoSearch::unsetrewardAttrs()
{
    rewardAttrsIsSet_ = false;
}

std::vector<SearchParams>& AutoSearch::getSearchParams()
{
    return searchParams_;
}

void AutoSearch::setSearchParams(const std::vector<SearchParams>& value)
{
    searchParams_ = value;
    searchParamsIsSet_ = true;
}

bool AutoSearch::searchParamsIsSet() const
{
    return searchParamsIsSet_;
}

void AutoSearch::unsetsearchParams()
{
    searchParamsIsSet_ = false;
}

std::vector<AlgoConfigs>& AutoSearch::getAlgoConfigs()
{
    return algoConfigs_;
}

void AutoSearch::setAlgoConfigs(const std::vector<AlgoConfigs>& value)
{
    algoConfigs_ = value;
    algoConfigsIsSet_ = true;
}

bool AutoSearch::algoConfigsIsSet() const
{
    return algoConfigsIsSet_;
}

void AutoSearch::unsetalgoConfigs()
{
    algoConfigsIsSet_ = false;
}

}
}
}
}
}


