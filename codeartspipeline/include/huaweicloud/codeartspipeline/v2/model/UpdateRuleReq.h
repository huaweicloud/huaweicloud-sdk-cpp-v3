
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UpdateRuleReq_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UpdateRuleReq_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/RuleContent.h>
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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  UpdateRuleReq
    : public ModelBase
{
public:
    UpdateRuleReq();
    virtual ~UpdateRuleReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRuleReq members

    /// <summary>
    /// **参数解释**： 规则类型。 **约束限制**： 不涉及。 **取值范围**： - Build：构建。 - Gate：代码检查。 - Test：测试。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件唯一ID。可以通过[查询插件版本详情](ShowPluginVersion.xml)接口，获取响应参数中unique_id。 **约束限制**： 不涉及。 **取值范围**： 32位字符，由数字和字母组成。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPluginId() const;
    bool pluginIdIsSet() const;
    void unsetpluginId();
    void setPluginId(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件名称。 **约束限制**： 仅支持输入大小写英文字母、数字、&#39;-&#39;、&#39;_&#39;。 **取值范围**： 1到50位字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件版本号。 **约束限制**： 仅支持输入大小写英文字母、数字、&#39;-&#39;、&#39;_&#39;。 **取值范围**： 1到50位字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPluginVersion() const;
    bool pluginVersionIsSet() const;
    void unsetpluginVersion();
    void setPluginVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则详细属性。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<RuleContent>& getContent();
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::vector<RuleContent>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string pluginId_;
    bool pluginIdIsSet_;
    std::string pluginName_;
    bool pluginNameIsSet_;
    std::string pluginVersion_;
    bool pluginVersionIsSet_;
    std::vector<RuleContent> content_;
    bool contentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UpdateRuleReq_H_
