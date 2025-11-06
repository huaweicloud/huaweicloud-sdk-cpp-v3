
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoCommitStatistics_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoCommitStatistics_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/RepoStatistics.h>
#include <huaweicloud/codeartsrepo/v3/model/RepoStatisticsEvent.h>
#include <vector>
#include <huaweicloud/codeartsrepo/v3/model/RepoDailyCodeline.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 仓库统计信息
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  RepoCommitStatistics
    : public ModelBase
{
public:
    RepoCommitStatistics();
    virtual ~RepoCommitStatistics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoCommitStatistics members

    /// <summary>
    /// 仓库总提交次数
    /// </summary>

    int32_t getAllBranchCommitsCount() const;
    bool allBranchCommitsCountIsSet() const;
    void unsetallBranchCommitsCount();
    void setAllBranchCommitsCount(int32_t value);

    /// <summary>
    /// 近15日每日代码提交行数
    /// </summary>

    std::vector<RepoDailyCodeline>& getCodelines();
    bool codelinesIsSet() const;
    void unsetcodelines();
    void setCodelines(const std::vector<RepoDailyCodeline>& value);

    /// <summary>
    /// 对应分支仓库总提交次数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    RepoStatisticsEvent getEvent() const;
    bool eventIsSet() const;
    void unsetevent();
    void setEvent(const RepoStatisticsEvent& value);

    /// <summary>
    /// 仓库统计列表
    /// </summary>

    std::vector<RepoStatistics>& getStatistics();
    bool statisticsIsSet() const;
    void unsetstatistics();
    void setStatistics(const std::vector<RepoStatistics>& value);

    /// <summary>
    /// 仓库统计次数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    int32_t allBranchCommitsCount_;
    bool allBranchCommitsCountIsSet_;
    std::vector<RepoDailyCodeline> codelines_;
    bool codelinesIsSet_;
    int32_t count_;
    bool countIsSet_;
    RepoStatisticsEvent event_;
    bool eventIsSet_;
    std::vector<RepoStatistics> statistics_;
    bool statisticsIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoCommitStatistics_H_
