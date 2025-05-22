
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowYamlTemplateRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowYamlTemplateRequest_H_


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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowYamlTemplateRequest
    : public ModelBase
{
public:
    ShowYamlTemplateRequest();
    virtual ~ShowYamlTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowYamlTemplateRequest members

    /// <summary>
    /// 构建的任务ID； 编辑构建任务时，浏览器URL末尾的32位数字、字母组合的字符串。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 默认主机类型
    /// </summary>

    std::string getDefaultHost() const;
    bool defaultHostIsSet() const;
    void unsetdefaultHost();
    void setDefaultHost(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string defaultHost_;
    bool defaultHostIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowYamlTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<ShowYamlTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowYamlTemplateRequest_H_
