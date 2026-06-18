
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepoLastStatisticsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepoLastStatisticsResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/StatisticDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CodelineDto.h>
#include <vector>
#include <huaweicloud/codeartsrepo/v4/model/StatisticEventsDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowRepoLastStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRepoLastStatisticsResponse();
    virtual ~ShowRepoLastStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepoLastStatisticsResponse members

    /// <summary>
    /// 
    /// </summary>

    StatisticEventsDto getEvent() const;
    bool eventIsSet() const;
    void unsetevent();
    void setEvent(const StatisticEventsDto& value);

    /// <summary>
    /// **参数解释：** 统计信息数量 **取值范围：** 最小0 **默认取值：** 0
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 统计信息
    /// </summary>

    std::vector<StatisticDto>& getStatistics();
    bool statisticsIsSet() const;
    void unsetstatistics();
    void setStatistics(const std::vector<StatisticDto>& value);

    /// <summary>
    /// 仓库近15日每日代码提交增减行数信息。
    /// </summary>

    std::vector<CodelineDto>& getCodelines();
    bool codelinesIsSet() const;
    void unsetcodelines();
    void setCodelines(const std::vector<CodelineDto>& value);

    /// <summary>
    /// **参数解释：** 分支提交总数。 **取值范围：** 最小0 **默认取值：** 0
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库提交总数。 **取值范围：** 最小0 **默认取值：** 0
    /// </summary>

    int32_t getAllBranchCommitsCount() const;
    bool allBranchCommitsCountIsSet() const;
    void unsetallBranchCommitsCount();
    void setAllBranchCommitsCount(int32_t value);


protected:
    StatisticEventsDto event_;
    bool eventIsSet_;
    int32_t total_;
    bool totalIsSet_;
    std::vector<StatisticDto> statistics_;
    bool statisticsIsSet_;
    std::vector<CodelineDto> codelines_;
    bool codelinesIsSet_;
    int32_t count_;
    bool countIsSet_;
    int32_t allBranchCommitsCount_;
    bool allBranchCommitsCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepoLastStatisticsResponse_H_
