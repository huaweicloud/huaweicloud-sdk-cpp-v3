
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateAssetReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateAssetReq_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/Properties.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新资产请求体
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateAssetReq
    : public ModelBase
{
public:
    UpdateAssetReq();
    virtual ~UpdateAssetReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAssetReq members

    /// <summary>
    /// **参数解释**：资产名称。 **约束限制**：1-128位字符，只包含中文、字母、数字、中划线、下划线。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetName() const;
    bool assetNameIsSet() const;
    void unsetassetName();
    void setAssetName(const std::string& value);

    /// <summary>
    /// **参数解释**：资产描述。 **约束限制**：0-512位字符，不能包含英文尖括号（即 &lt; 或 &gt;）。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetDesc() const;
    bool assetDescIsSet() const;
    void unsetassetDesc();
    void setAssetDesc(const std::string& value);

    /// <summary>
    /// **参数解释**：资产组描述。 **约束限制**：0-512位字符，不能包含英文尖括号（即 &lt; 或 &gt;）。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetGroupDesc() const;
    bool assetGroupDescIsSet() const;
    void unsetassetGroupDesc();
    void setAssetGroupDesc(const std::string& value);

    /// <summary>
    /// **参数解释**：资产品牌，例如DeepSeek,Qwen,Wan,GPT,Llama,GLM,ERNIE,Mistral,Kimi,Other。 **约束限制**：1-40位字符，仅支持英文字母、数字、下划线和中划线。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetSeries() const;
    bool assetSeriesIsSet() const;
    void unsetassetSeries();
    void setAssetSeries(const std::string& value);

    /// <summary>
    /// **参数解释**：资产能力，为自由文本字符串列表(非严格枚举)。推荐使用以下约定值：例如TextGeneration,ImageUnderstanding,ImageGeneration,VideoGeneration,AgenticRL,Other。 **约束限制**：每个元素1-40位字符，仅支持英文字母、数字、下划线和中划线；最多10个元素。
    /// </summary>

    std::vector<std::string>& getAssetCapabilities();
    bool assetCapabilitiesIsSet() const;
    void unsetassetCapabilities();
    void setAssetCapabilities(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：数据集资产的上下线状态。 **约束限制**：不涉及。 **取值范围**：枚举值： - online：上线 - offline：下线 - waiting: 等待中 **默认取值**：不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：资产是否可用。 **约束限制**：不涉及。 **取值范围**： - true：可用 - false：不可用 **默认取值**：不涉及。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// **参数解释**：数据集资产是否被软删除。 **约束限制**：不涉及。 **取值范围**： - true：已删除 - false：未删除 **默认取值**：不涉及。
    /// </summary>

    bool isIsDeleted() const;
    bool isDeletedIsSet() const;
    void unsetisDeleted();
    void setIsDeleted(bool value);

    /// <summary>
    /// **参数解释**：资产tag。 **约束限制**：不涉及。
    /// </summary>

    std::map<std::string, std::vector<std::string>>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::map<std::string, std::vector<std::string>>& value);

    /// <summary>
    /// 
    /// </summary>

    Properties getProperties() const;
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const Properties& value);


protected:
    std::string assetName_;
    bool assetNameIsSet_;
    std::string assetDesc_;
    bool assetDescIsSet_;
    std::string assetGroupDesc_;
    bool assetGroupDescIsSet_;
    std::string assetSeries_;
    bool assetSeriesIsSet_;
    std::vector<std::string> assetCapabilities_;
    bool assetCapabilitiesIsSet_;
    std::string status_;
    bool statusIsSet_;
    bool enabled_;
    bool enabledIsSet_;
    bool isDeleted_;
    bool isDeletedIsSet_;
    std::map<std::string, std::vector<std::string>> tags_;
    bool tagsIsSet_;
    Properties properties_;
    bool propertiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateAssetReq_H_
