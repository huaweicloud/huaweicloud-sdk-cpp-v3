
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_advanced_config_auto_search_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_advanced_config_auto_search_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/JobAlgorithmResponse_policies_auto_search_reward_attrs.h>
#include <huaweicloud/modelarts/v1/model/JobAlgorithmResponse_policies_auto_search_algo_configs.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/AlgorithmResponse_advanced_config_auto_search_search_params.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 超参搜索策略。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AlgorithmResponse_advanced_config_auto_search
    : public ModelBase
{
public:
    AlgorithmResponse_advanced_config_auto_search();
    virtual ~AlgorithmResponse_advanced_config_auto_search();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlgorithmResponse_advanced_config_auto_search members

    /// <summary>
    /// 需要排除的超参组合。
    /// </summary>

    std::string getSkipSearchParams() const;
    bool skipSearchParamsIsSet() const;
    void unsetskipSearchParams();
    void setSkipSearchParams(const std::string& value);

    /// <summary>
    /// 搜索指标列表。
    /// </summary>

    std::vector<JobAlgorithmResponse_policies_auto_search_reward_attrs>& getRewardAttrs();
    bool rewardAttrsIsSet() const;
    void unsetrewardAttrs();
    void setRewardAttrs(const std::vector<JobAlgorithmResponse_policies_auto_search_reward_attrs>& value);

    /// <summary>
    /// 搜索参数。
    /// </summary>

    std::vector<AlgorithmResponse_advanced_config_auto_search_search_params>& getSearchParams();
    bool searchParamsIsSet() const;
    void unsetsearchParams();
    void setSearchParams(const std::vector<AlgorithmResponse_advanced_config_auto_search_search_params>& value);

    /// <summary>
    /// 搜索算法配置。
    /// </summary>

    std::vector<JobAlgorithmResponse_policies_auto_search_algo_configs>& getAlgoConfigs();
    bool algoConfigsIsSet() const;
    void unsetalgoConfigs();
    void setAlgoConfigs(const std::vector<JobAlgorithmResponse_policies_auto_search_algo_configs>& value);


protected:
    std::string skipSearchParams_;
    bool skipSearchParamsIsSet_;
    std::vector<JobAlgorithmResponse_policies_auto_search_reward_attrs> rewardAttrs_;
    bool rewardAttrsIsSet_;
    std::vector<AlgorithmResponse_advanced_config_auto_search_search_params> searchParams_;
    bool searchParamsIsSet_;
    std::vector<JobAlgorithmResponse_policies_auto_search_algo_configs> algoConfigs_;
    bool algoConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_advanced_config_auto_search_H_
