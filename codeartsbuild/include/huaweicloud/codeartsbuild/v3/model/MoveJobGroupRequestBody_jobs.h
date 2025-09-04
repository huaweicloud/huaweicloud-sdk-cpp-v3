
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_MoveJobGroupRequestBody_jobs_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_MoveJobGroupRequestBody_jobs_H_


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
/// 任务组
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  MoveJobGroupRequestBody_jobs
    : public ModelBase
{
public:
    MoveJobGroupRequestBody_jobs();
    virtual ~MoveJobGroupRequestBody_jobs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MoveJobGroupRequestBody_jobs members

    /// <summary>
    /// 任务编号
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_MoveJobGroupRequestBody_jobs_H_
