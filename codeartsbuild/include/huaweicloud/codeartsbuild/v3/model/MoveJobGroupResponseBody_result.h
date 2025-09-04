
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_MoveJobGroupResponseBody_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_MoveJobGroupResponseBody_result_H_


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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  MoveJobGroupResponseBody_result
    : public ModelBase
{
public:
    MoveJobGroupResponseBody_result();
    virtual ~MoveJobGroupResponseBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MoveJobGroupResponseBody_result members

    /// <summary>
    /// 任务编号
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 分组路径
    /// </summary>

    std::string getGroupPathId() const;
    bool groupPathIdIsSet() const;
    void unsetgroupPathId();
    void setGroupPathId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string groupPathId_;
    bool groupPathIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_MoveJobGroupResponseBody_result_H_
