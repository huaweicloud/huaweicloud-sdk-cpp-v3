
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AssetOperationRecordRsp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AssetOperationRecordRsp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：资产操作记录。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AssetOperationRecordRsp
    : public ModelBase
{
public:
    AssetOperationRecordRsp();
    virtual ~AssetOperationRecordRsp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssetOperationRecordRsp members

    /// <summary>
    /// **参数解释**：操作记录ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getRecordId() const;
    bool recordIdIsSet() const;
    void unsetrecordId();
    void setRecordId(const std::string& value);

    /// <summary>
    /// **参数解释**：华为云项目ID，获取方法请参见[获取项目ID和名称](modelarts_03_0147.xml)。 **取值范围**：不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**：工作空间ID，[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。]未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。 **取值范围**：不涉及。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：作业类型。 **取值范围**：枚举值: - PRETRAIN: 预训练 - SFT: 全量微调 - RFT: 强化微调 - RLHF: 强化学习 - QUANTIZATION: 量化 - MANUAL-EVALUATION: 人工评测 - AUTO-EVALUATION: 自动评测 - ONLINE-DEPLOY: 在线部署 - EDGE-DEPLOY: 边缘部署 - LORA: LoRA微调 - QLORA: Q-LoRA微调 - DATA-CLEANING: 数据清洗 - DATA-IMPORT: 数据导入 - DATA-ANNOTATION: 数据标注
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// **参数解释**：关联任务ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：关联任务名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// **参数解释**：关联任务状态。 **取值范围**：枚举值: - INIT: 初始化 - RUNNING: 运行中 - STOPPED: 已停止 - FAILED: 失败 - SUCCEED: 成功 - DELETED: 已删除
    /// </summary>

    std::string getJobStatus() const;
    bool jobStatusIsSet() const;
    void unsetjobStatus();
    void setJobStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：操作用户ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// **参数解释**：操作用户的用户名。 **取值范围**：不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**：资产ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// **参数解释**：来源服务。 **取值范围**：不涉及。
    /// </summary>

    std::string getService() const;
    bool serviceIsSet() const;
    void unsetservice();
    void setService(const std::string& value);

    /// <summary>
    /// **参数解释**：资产编码。 **取值范围**：不涉及。
    /// </summary>

    std::string getAssetCode() const;
    bool assetCodeIsSet() const;
    void unsetassetCode();
    void setAssetCode(const std::string& value);

    /// <summary>
    /// **参数解释**：资产名称，支持英文字母，数字，中划线，下划线，点，空格，中文汉字。 **取值范围**：不涉及。
    /// </summary>

    std::string getAssetName() const;
    bool assetNameIsSet() const;
    void unsetassetName();
    void setAssetName(const std::string& value);

    /// <summary>
    /// **参数解释**：资产版本。 **取值范围**：不涉及。
    /// </summary>

    std::string getAssetVersion() const;
    bool assetVersionIsSet() const;
    void unsetassetVersion();
    void setAssetVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：操作记录创建时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// **参数解释**：操作记录更新时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// **参数解释**：任务是否删除（true: 已删除，false: 未删除）。 **取值范围**：不涉及。
    /// </summary>

    bool isIsDeleted() const;
    bool isDeletedIsSet() const;
    void unsetisDeleted();
    void setIsDeleted(bool value);

    /// <summary>
    /// **参数解释**：服务操作详情。 **取值范围**：不涉及。
    /// </summary>

    std::string getDetails() const;
    bool detailsIsSet() const;
    void unsetdetails();
    void setDetails(const std::string& value);

    /// <summary>
    /// **参数解释**：预留扩展信息字段。 **取值范围**：不涉及。
    /// </summary>

    std::string getRecordExtendMessage() const;
    bool recordExtendMessageIsSet() const;
    void unsetrecordExtendMessage();
    void setRecordExtendMessage(const std::string& value);


protected:
    std::string recordId_;
    bool recordIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::string jobStatus_;
    bool jobStatusIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::string service_;
    bool serviceIsSet_;
    std::string assetCode_;
    bool assetCodeIsSet_;
    std::string assetName_;
    bool assetNameIsSet_;
    std::string assetVersion_;
    bool assetVersionIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    bool isDeleted_;
    bool isDeletedIsSet_;
    std::string details_;
    bool detailsIsSet_;
    std::string recordExtendMessage_;
    bool recordExtendMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AssetOperationRecordRsp_H_
