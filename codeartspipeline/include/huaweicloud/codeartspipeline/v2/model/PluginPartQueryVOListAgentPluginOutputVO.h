
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginPartQueryVOListAgentPluginOutputVO_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginPartQueryVOListAgentPluginOutputVO_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/PluginPartQueryVOListAgentPluginOutputVO_data.h>
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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PluginPartQueryVOListAgentPluginOutputVO
    : public ModelBase
{
public:
    PluginPartQueryVOListAgentPluginOutputVO();
    virtual ~PluginPartQueryVOListAgentPluginOutputVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginPartQueryVOListAgentPluginOutputVO members

    /// <summary>
    /// **参数解释**： 扩展插件名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件展示名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件输出详细信息。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<PluginPartQueryVOListAgentPluginOutputVO_data>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<PluginPartQueryVOListAgentPluginOutputVO_data>& value);


protected:
    std::string pluginName_;
    bool pluginNameIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::vector<PluginPartQueryVOListAgentPluginOutputVO_data> data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginPartQueryVOListAgentPluginOutputVO_H_
