
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowRunningStatus_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowRunningStatus_result_H_


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
/// 构建成功率
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowRunningStatus_result
    : public ModelBase
{
public:
    ShowRunningStatus_result();
    virtual ~ShowRunningStatus_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRunningStatus_result members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getLastJobId() const;
    bool lastJobIdIsSet() const;
    void unsetlastJobId();
    void setLastJobId(const std::string& value);

    /// <summary>
    /// 最新构建编号
    /// </summary>

    std::string getLastBuildNo() const;
    bool lastBuildNoIsSet() const;
    void unsetlastBuildNo();
    void setLastBuildNo(const std::string& value);

    /// <summary>
    /// 最新构建状态
    /// </summary>

    std::string getLastBuildStatus() const;
    bool lastBuildStatusIsSet() const;
    void unsetlastBuildStatus();
    void setLastBuildStatus(const std::string& value);

    /// <summary>
    /// 是否在运行中
    /// </summary>

    bool isIsRunning() const;
    bool isRunningIsSet() const;
    void unsetisRunning();
    void setIsRunning(bool value);


protected:
    std::string lastJobId_;
    bool lastJobIdIsSet_;
    std::string lastBuildNo_;
    bool lastBuildNoIsSet_;
    std::string lastBuildStatus_;
    bool lastBuildStatusIsSet_;
    bool isRunning_;
    bool isRunningIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowRunningStatus_result_H_
