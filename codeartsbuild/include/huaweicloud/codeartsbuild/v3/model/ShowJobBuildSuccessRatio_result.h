
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobBuildSuccessRatio_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobBuildSuccessRatio_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobBuildSuccessRatio_result_every_day_report.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 构建成功率
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowJobBuildSuccessRatio_result
    : public ModelBase
{
public:
    ShowJobBuildSuccessRatio_result();
    virtual ~ShowJobBuildSuccessRatio_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobBuildSuccessRatio_result members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 分支
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// 构建成功总数
    /// </summary>

    int32_t getTotalSuccessCount() const;
    bool totalSuccessCountIsSet() const;
    void unsettotalSuccessCount();
    void setTotalSuccessCount(int32_t value);

    /// <summary>
    /// 构建总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 总成功比率分数
    /// </summary>

    std::string getTotalSuccessRatioFraction() const;
    bool totalSuccessRatioFractionIsSet() const;
    void unsettotalSuccessRatioFraction();
    void setTotalSuccessRatioFraction(const std::string& value);

    /// <summary>
    /// 每日构建成功率
    /// </summary>

    std::vector<ShowJobBuildSuccessRatio_result_every_day_report>& getEveryDayReport();
    bool everyDayReportIsSet() const;
    void unseteveryDayReport();
    void setEveryDayReport(const std::vector<ShowJobBuildSuccessRatio_result_every_day_report>& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string branch_;
    bool branchIsSet_;
    int32_t totalSuccessCount_;
    bool totalSuccessCountIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::string totalSuccessRatioFraction_;
    bool totalSuccessRatioFractionIsSet_;
    std::vector<ShowJobBuildSuccessRatio_result_every_day_report> everyDayReport_;
    bool everyDayReportIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobBuildSuccessRatio_result_H_
