
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DeleteBuildJobResponseBody_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DeleteBuildJobResponseBody_result_H_


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
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  DeleteBuildJobResponseBody_result
    : public ModelBase
{
public:
    DeleteBuildJobResponseBody_result();
    virtual ~DeleteBuildJobResponseBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteBuildJobResponseBody_result members

    /// <summary>
    /// 构建任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 构建任务所在项目的ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DeleteBuildJobResponseBody_result_H_
