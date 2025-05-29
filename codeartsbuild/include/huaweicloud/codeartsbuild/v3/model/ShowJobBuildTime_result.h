
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobBuildTime_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobBuildTime_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/ShowJobBuildTime_result_chart.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 返回结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowJobBuildTime_result
    : public ModelBase
{
public:
    ShowJobBuildTime_result();
    virtual ~ShowJobBuildTime_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobBuildTime_result members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 平均构建时长
    /// </summary>

    double getAvgBuildTime() const;
    bool avgBuildTimeIsSet() const;
    void unsetavgBuildTime();
    void setAvgBuildTime(double value);

    /// <summary>
    /// 最长时间
    /// </summary>

    int64_t getMaxBuildTime() const;
    bool maxBuildTimeIsSet() const;
    void unsetmaxBuildTime();
    void setMaxBuildTime(int64_t value);

    /// <summary>
    /// 最短时间
    /// </summary>

    int64_t getMinBuildTime() const;
    bool minBuildTimeIsSet() const;
    void unsetminBuildTime();
    void setMinBuildTime(int64_t value);

    /// <summary>
    /// 每日构建数据
    /// </summary>

    std::vector<ShowJobBuildTime_result_chart>& getChart();
    bool chartIsSet() const;
    void unsetchart();
    void setChart(const std::vector<ShowJobBuildTime_result_chart>& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    double avgBuildTime_;
    bool avgBuildTimeIsSet_;
    int64_t maxBuildTime_;
    bool maxBuildTimeIsSet_;
    int64_t minBuildTime_;
    bool minBuildTimeIsSet_;
    std::vector<ShowJobBuildTime_result_chart> chart_;
    bool chartIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobBuildTime_result_H_
