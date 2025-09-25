
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginPartQueryVOListAgentPluginInputVO_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginPartQueryVOListAgentPluginInputVO_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/PluginPartQueryVOListAgentPluginInputVO_data.h>
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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PluginPartQueryVOListAgentPluginInputVO
    : public ModelBase
{
public:
    PluginPartQueryVOListAgentPluginInputVO();
    virtual ~PluginPartQueryVOListAgentPluginInputVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginPartQueryVOListAgentPluginInputVO members

    /// <summary>
    /// **参数解释**： 扩展插件名称。 **取值范围**： 1到50位字符。 
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
    /// **参数解释**： 插件输入项详细信息。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<PluginPartQueryVOListAgentPluginInputVO_data>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<PluginPartQueryVOListAgentPluginInputVO_data>& value);


protected:
    std::string pluginName_;
    bool pluginNameIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::vector<PluginPartQueryVOListAgentPluginInputVO_data> data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginPartQueryVOListAgentPluginInputVO_H_
