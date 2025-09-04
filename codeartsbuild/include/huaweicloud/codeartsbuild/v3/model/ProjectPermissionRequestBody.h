
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ProjectPermissionRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ProjectPermissionRequestBody_H_


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
/// 创建更新分组返回体
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ProjectPermissionRequestBody
    : public ModelBase
{
public:
    ProjectPermissionRequestBody();
    virtual ~ProjectPermissionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProjectPermissionRequestBody members

    /// <summary>
    /// **参数解释**： 填写需要查询构建历史列表的构建任务ID。获取方法：在构建任务详情页，拷贝浏览器URL末尾的32位数字、字母组合的字符串，即为构建任务ID。 **约束限制**： 不涉及。 **取值范围**： 只能是英文字母和数字，长度为32个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**： CodeArts项目ID。获取方式请参考[获取CodeArts项目ID](https://support.huaweicloud.com/api-codeci/cloudbuild_03_0022.html)。 **约束限制**： 不涉及。 **取值范围**： 32位数字、字母组合的字符串。 **默认取值**： 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否同步最新一次项目权限。 **约束限制**： 不涉及。 **取值范围**： ● true：使用项目级权限。 ● false：不使用项目级权限。 **默认取值**： 不涉及。
    /// </summary>

    bool isProjectSwitch() const;
    bool projectSwitchIsSet() const;
    void unsetprojectSwitch();
    void setProjectSwitch(bool value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    bool projectSwitch_;
    bool projectSwitchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ProjectPermissionRequestBody_H_
