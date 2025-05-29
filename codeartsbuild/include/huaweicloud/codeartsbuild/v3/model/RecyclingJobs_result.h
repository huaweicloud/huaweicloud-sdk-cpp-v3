
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RecyclingJobs_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RecyclingJobs_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/RecyclingJob.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  RecyclingJobs_result
    : public ModelBase
{
public:
    RecyclingJobs_result();
    virtual ~RecyclingJobs_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecyclingJobs_result members

    /// <summary>
    /// 任务保留时间
    /// </summary>

    int32_t getKeepTime() const;
    bool keepTimeIsSet() const;
    void unsetkeepTime();
    void setKeepTime(int32_t value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 任务列表
    /// </summary>

    std::vector<RecyclingJob>& getJobList();
    bool jobListIsSet() const;
    void unsetjobList();
    void setJobList(const std::vector<RecyclingJob>& value);


protected:
    int32_t keepTime_;
    bool keepTimeIsSet_;
    int32_t total_;
    bool totalIsSet_;
    std::vector<RecyclingJob> jobList_;
    bool jobListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RecyclingJobs_result_H_
