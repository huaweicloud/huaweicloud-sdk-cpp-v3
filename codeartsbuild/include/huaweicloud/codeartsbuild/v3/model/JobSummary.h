
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobSummary_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobSummary_H_


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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  JobSummary
    : public ModelBase
{
public:
    JobSummary();
    virtual ~JobSummary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobSummary members

    /// <summary>
    /// 构建成功率
    /// </summary>

    int32_t getAvgSuccessRatio() const;
    bool avgSuccessRatioIsSet() const;
    void unsetavgSuccessRatio();
    void setAvgSuccessRatio(int32_t value);

    /// <summary>
    /// 构建总时长
    /// </summary>

    int32_t getBuildNo() const;
    bool buildNoIsSet() const;
    void unsetbuildNo();
    void setBuildNo(int32_t value);

    /// <summary>
    /// 任务总数
    /// </summary>

    int32_t getJobTotal() const;
    bool jobTotalIsSet() const;
    void unsetjobTotal();
    void setJobTotal(int32_t value);

    /// <summary>
    /// 版本
    /// </summary>

    std::string getVersionTotal() const;
    bool versionTotalIsSet() const;
    void unsetversionTotal();
    void setVersionTotal(const std::string& value);


protected:
    int32_t avgSuccessRatio_;
    bool avgSuccessRatioIsSet_;
    int32_t buildNo_;
    bool buildNoIsSet_;
    int32_t jobTotal_;
    bool jobTotalIsSet_;
    std::string versionTotal_;
    bool versionTotalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobSummary_H_
