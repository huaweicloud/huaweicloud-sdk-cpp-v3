
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateTemplate_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateTemplate_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/CreateTemplateSteps.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 模板中构建执行步骤列表
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  CreateTemplate
    : public ModelBase
{
public:
    CreateTemplate();
    virtual ~CreateTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTemplate members

    /// <summary>
    /// 构建执行的步骤
    /// </summary>

    std::vector<CreateTemplateSteps>& getSteps();
    bool stepsIsSet() const;
    void unsetsteps();
    void setSteps(const std::vector<CreateTemplateSteps>& value);


protected:
    std::vector<CreateTemplateSteps> steps_;
    bool stepsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateTemplate_H_
