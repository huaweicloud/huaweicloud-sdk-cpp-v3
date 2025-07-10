
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobPipelineInfoRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobPipelineInfoRequest_H_


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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowJobPipelineInfoRequest
    : public ModelBase
{
public:
    ShowJobPipelineInfoRequest();
    virtual ~ShowJobPipelineInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobPipelineInfoRequest members

    /// <summary>
    /// 构建的任务ID； 编辑构建任务时，浏览器URL末尾的32位数字、字母组合的字符串。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 输入\&quot;true\&quot;或者\&quot;false\&quot;来控制返回参数是不是完整的
    /// </summary>

    std::string getAll() const;
    bool allIsSet() const;
    void unsetall();
    void setAll(const std::string& value);

    /// <summary>
    /// 移除未使用的参数
    /// </summary>

    std::string getCheckParamUsed() const;
    bool checkParamUsedIsSet() const;
    void unsetcheckParamUsed();
    void setCheckParamUsed(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string all_;
    bool allIsSet_;
    std::string checkParamUsed_;
    bool checkParamUsedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowJobPipelineInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ShowJobPipelineInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowJobPipelineInfoRequest_H_
