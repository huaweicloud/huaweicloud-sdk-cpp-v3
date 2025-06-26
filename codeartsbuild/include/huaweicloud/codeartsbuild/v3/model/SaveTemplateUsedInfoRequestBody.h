
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_SaveTemplateUsedInfoRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_SaveTemplateUsedInfoRequestBody_H_


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
/// 保存模板使用记录接口请求体
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  SaveTemplateUsedInfoRequestBody
    : public ModelBase
{
public:
    SaveTemplateUsedInfoRequestBody();
    virtual ~SaveTemplateUsedInfoRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SaveTemplateUsedInfoRequestBody members

    /// <summary>
    /// 构建任务ID；编辑构建任务时，浏览器URL末尾的32位数字、字母组合的字符串
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 构建模版ID
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_SaveTemplateUsedInfoRequestBody_H_
