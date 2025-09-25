
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginDTO_execution_info_inner_execution_info_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginDTO_execution_info_inner_execution_info_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/PluginDTO_execution_info_inner_execution_info_steps.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 插件执行信息。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PluginDTO_execution_info_inner_execution_info
    : public ModelBase
{
public:
    PluginDTO_execution_info_inner_execution_info();
    virtual ~PluginDTO_execution_info_inner_execution_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginDTO_execution_info_inner_execution_info members

    /// <summary>
    /// **参数解释**： 插件类型。 **约束限制**： 不涉及。 **取值范围**： CONTAINER, ZIP, SHELL, COMPOSITE。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getExecutionType() const;
    bool executionTypeIsSet() const;
    void unsetexecutionType();
    void setExecutionType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<PluginDTO_execution_info_inner_execution_info_steps>& getSteps();
    bool stepsIsSet() const;
    void unsetsteps();
    void setSteps(const std::vector<PluginDTO_execution_info_inner_execution_info_steps>& value);


protected:
    std::string executionType_;
    bool executionTypeIsSet_;
    std::vector<PluginDTO_execution_info_inner_execution_info_steps> steps_;
    bool stepsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginDTO_execution_info_inner_execution_info_H_
