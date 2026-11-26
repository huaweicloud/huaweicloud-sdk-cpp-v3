
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListAssetRequest
    : public ModelBase
{
public:
    ListAssetRequest();
    virtual ~ListAssetRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssetRequest members

    /// <summary>
    /// **参数解释**：排序方向。 **约束限制**：不涉及。 **取值范围**： 枚举值： - ASC: 升序 - DESC: 降序。 **默认取值**：DESC。
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// **参数解释**：排序字段。 **约束限制**：不涉及。 **取值范围**：枚举值： - created_at: 创建时间 - updated_at: 更新时间。 **默认取值**：created_at。
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// **参数解释**：限制量，单次查询总量，必须由数字组成。 **约束限制**：不涉及。 **取值范围**：1-1000。 **默认取值**：100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**：偏移量，查询起始偏移，必须由数字组成。 **约束限制**：不涉及。 **取值范围**0-100000000。 **默认取值**：0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc)未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：资产名称,支持英文字母，数字，中划线，下划线，点，空格，中文汉字。 **约束限制**：1-128位字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetName() const;
    bool assetNameIsSet() const;
    void unsetassetName();
    void setAssetName(const std::string& value);

    /// <summary>
    /// **参数解释**: 资产类型。 **约束限制**: 枚举值: - MODEL: 模型资产 - TEMPLATE: 模板资产 - DATASET: 数据集资产 - WORKFLOW: 工作流资产 - IMAGE: 镜像资产 - ALGORITHM: 算法资产 - DATASET_TEMPLATE: 数据集模板资产 - DATA_OPERATOR: 算子镜像资产 **默认取值**: 不涉及。
    /// </summary>

    std::vector<std::string>& getAssetType();
    bool assetTypeIsSet() const;
    void unsetassetType();
    void setAssetType(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：资产来源。 **约束限制**：不涉及。 **取值范围**：枚举值: - Preset: 预置资产 - Publish: 用户发布资产 - Import: 用户导入资产 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetSource() const;
    bool assetSourceIsSet() const;
    void unsetassetSource();
    void setAssetSource(const std::string& value);

    /// <summary>
    /// **参数解释**：用户资产来源。 **约束限制**：1-60位字符，英文字母，数字，下划线、中划线。 **取值范围**：preset_train：精调，custom_train：自定义训练，AgenticRL：强化学习。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetSourceType() const;
    bool assetSourceTypeIsSet() const;
    void unsetassetSourceType();
    void setAssetSourceType(const std::string& value);

    /// <summary>
    /// **参数解释**：资产编码。 **约束限制**：1-60字母，数字，中划线，下划线，点。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetCode() const;
    bool assetCodeIsSet() const;
    void unsetassetCode();
    void setAssetCode(const std::string& value);

    /// <summary>
    /// **参数解释**：资产版本。 **约束限制**：数字或格式为x.y.z，x,y,z为数字。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetVersion() const;
    bool assetVersionIsSet() const;
    void unsetassetVersion();
    void setAssetVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：资产归属的资产组id，带有该字段将在同一个资产库中所有版本进行条件筛选，否则会筛选所有资产库中的主版本。 **约束限制**：1-36字母数字，下划线，中划线。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetGroupId() const;
    bool assetGroupIdIsSet() const;
    void unsetassetGroupId();
    void setAssetGroupId(const std::string& value);

    /// <summary>
    /// **参数解释**：是否过滤所有版本。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：false。
    /// </summary>

    bool isFilterAllVersion() const;
    bool filterAllVersionIsSet() const;
    void unsetfilterAllVersion();
    void setFilterAllVersion(bool value);

    /// <summary>
    /// **参数解释**：资产支持的操作列表，例如SFT：监督微调，LORA微调:LORA，在线部署：ONLINE-DEPLOY，强化学习：AgenticRL。 **约束限制**：每个元素1-30位字符，英文字母，数字，下划线，中划线；最多10个元素。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::vector<std::string>& getSupportActions();
    bool supportActionsIsSet() const;
    void unsetsupportActions();
    void setSupportActions(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：检索资产时的标签，根据不同资产类型，条件可能不同。 - 需要匹配一个key对应一个value时格式为key&#x3D;value - 需要匹配一个key对应多个value中的任意一个时格式为key&#x3D;value1|value2|value3 - 需要匹配多个条件同时满足时key1&#x3D;value1,key2&#x3D;value2 - 如果需要实现模糊匹配格式为key1%&#x3D;value2（右匹配）key2&#x3D;%value2（左匹配） **约束限制**：不涉及。
    /// </summary>

    std::vector<std::string>& getTag();
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：过滤我创建的资产，boolean类型，取值true：查询我创建的资产，取值false：查询所有资产。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    bool isIsMine() const;
    bool isMineIsSet() const;
    void unsetisMine();
    void setIsMine(bool value);

    /// <summary>
    /// **参数解释**：列表查询是否包含action。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    bool isWithActions() const;
    bool withActionsIsSet() const;
    void unsetwithActions();
    void setWithActions(bool value);

    /// <summary>
    /// **参数解释**：资产品牌，例如DeepSeek,Qwen,Wan,GPT,Llama,GLM,ERNIE,Mistral,Kimi,Other。 **约束限制**：不涉及。 **取值范围**：0-100位。 **默认取值**：不涉及。
    /// </summary>

    std::string getAssetSeries() const;
    bool assetSeriesIsSet() const;
    void unsetassetSeries();
    void setAssetSeries(const std::string& value);

    /// <summary>
    /// **参数解释**：资产能力，为自由文本字符串列表(非严格枚举)。推荐使用以下约定值：例如TextGeneration,ImageUnderstanding,ImageGeneration,VideoGeneration,AgenticRL,Other。 **约束限制**：每个元素为1-40位字符；最多10个元素。
    /// </summary>

    std::vector<std::string>& getAssetCapabilities();
    bool assetCapabilitiesIsSet() const;
    void unsetassetCapabilities();
    void setAssetCapabilities(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：资产场景，如DeepThinking。 **约束限制**：不涉及。
    /// </summary>

    std::vector<std::string>& getAssetScenes();
    bool assetScenesIsSet() const;
    void unsetassetScenes();
    void setAssetScenes(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：根资产id。 **约束限制**：1-36个字符，英文字母，数字，中划线，下划线。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getRootAssetId() const;
    bool rootAssetIdIsSet() const;
    void unsetrootAssetId();
    void setRootAssetId(const std::string& value);

    /// <summary>
    /// **参数解释**：父资产id。 **约束限制**：1-36个字符，英文字母，数字，中划线，下划线。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getParentAssetId() const;
    bool parentAssetIdIsSet() const;
    void unsetparentAssetId();
    void setParentAssetId(const std::string& value);

    /// <summary>
    /// **参数解释**：是否返回软删除的资产。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：false。
    /// </summary>

    bool isIsDeleted() const;
    bool isDeletedIsSet() const;
    void unsetisDeleted();
    void setIsDeleted(bool value);

    /// <summary>
    /// **参数解释**：资产id。 **约束限制**：0-100个。
    /// </summary>

    std::vector<std::string>& getAssetIds();
    bool assetIdsIsSet() const;
    void unsetassetIds();
    void setAssetIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：tag组合方式 **约束限制**：不涉及。 **取值范围**：and：与，or：或。 **默认取值**：and。
    /// </summary>

    std::string getTagMode() const;
    bool tagModeIsSet() const;
    void unsettagMode();
    void setTagMode(const std::string& value);

    /// <summary>
    /// **参数解释**：数据集用途，例如 GENERAL：通用数据集、EVAL：评测集。 **约束限制**：1-40位字符，英文字母，数字，下划线，中划线。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getDatasetUsage() const;
    bool datasetUsageIsSet() const;
    void unsetdatasetUsage();
    void setDatasetUsage(const std::string& value);

    /// <summary>
    /// **参数解释**：资产状态。 **约束限制**：不涉及。 **取值范围**：枚举值: - online: 上线 - offline: 下线 - waiting: 等待中 **默认取值**：不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：数据集存储格式，例如JSONL，TXT，MOBI，EPUB，DOCX，PDF。 **约束限制**：不涉及。
    /// </summary>

    std::vector<std::string>& getDatasetFileFormats();
    bool datasetFileFormatsIsSet() const;
    void unsetdatasetFileFormats();
    void setDatasetFileFormats(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：数据集模态划分，如音频，图像，视频。 **约束限制**：1-40位字符，英文字母，数字，下划线，中划线。 **取值范围**：不涉及。 **默认取值**：不涉及。
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
    /// **参数解释**：数据集逻辑规范，如盘古格式。 **约束限制**：1-40位字符，英文字母，数字，下划线，中划线。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getDatasetSchemaFormat() const;
    bool datasetSchemaFormatIsSet() const;
    void unsetdatasetSchemaFormat();
    void setDatasetSchemaFormat(const std::string& value);

    /// <summary>
    /// **参数解释**：资产创建者。 **约束限制**：1-512位字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const std::string& value);

    /// <summary>
    /// **参数解释**：数据源的ID信息。 **约束限制**：1-40位字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getDataSourceId() const;
    bool dataSourceIdIsSet() const;
    void unsetdataSourceId();
    void setDataSourceId(const std::string& value);


protected:
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string assetName_;
    bool assetNameIsSet_;
    std::vector<std::string> assetType_;
    bool assetTypeIsSet_;
    std::string assetSource_;
    bool assetSourceIsSet_;
    std::string assetSourceType_;
    bool assetSourceTypeIsSet_;
    std::string assetCode_;
    bool assetCodeIsSet_;
    std::string assetVersion_;
    bool assetVersionIsSet_;
    std::string assetGroupId_;
    bool assetGroupIdIsSet_;
    bool filterAllVersion_;
    bool filterAllVersionIsSet_;
    std::vector<std::string> supportActions_;
    bool supportActionsIsSet_;
    std::vector<std::string> tag_;
    bool tagIsSet_;
    bool isMine_;
    bool isMineIsSet_;
    bool withActions_;
    bool withActionsIsSet_;
    std::string assetSeries_;
    bool assetSeriesIsSet_;
    std::vector<std::string> assetCapabilities_;
    bool assetCapabilitiesIsSet_;
    std::vector<std::string> assetScenes_;
    bool assetScenesIsSet_;
    std::string rootAssetId_;
    bool rootAssetIdIsSet_;
    std::string parentAssetId_;
    bool parentAssetIdIsSet_;
    bool isDeleted_;
    bool isDeletedIsSet_;
    std::vector<std::string> assetIds_;
    bool assetIdsIsSet_;
    std::string tagMode_;
    bool tagModeIsSet_;
    std::string datasetUsage_;
    bool datasetUsageIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> datasetFileFormats_;
    bool datasetFileFormatsIsSet_;
    std::string datasetType_;
    bool datasetTypeIsSet_;
    std::string datasetSubType_;
    bool datasetSubTypeIsSet_;
    std::string datasetSchemaFormat_;
    bool datasetSchemaFormatIsSet_;
    std::string creator_;
    bool creatorIsSet_;
    std::string dataSourceId_;
    bool dataSourceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAssetRequest& dereference_from_shared_ptr(std::shared_ptr<ListAssetRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAssetRequest_H_
