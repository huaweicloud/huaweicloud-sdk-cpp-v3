
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginPartQueryVOListAgentPluginOutputVO_data_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginPartQueryVOListAgentPluginOutputVO_data_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PluginPartQueryVOListAgentPluginOutputVO_data
    : public ModelBase
{
public:
    PluginPartQueryVOListAgentPluginOutputVO_data();
    virtual ~PluginPartQueryVOListAgentPluginOutputVO_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginPartQueryVOListAgentPluginOutputVO_data members

    /// <summary>
    /// **参数解释**： 唯一ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getUniqueId() const;
    bool uniqueIdIsSet() const;
    void unsetuniqueId();
    void setUniqueId(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件版本号。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 租户ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 定义的插件输出名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getOutputKey() const;
    bool outputKeyIsSet() const;
    void unsetoutputKey();
    void setOutputKey(const std::string& value);

    /// <summary>
    /// **参数解释**： 定义的插件输出内容。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getOutputValue() const;
    bool outputValueIsSet() const;
    void unsetoutputValue();
    void setOutputValue(const std::string& value);


protected:
    std::string uniqueId_;
    bool uniqueIdIsSet_;
    std::string pluginName_;
    bool pluginNameIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string outputKey_;
    bool outputKeyIsSet_;
    std::string outputValue_;
    bool outputValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginPartQueryVOListAgentPluginOutputVO_data_H_
