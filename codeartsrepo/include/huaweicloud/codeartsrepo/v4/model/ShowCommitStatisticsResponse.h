
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowCommitStatisticsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowCommitStatisticsResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v4/model/StatisticDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CommitStatisticsResultCommitDto.h>
#include <vector>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowCommitStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCommitStatisticsResponse();
    virtual ~ShowCommitStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCommitStatisticsResponse members

    /// <summary>
    /// **参数解释：** 提交统计。
    /// </summary>

    std::vector<CommitStatisticsResultCommitDto>& getCommits();
    bool commitsIsSet() const;
    void unsetcommits();
    void setCommits(const std::vector<CommitStatisticsResultCommitDto>& value);

    /// <summary>
    /// **参数解释：** 提交人员统计。
    /// </summary>

    std::vector<StatisticDto>& getStatistics();
    bool statisticsIsSet() const;
    void unsetstatistics();
    void setStatistics(const std::vector<StatisticDto>& value);

    /// <summary>
    /// **参数解释：** 总数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXTotal() const;
    bool xTotalIsSet() const;
    void unsetxTotal();
    void setXTotal(const std::string& value);


protected:
    std::vector<CommitStatisticsResultCommitDto> commits_;
    bool commitsIsSet_;
    std::vector<StatisticDto> statistics_;
    bool statisticsIsSet_;
    int32_t total_;
    bool totalIsSet_;
    std::string xTotal_;
    bool xTotalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowCommitStatisticsResponse_H_
