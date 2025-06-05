
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CheckJobNameIsExistsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CheckJobNameIsExistsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  CheckJobNameIsExistsRequest
    : public ModelBase
{
public:
    CheckJobNameIsExistsRequest();
    virtual ~CheckJobNameIsExistsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckJobNameIsExistsRequest members

    /// <summary>
    /// CodeArts项目ID，32位数字、小写字母组合。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CheckJobNameIsExistsRequest& dereference_from_shared_ptr(std::shared_ptr<CheckJobNameIsExistsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CheckJobNameIsExistsRequest_H_
