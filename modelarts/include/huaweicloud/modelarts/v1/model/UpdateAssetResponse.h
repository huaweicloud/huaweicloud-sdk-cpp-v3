
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateAssetResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateAssetResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/AssetActionRsp.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateAssetResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateAssetResponse();
    virtual ~UpdateAssetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAssetResponse members

    /// <summary>
    /// **参数解释**：资产id。 **取值范围**：不涉及。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// **参数解释**：父资产id。 **取值范围**：不涉及。
    /// </summary>

    std::string getParentAssetId() const;
    bool parentAssetIdIsSet() const;
    void unsetparentAssetId();
    void setParentAssetId(const std::string& value);

    /// <summary>
    /// **参数解释**：根资产id。 **取值范围**：不涉及。
    /// </summary>

    std::string getRootAssetId() const;
    bool rootAssetIdIsSet() const;
    void unsetrootAssetId();
    void setRootAssetId(const std::string& value);

    /// <summary>
    /// **参数解释**：资产API版本。 **取值范围**：v1,v2。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：资产名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getAssetName() const;
    bool assetNameIsSet() const;
    void unsetassetName();
    void setAssetName(const std::string& value);

    /// <summary>
    /// **参数解释**：需要加入的资产组id。 **取值范围**：0-36位字符，已存在的组id。
    /// </summary>

    std::string getAssetGroupId() const;
    bool assetGroupIdIsSet() const;
    void unsetassetGroupId();
    void setAssetGroupId(const std::string& value);

    /// <summary>
    /// **参数解释**：工作空间ID，[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。]未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。 **取值范围**：1-32位字母，数字。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：资产类型。 **取值范围**：枚举值： - TEMPLATE: 模板资产 - DATASET: 数据集资产 - WORKFLOW: 工作流资产 - IMAGE: 镜像资产 - ALGORITHM：算法资产 - MODEL: 模型资产 - DATASET_TEMPLATE: 数据集模板资产
    /// </summary>

    std::string getAssetType() const;
    bool assetTypeIsSet() const;
    void unsetassetType();
    void setAssetType(const std::string& value);

    /// <summary>
    /// **参数解释**：资产子类型。 **取值范围**：不涉及。
    /// </summary>

    std::string getSubAssetType() const;
    bool subAssetTypeIsSet() const;
    void unsetsubAssetType();
    void setSubAssetType(const std::string& value);

    /// <summary>
    /// **参数解释**：资产描述。 **取值范围**：不涉及。
    /// </summary>

    std::string getAssetDesc() const;
    bool assetDescIsSet() const;
    void unsetassetDesc();
    void setAssetDesc(const std::string& value);

    /// <summary>
    /// **参数解释**：资产code。 **取值范围**：1-60字符，英文字母，数字，中划线，下划线，点。
    /// </summary>

    std::string getAssetCode() const;
    bool assetCodeIsSet() const;
    void unsetassetCode();
    void setAssetCode(const std::string& value);

    /// <summary>
    /// **参数解释**：资产版本。 **取值范围**：数字或格式为x.y.z，x,y,z为数字。
    /// </summary>

    std::string getAssetVersion() const;
    bool assetVersionIsSet() const;
    void unsetassetVersion();
    void setAssetVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：资产tag。 **约束限制**：不涉及。
    /// </summary>

    std::map<std::string, std::vector<std::string>>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::map<std::string, std::vector<std::string>>& value);

    /// <summary>
    /// **参数解释**：资产支持的操作列表，例如监督微调:SFT,LORA微调:LORA,在线部署:ONLINE-DEPLOY,强化学习:AgenticRL。 **约束限制**：不涉及。
    /// </summary>

    Object getSupportActions() const;
    bool supportActionsIsSet() const;
    void unsetsupportActions();
    void setSupportActions(const Object& value);

    /// <summary>
    /// **参数解释**：资产文件存储地址,支持OBS（对象存储服务）协议的URL和相对路径。 **取值范围**：0-1024位字符。
    /// </summary>

    std::string getAssetLocation() const;
    bool assetLocationIsSet() const;
    void unsetassetLocation();
    void setAssetLocation(const std::string& value);

    /// <summary>
    /// **参数解释**：资产可执行操作详情配置。 **约束限制**：不涉及。
    /// </summary>

    std::vector<AssetActionRsp>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<AssetActionRsp>& value);

    /// <summary>
    /// **参数解释**：资产状态。 **取值范围**：枚举值: - online: 上线 - offline: 下线 - waiting: 等待中
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：数据集用途。 **取值范围**：1-40位字符。
    /// </summary>

    std::string getDatasetUsage() const;
    bool datasetUsageIsSet() const;
    void unsetdatasetUsage();
    void setDatasetUsage(const std::string& value);

    /// <summary>
    /// **参数解释**：数据集存储格式，例如JSONL，TXT，MOBI，EPUB，DOCX，PDF。 **约束限制**：1-40位字符。
    /// </summary>

    std::vector<std::string>& getDatasetFileFormats();
    bool datasetFileFormatsIsSet() const;
    void unsetdatasetFileFormats();
    void setDatasetFileFormats(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：数据集模态划分，如音频，图像，视频。 **取值范围**：1-40位字符。
    /// </summary>

    std::string getDatasetType() const;
    bool datasetTypeIsSet() const;
    void unsetdatasetType();
    void setDatasetType(const std::string& value);

    /// <summary>
    /// **参数解释**：数据集模态细分值，如语义分割。 **取值范围**：1-40位字符。
    /// </summary>

    std::string getDatasetSubType() const;
    bool datasetSubTypeIsSet() const;
    void unsetdatasetSubType();
    void setDatasetSubType(const std::string& value);

    /// <summary>
    /// **参数解释**：数据集逻辑规范，如盘古格式。 **取值范围**：1-40位字符。
    /// </summary>

    std::string getDatasetSchemaFormat() const;
    bool datasetSchemaFormatIsSet() const;
    void unsetdatasetSchemaFormat();
    void setDatasetSchemaFormat(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string parentAssetId_;
    bool parentAssetIdIsSet_;
    std::string rootAssetId_;
    bool rootAssetIdIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string assetName_;
    bool assetNameIsSet_;
    std::string assetGroupId_;
    bool assetGroupIdIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string assetType_;
    bool assetTypeIsSet_;
    std::string subAssetType_;
    bool subAssetTypeIsSet_;
    std::string assetDesc_;
    bool assetDescIsSet_;
    std::string assetCode_;
    bool assetCodeIsSet_;
    std::string assetVersion_;
    bool assetVersionIsSet_;
    std::map<std::string, std::vector<std::string>> tags_;
    bool tagsIsSet_;
    Object supportActions_;
    bool supportActionsIsSet_;
    std::string assetLocation_;
    bool assetLocationIsSet_;
    std::vector<AssetActionRsp> actions_;
    bool actionsIsSet_;
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

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateAssetResponse_H_
