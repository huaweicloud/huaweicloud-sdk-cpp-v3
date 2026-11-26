
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAssetReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAssetReq_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/AssetActionReq.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：创建模型资产请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateAssetReq
    : public ModelBase
{
public:
    CreateAssetReq();
    virtual ~CreateAssetReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAssetReq members

    /// <summary>
    /// **参数解释**：父资产id。 **约束限制**：1-36位字符，英文字母，数字，中划线。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getParentAssetId() const;
    bool parentAssetIdIsSet() const;
    void unsetparentAssetId();
    void setParentAssetId(const std::string& value);

    /// <summary>
    /// **参数解释**：资产API版本，固定v2。 **约束限制**：固定v2。 **取值范围**：v2。 **默认取值**：v2。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：资产名称。 **约束限制**：1-128位字符，只包含中文、字母、数字、中划线、下划线。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetName() const;
    bool assetNameIsSet() const;
    void unsetassetName();
    void setAssetName(const std::string& value);

    /// <summary>
    /// **参数解释**：用户资产来源。 **约束限制**：不涉及。 **取值范围**：枚举值： - Publish：发布 - Import：导入 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetSource() const;
    bool assetSourceIsSet() const;
    void unsetassetSource();
    void setAssetSource(const std::string& value);

    /// <summary>
    /// **参数解释**：用户资产来源类型。 **约束限制**：不涉及。 **取值范围**：枚举值： - preset_train：预训练 - custom_train：用户训练 - AgenticRL：强化学习 - DATA_CLEANING：数据清洗 - DATA_IMPORT：数据导入 - DATA_ANNOTATION：数据标注 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetSourceType() const;
    bool assetSourceTypeIsSet() const;
    void unsetassetSourceType();
    void setAssetSourceType(const std::string& value);

    /// <summary>
    /// **参数解释**：资产code。 **约束限制**：1-60字符，英文字母，数字，中划线，下划线，点。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetCode() const;
    bool assetCodeIsSet() const;
    void unsetassetCode();
    void setAssetCode(const std::string& value);

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
    /// **参数解释**：资产版本号。 **约束限制**：0-99数字字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetVersion() const;
    bool assetVersionIsSet() const;
    void unsetassetVersion();
    void setAssetVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：资产支持的操作列表，例如监督微调:SFT,LORA微调:LORA,在线部署:ONLINE-DEPLOY,强化学习:AgenticRL。 **约束限制**：不涉及。
    /// </summary>

    std::vector<std::string>& getSupportActions();
    bool supportActionsIsSet() const;
    void unsetsupportActions();
    void setSupportActions(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：资产文件存储地址,支持OBS（对象存储服务）协议的URL和相对路径。 **约束限制**：0-1024位字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetLocation() const;
    bool assetLocationIsSet() const;
    void unsetassetLocation();
    void setAssetLocation(const std::string& value);

    /// <summary>
    /// **参数解释**：资产类型。 **约束限制**：当不传parent_asset_id时必填。 **取值范围**：枚举值: - MODEL: 模型资产 - TEMPLATE: 模板资产 - DATASET: 数据集资产 - WORKFLOW: 工作流资产 - IMAGE: 镜像资产 - ALGORITHM：算法资产 - DATASET_TEMPLATE: 数据集模板资产 - DATA_OPERATOR：算子镜像资产 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetType() const;
    bool assetTypeIsSet() const;
    void unsetassetType();
    void setAssetType(const std::string& value);

    /// <summary>
    /// **参数解释**：需要加入的资产组id。 **约束限制**：1-36位字符，已存在的组id。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetGroupId() const;
    bool assetGroupIdIsSet() const;
    void unsetassetGroupId();
    void setAssetGroupId(const std::string& value);

    /// <summary>
    /// **参数解释**：资产品牌，例如DeepSeek,Qwen,Wan,GPT,Llama,GLM,ERNIE,Mistral,Kimi,Other。 **约束限制**：1-40位字符，仅支持英文字母、数字、下划线和中划线。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetSeries() const;
    bool assetSeriesIsSet() const;
    void unsetassetSeries();
    void setAssetSeries(const std::string& value);

    /// <summary>
    /// **参数解释**：资产能力，为自由文本字符串列表(非严格枚举)。推荐使用以下约定值：例如TextGeneration,ImageUnderstanding,ImageGeneration,VideoGeneration,Other。 **约束限制**：每个元素1-40位字符，仅支持英文字母、数字、下划线和中划线；最多10个元素。
    /// </summary>

    std::vector<std::string>& getAssetCapabilities();
    bool assetCapabilitiesIsSet() const;
    void unsetassetCapabilities();
    void setAssetCapabilities(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：资产可执行操作详情配置。 **约束限制**：不涉及。
    /// </summary>

    std::vector<AssetActionReq>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<AssetActionReq>& value);

    /// <summary>
    /// **参数解释**：模型来源于哪个操作。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getSourceOperation() const;
    bool sourceOperationIsSet() const;
    void unsetsourceOperation();
    void setSourceOperation(const std::string& value);

    /// <summary>
    /// **参数解释**：模型来源作业的名称。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getSourceJobName() const;
    bool sourceJobNameIsSet() const;
    void unsetsourceJobName();
    void setSourceJobName(const std::string& value);

    /// <summary>
    /// **参数解释**：模型来源作业的ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getSourceJobId() const;
    bool sourceJobIdIsSet() const;
    void unsetsourceJobId();
    void setSourceJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：资产状态。 **约束限制**：不涉及。 **取值范围**：枚举值: - online: 上线 - offline: 下线 - waiting: 等待中 **默认取值**：不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：数据集用途。 **约束限制**：1-40位字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getDatasetUsage() const;
    bool datasetUsageIsSet() const;
    void unsetdatasetUsage();
    void setDatasetUsage(const std::string& value);

    /// <summary>
    /// **参数解释**：数据集存储格式，例如JSONL，TXT，MOBI，EPUB，DOCX，PDF。 **约束限制**：0-40位字符。
    /// </summary>

    std::vector<std::string>& getDatasetFileFormats();
    bool datasetFileFormatsIsSet() const;
    void unsetdatasetFileFormats();
    void setDatasetFileFormats(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：数据集模态划分，如音频，图像，视频。 **约束限制**：1-40位字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getDatasetType() const;
    bool datasetTypeIsSet() const;
    void unsetdatasetType();
    void setDatasetType(const std::string& value);

    /// <summary>
    /// **参数解释**：数据集模态细分值，如语义分割。 **约束限制**：1-40位字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getDatasetSubType() const;
    bool datasetSubTypeIsSet() const;
    void unsetdatasetSubType();
    void setDatasetSubType(const std::string& value);

    /// <summary>
    /// **参数解释**：数据集逻辑规范，如盘古格式。 **约束限制**：1-40位字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getDatasetSchemaFormat() const;
    bool datasetSchemaFormatIsSet() const;
    void unsetdatasetSchemaFormat();
    void setDatasetSchemaFormat(const std::string& value);

    /// <summary>
    /// **参数解释**：导入文件来源。 **约束限制**：数据集资产导入时需要。 **取值范围**：枚举值: - OBS: 从OBS导入 - LOCAL: 从本地导入 **默认取值**：不涉及。
    /// </summary>

    std::string getImportFileSource() const;
    bool importFileSourceIsSet() const;
    void unsetimportFileSource();
    void setImportFileSource(const std::string& value);

    /// <summary>
    /// **参数解释**：数据集资产数据源的ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getDataSourceId() const;
    bool dataSourceIdIsSet() const;
    void unsetdataSourceId();
    void setDataSourceId(const std::string& value);


protected:
    std::string parentAssetId_;
    bool parentAssetIdIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string assetName_;
    bool assetNameIsSet_;
    std::string assetSource_;
    bool assetSourceIsSet_;
    std::string assetSourceType_;
    bool assetSourceTypeIsSet_;
    std::string assetCode_;
    bool assetCodeIsSet_;
    std::string assetDesc_;
    bool assetDescIsSet_;
    std::string assetGroupDesc_;
    bool assetGroupDescIsSet_;
    std::string assetVersion_;
    bool assetVersionIsSet_;
    std::vector<std::string> supportActions_;
    bool supportActionsIsSet_;
    std::string assetLocation_;
    bool assetLocationIsSet_;
    std::string assetType_;
    bool assetTypeIsSet_;
    std::string assetGroupId_;
    bool assetGroupIdIsSet_;
    std::string assetSeries_;
    bool assetSeriesIsSet_;
    std::vector<std::string> assetCapabilities_;
    bool assetCapabilitiesIsSet_;
    std::vector<AssetActionReq> actions_;
    bool actionsIsSet_;
    std::string sourceOperation_;
    bool sourceOperationIsSet_;
    std::string sourceJobName_;
    bool sourceJobNameIsSet_;
    std::string sourceJobId_;
    bool sourceJobIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string datasetUsage_;
    bool datasetUsageIsSet_;
    std::vector<std::string> datasetFileFormats_;
    bool datasetFileFormatsIsSet_;
    std::string datasetType_;
    bool datasetTypeIsSet_;
    std::string datasetSubType_;
    bool datasetSubTypeIsSet_;
    std::string datasetSchemaFormat_;
    bool datasetSchemaFormatIsSet_;
    std::string importFileSource_;
    bool importFileSourceIsSet_;
    std::string dataSourceId_;
    bool dataSourceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAssetReq_H_
