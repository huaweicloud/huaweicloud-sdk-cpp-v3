
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListJunitCoverageSummary_result_unit_summary_list_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListJunitCoverageSummary_result_unit_summary_list_H_


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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListJunitCoverageSummary_result_unit_summary_list
    : public ModelBase
{
public:
    ListJunitCoverageSummary_result_unit_summary_list();
    virtual ~ListJunitCoverageSummary_result_unit_summary_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListJunitCoverageSummary_result_unit_summary_list members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 构建任务的构建编号，从1开始，每次构建递增1
    /// </summary>

    int32_t getBuildNo() const;
    bool buildNoIsSet() const;
    void unsetbuildNo();
    void setBuildNo(int32_t value);

    /// <summary>
    /// stage名称
    /// </summary>

    std::string getStageName() const;
    bool stageNameIsSet() const;
    void unsetstageName();
    void setStageName(const std::string& value);

    /// <summary>
    /// 资源ID，下载覆盖率报告时使用
    /// </summary>

    std::string getRootId() const;
    bool rootIdIsSet() const;
    void unsetrootId();
    void setRootId(const std::string& value);

    /// <summary>
    /// 租户所在region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    int32_t buildNo_;
    bool buildNoIsSet_;
    std::string stageName_;
    bool stageNameIsSet_;
    std::string rootId_;
    bool rootIdIsSet_;
    std::string region_;
    bool regionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListJunitCoverageSummary_result_unit_summary_list_H_
