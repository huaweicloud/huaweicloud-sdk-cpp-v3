
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TrainingJobBasicInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TrainingJobBasicInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TrainingJobBasicInfo
    : public ModelBase
{
public:
    TrainingJobBasicInfo();
    virtual ~TrainingJobBasicInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrainingJobBasicInfo members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 分身数字人模型名称。该名称会作为资产库中分身数字人模型资产名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 任务的状态。  与MetaStudio Console上用户看到的状态映射关系如下：  - 待提交   * WAIT_FILE_UPLOAD: 待上传文件  - 系统审核中   * AUTO_VERIFYING: 自动审核中   * MANUAL_VERIFYING: 人工审核中  - 系统审核未通过   * AUTO_VERIFY_FAILED: 自动审核失败   * MANUAL_VERIFY_FAILED: 人工审核失败  - 算法训练中   &gt; 算法训练中的状态仅管理员需要处理，普通用户仅需要显示“算法训练中”即可。   * MANUAL_VERIFY_SUCCESS: 审核通过，等待预处理资源   * WAIT_TRAINING_DATA_PREPROCESS: 等待训练数据预处理   * TRAINING_DATA_PREPROCESSING: 训练数据预处理中   * TRAINING_DATA_PREPROCESS_FAILED: 训练数据预处理失败   * TRAINING_DATA_PREPROCESS_SUCCESS: 训练数据预处理完成，等待训练资源中   * TRAINING: 训练中   * TRAIN_FAILED: 训练失败   * TRAIN_SUCCESS: 训练完成，等待预处理资源   * INFERENCE_DATA_PREPROCESSING: 推理数据预处理中   * INFERENCE_DATA_PREPROCESS_FAILED: 推理数据预处理失败   * WAIT_MAIN_FILE_UPLOAD: 等待主文件上传   * MANUAL_STOP_INFERENCE_DATA_PREPROCESS: 人工中止推理预处理   * MANUAL_STOP_TRAIN: 人工中止训练   * MANUAL_STOP_TRAINING_DATA_PREPROCESS: 人工中止训练预处理   * WAIT_ADMIN_CONFIRM: 等待管理员审核   * WAIT_COMPILE: 等待转编译   * COMPILING: 转编译中   * COMPILE_FAILED: 转编译失败   * WAIT_GENERATE_ACTION: 等待原子动作生成   * WAIT_ARRANGE: 等待编排   * ACTION_GENERATE_DATA_PROCESSING: 原子动作生成中   * MANUAL_STOP_ACTION_GENERATE_DATA_PROCESSING: 人工中止动作生成   * MANUAL_STOP_ACTION_GENERATE_ORI_PROCESSING: 人工中止动作编排   * ACTION_GENERATE_ORI_PROCESSING: 动作编排中   * ACTION_GENERATE_DATA_FAILED: 动作生成失败   * ACTION_GENERATE_ORI_FAILED: 生成动作编排资产失败   * ACTION_GENERATE_ORI_SUCCESS: 动作编排成功   * GENERATE_ACTION_PREPROCESS_FAILED: 生成动作编排原子动作失败   * WAIT_ADMIN_CALIBRATION: 等待管理员确认动作信息   * WAIT_ASSET_SYNC: 等待资产同步  - 待用户审核，仅NA白名单用户有该状态   * WAIT_USER_CONFIRM: 等待用户确认训练效果  - 用户驳回，仅NA白名单用户有该状态   * JOB_REJECT: 驳回任务  - 已完成   * JOB_SUCCESS: 训练任务完成（普通用户任务的完成状态，此时用户已经可以使用模型）   * JOB_FINISH: 任务结束，是最终状态，不支持修改此状态(NA用户任务的完成状态，并且此状态表明模型效果已通过用户的验收)  - 挂起，仅NA白名单用户有该状态   * JOB_PENDING: 挂起任务
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 模型资产ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 模型资产所属项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 分身数字人模型封面下载URL。URL有效期24小时。
    /// </summary>

    std::string getCoverDownloadUrl() const;
    bool coverDownloadUrlIsSet() const;
    void unsetcoverDownloadUrl();
    void setCoverDownloadUrl(const std::string& value);

    /// <summary>
    /// 用户最近一次更新任务的时间（包括租户创建或者重新提交），格式遵循：RFC 3339。 例 “2020-07-30T10:43:17Z”
    /// </summary>

    std::string getLastUpdateTime() const;
    bool lastUpdateTimeIsSet() const;
    void unsetlastUpdateTime();
    void setLastUpdateTime(const std::string& value);

    /// <summary>
    /// 创建时间，格式遵循：RFC 3339。 例 “2020-07-30T10:43:17Z”
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 分身数字人训练任务创建者的手机号。
    /// </summary>

    std::string getContact() const;
    bool contactIsSet() const;
    void unsetcontact();
    void setContact(const std::string& value);

    /// <summary>
    /// 分身数字人训练任务的批次名称。
    /// </summary>

    std::string getBatchName() const;
    bool batchNameIsSet() const;
    void unsetbatchName();
    void setBatchName(const std::string& value);

    /// <summary>
    /// 分身数字人训练任务标签。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 分身数字人模型版本。默认是V3.2版本模型。 * V3.2：V3.2版本模型 &gt; * V3和V2版本已废弃不用
    /// </summary>

    std::string getModelVersion() const;
    bool modelVersionIsSet() const;
    void unsetmodelVersion();
    void setModelVersion(const std::string& value);

    /// <summary>
    /// 抠图类型。默认是AI。 * AI：AI抠图 * MANUAL：人工抠图
    /// </summary>

    std::string getMattingType() const;
    bool mattingTypeIsSet() const;
    void unsetmattingType();
    void setMattingType(const std::string& value);

    /// <summary>
    /// 分身数字人模型分辨率。默认是1080P。 * 1080P：1080P。支持1080P及720P的视频输出。 * 4K：4K。支持4K、1080P及720P的视频输出。
    /// </summary>

    std::string getModelResolution() const;
    bool modelResolutionIsSet() const;
    void unsetmodelResolution();
    void setModelResolution(const std::string& value);

    /// <summary>
    /// 自定义用户id（如创建任务时设置了X-App-UserId则会携带）。
    /// </summary>

    std::string getAppUserId() const;
    bool appUserIdIsSet() const;
    void unsetappUserId();
    void setAppUserId(const std::string& value);

    /// <summary>
    /// 是否是基础版的形象训练
    /// </summary>

    bool isIsFlexus() const;
    bool isFlexusIsSet() const;
    void unsetisFlexus();
    void setIsFlexus(bool value);

    /// <summary>
    /// 是否只训练形象模型，不训练声音模型。仅Flexus版本时有效，默认false。
    /// </summary>

    bool isIsOnlyHumanModel() const;
    bool isOnlyHumanModelIsSet() const;
    void unsetisOnlyHumanModel();
    void setIsOnlyHumanModel(bool value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string coverDownloadUrl_;
    bool coverDownloadUrlIsSet_;
    std::string lastUpdateTime_;
    bool lastUpdateTimeIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string contact_;
    bool contactIsSet_;
    std::string batchName_;
    bool batchNameIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string modelVersion_;
    bool modelVersionIsSet_;
    std::string mattingType_;
    bool mattingTypeIsSet_;
    std::string modelResolution_;
    bool modelResolutionIsSet_;
    std::string appUserId_;
    bool appUserIdIsSet_;
    bool isFlexus_;
    bool isFlexusIsSet_;
    bool isOnlyHumanModel_;
    bool isOnlyHumanModelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TrainingJobBasicInfo_H_
