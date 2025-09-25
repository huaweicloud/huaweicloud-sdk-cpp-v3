
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StagePluginsQueryDTO_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StagePluginsQueryDTO_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  StagePluginsQueryDTO
    : public ModelBase
{
public:
    StagePluginsQueryDTO();
    virtual ~StagePluginsQueryDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StagePluginsQueryDTO members

    /// <summary>
    /// **参数解释**： 用于区分插件为流水线可使用/模板可使用。 **约束限制**： 不涉及。 **取值范围**： - pipeline：流水线可使用。 - template：模板可使用。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getUseCondition() const;
    bool useConditionIsSet() const;
    void unsetuseCondition();
    void setUseCondition(const std::string& value);

    /// <summary>
    /// **参数解释**： 微服务ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getCompId() const;
    bool compIdIsSet() const;
    void unsetcompId();
    void setCompId(const std::string& value);

    /// <summary>
    /// **参数解释**： 微服务名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getCompName() const;
    bool compNameIsSet() const;
    void unsetcompName();
    void setCompName(const std::string& value);

    /// <summary>
    /// **参数解释**： 局点ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getCloudId() const;
    bool cloudIdIsSet() const;
    void unsetcloudId();
    void setCloudId(const std::string& value);

    /// <summary>
    /// **参数解释**： 策略ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getStrategyId() const;
    bool strategyIdIsSet() const;
    void unsetstrategyId();
    void setStrategyId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线类型。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否发布流水线。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPublishTab() const;
    bool publishTabIsSet() const;
    void unsetpublishTab();
    void setPublishTab(const std::string& value);

    /// <summary>
    /// **参数解释**： 部署平台。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPlatform() const;
    bool platformIsSet() const;
    void unsetplatform();
    void setPlatform(const std::string& value);

    /// <summary>
    /// **参数解释**： 组件类型。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getCompExtendType() const;
    bool compExtendTypeIsSet() const;
    void unsetcompExtendType();
    void setCompExtendType(const std::string& value);

    /// <summary>
    /// **参数解释**： 部署类型。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDeployType() const;
    bool deployTypeIsSet() const;
    void unsetdeployType();
    void setDeployType(const std::string& value);


protected:
    std::string useCondition_;
    bool useConditionIsSet_;
    std::string compId_;
    bool compIdIsSet_;
    std::string compName_;
    bool compNameIsSet_;
    std::string cloudId_;
    bool cloudIdIsSet_;
    std::string strategyId_;
    bool strategyIdIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string publishTab_;
    bool publishTabIsSet_;
    std::string platform_;
    bool platformIsSet_;
    std::string compExtendType_;
    bool compExtendTypeIsSet_;
    std::string deployType_;
    bool deployTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_StagePluginsQueryDTO_H_
