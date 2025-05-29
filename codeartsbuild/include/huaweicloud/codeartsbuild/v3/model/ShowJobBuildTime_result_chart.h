
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobBuildTime_result_chart_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobBuildTime_result_chart_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowJobBuildTime_result_chart
    : public ModelBase
{
public:
    ShowJobBuildTime_result_chart();
    virtual ~ShowJobBuildTime_result_chart();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobBuildTime_result_chart members

    /// <summary>
    /// 构建每日编号
    /// </summary>

    std::string getDailyBuildNumber() const;
    bool dailyBuildNumberIsSet() const;
    void unsetdailyBuildNumber();
    void setDailyBuildNumber(const std::string& value);

    /// <summary>
    /// 构建编号
    /// </summary>

    int32_t getBuildNumber() const;
    bool buildNumberIsSet() const;
    void unsetbuildNumber();
    void setBuildNumber(int32_t value);

    /// <summary>
    /// 步骤执行时长，单位s
    /// </summary>

    int32_t getBuildTime() const;
    bool buildTimeIsSet() const;
    void unsetbuildTime();
    void setBuildTime(int32_t value);

    /// <summary>
    /// 构建结果
    /// </summary>

    std::string getBuildResult() const;
    bool buildResultIsSet() const;
    void unsetbuildResult();
    void setBuildResult(const std::string& value);


protected:
    std::string dailyBuildNumber_;
    bool dailyBuildNumberIsSet_;
    int32_t buildNumber_;
    bool buildNumberIsSet_;
    int32_t buildTime_;
    bool buildTimeIsSet_;
    std::string buildResult_;
    bool buildResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobBuildTime_result_chart_H_
