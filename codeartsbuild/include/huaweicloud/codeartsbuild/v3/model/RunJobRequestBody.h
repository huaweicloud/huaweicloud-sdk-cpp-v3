
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RunJobRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RunJobRequestBody_H_

#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/Scm.h>
#include <huaweicloud/codeartsbuild/v3/model/ParameterItem.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 执行任务接口请求体
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  RunJobRequestBody
    : public ModelBase
{
public:
    RunJobRequestBody();
    virtual ~RunJobRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RunJobRequestBody members

    /// <summary>
    /// 构建任务ID；编辑构建任务时，浏览器URL末尾的32位数字、字母组合的字符串
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 自定义参数
    /// </summary>

    std::vector<ParameterItem>& getParameter();
    bool parameterIsSet() const;
    void unsetparameter();
    void setParameter(const std::vector<ParameterItem>& value);

    /// <summary>
    /// 
    /// </summary>

    Scm getScm() const;
    bool scmIsSet() const;
    void unsetscm();
    void setScm(const Scm& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::vector<ParameterItem> parameter_;
    bool parameterIsSet_;
    Scm scm_;
    bool scmIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RunJobRequestBody_H_
