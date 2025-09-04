
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_MoveJobGroupRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_MoveJobGroupRequestBody_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsbuild/v3/model/MoveJobGroupRequestBody_jobs.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建更新分组返回体
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  MoveJobGroupRequestBody
    : public ModelBase
{
public:
    MoveJobGroupRequestBody();
    virtual ~MoveJobGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MoveJobGroupRequestBody members

    /// <summary>
    /// 任务分组id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 任务组
    /// </summary>

    std::vector<MoveJobGroupRequestBody_jobs>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<MoveJobGroupRequestBody_jobs>& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::vector<MoveJobGroupRequestBody_jobs> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_MoveJobGroupRequestBody_H_
