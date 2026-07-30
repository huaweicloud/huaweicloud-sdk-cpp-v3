
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AutoSearch_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AutoSearch_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AlgoConfigs.h>
#include <huaweicloud/modelarts/v1/model/RewardAttrs.h>
#include <huaweicloud/modelarts/v1/model/SearchParams.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 超参搜索配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AutoSearch
    : public ModelBase
{
public:
    AutoSearch();
    virtual ~AutoSearch();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutoSearch members

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

    std::vector<RewardAttrs>& getRewardAttrs();
    bool rewardAttrsIsSet() const;
    void unsetrewardAttrs();
    void setRewardAttrs(const std::vector<RewardAttrs>& value);

    /// <summary>
    /// 搜索参数。
    /// </summary>

    std::vector<SearchParams>& getSearchParams();
    bool searchParamsIsSet() const;
    void unsetsearchParams();
    void setSearchParams(const std::vector<SearchParams>& value);

    /// <summary>
    /// 搜索算法配置。
    /// </summary>

    std::vector<AlgoConfigs>& getAlgoConfigs();
    bool algoConfigsIsSet() const;
    void unsetalgoConfigs();
    void setAlgoConfigs(const std::vector<AlgoConfigs>& value);


protected:
    std::string skipSearchParams_;
    bool skipSearchParamsIsSet_;
    std::vector<RewardAttrs> rewardAttrs_;
    bool rewardAttrsIsSet_;
    std::vector<SearchParams> searchParams_;
    bool searchParamsIsSet_;
    std::vector<AlgoConfigs> algoConfigs_;
    bool algoConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AutoSearch_H_
