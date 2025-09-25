
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_AgentPluginInfoQueryDTO_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_AgentPluginInfoQueryDTO_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  AgentPluginInfoQueryDTO
    : public ModelBase
{
public:
    AgentPluginInfoQueryDTO();
    virtual ~AgentPluginInfoQueryDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AgentPluginInfoQueryDTO members

    /// <summary>
    /// **参数解释**： 可选的查询条件-插件名。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// **参数解释**： 可选的查询条件-匹配名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getRegexName() const;
    bool regexNameIsSet() const;
    void unsetregexName();
    void setRegexName(const std::string& value);

    /// <summary>
    /// **参数解释**： 维护者。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getMaintainer() const;
    bool maintainerIsSet() const;
    void unsetmaintainer();
    void setMaintainer(const std::string& value);

    /// <summary>
    /// **参数解释**： 业务类型。 **约束限制**： 不涉及。 **取值范围**： - Build。 - Gate。 - Deploy。 - Test。 - Normal。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getBusinessType();
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 插件属性。 **约束限制**： 不涉及。 **取值范围**： - official：自定义插件。 - custom：基础插件。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPluginAttribution() const;
    bool pluginAttributionIsSet() const;
    void unsetpluginAttribution();
    void setPluginAttribution(const std::string& value);


protected:
    std::string pluginName_;
    bool pluginNameIsSet_;
    std::string regexName_;
    bool regexNameIsSet_;
    std::string maintainer_;
    bool maintainerIsSet_;
    std::vector<std::string> businessType_;
    bool businessTypeIsSet_;
    std::string pluginAttribution_;
    bool pluginAttributionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_AgentPluginInfoQueryDTO_H_
