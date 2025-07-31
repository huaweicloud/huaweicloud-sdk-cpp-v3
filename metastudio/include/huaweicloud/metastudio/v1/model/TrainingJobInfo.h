
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TrainingJobInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TrainingJobInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/JobTag.h>
#include <huaweicloud/metastudio/v1/model/AssessResult.h>
#include <huaweicloud/metastudio/v1/model/JobType.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/VoiceTrainingAllocatedResource.h>
#include <huaweicloud/metastudio/v1/model/JobState.h>
#include <huaweicloud/metastudio/v1/model/CreateType.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TrainingJobInfo
    : public ModelBase
{
public:
    TrainingJobInfo();
    virtual ~TrainingJobInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrainingJobInfo members

    /// <summary>
    /// 
    /// </summary>

    JobType getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const JobType& value);

    /// <summary>
    /// 任务id。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 用户id。
    /// </summary>

    std::string getAppUserId() const;
    bool appUserIdIsSet() const;
    void unsetappUserId();
    void setAppUserId(const std::string& value);

    /// <summary>
    /// 音色名称。该名称会作为资产库中音色模型资产名称。
    /// </summary>

    std::string getVoiceName() const;
    bool voiceNameIsSet() const;
    void unsetvoiceName();
    void setVoiceName(const std::string& value);

    /// <summary>
    /// 性别。 * FEMALE: 女性 * MALE: 是男性
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 语言。
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    JobState getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const JobState& value);

    /// <summary>
    /// 本次任务中该状态出现的次数
    /// </summary>

    int32_t getRejectTimes() const;
    bool rejectTimesIsSet() const;
    void unsetrejectTimes();
    void setRejectTimes(int32_t value);

    /// <summary>
    /// 当任务状态为成功时呈现,音色模型在资产库中的id。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 当任务失败时呈现,失败错误码。
    /// </summary>

    std::string getJobFailedCode() const;
    bool jobFailedCodeIsSet() const;
    void unsetjobFailedCode();
    void setJobFailedCode(const std::string& value);

    /// <summary>
    /// 当任务失败时呈现,失败原因。
    /// </summary>

    std::string getJobFailedReason() const;
    bool jobFailedReasonIsSet() const;
    void unsetjobFailedReason();
    void setJobFailedReason(const std::string& value);

    /// <summary>
    /// 任务创建时间。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 任务状态更新时间。
    /// </summary>

    int64_t getLastupdateTime() const;
    bool lastupdateTimeIsSet() const;
    void unsetlastupdateTime();
    void setLastupdateTime(int64_t value);

    /// <summary>
    /// 用户授权书连接。
    /// </summary>

    std::string getVoiceAuthorizationUrl() const;
    bool voiceAuthorizationUrlIsSet() const;
    void unsetvoiceAuthorizationUrl();
    void setVoiceAuthorizationUrl(const std::string& value);

    /// <summary>
    /// 用户原始输入数据url。
    /// </summary>

    std::string getTrainingInputSourceUrl() const;
    bool trainingInputSourceUrlIsSet() const;
    void unsettrainingInputSourceUrl();
    void setTrainingInputSourceUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateType getCreateType() const;
    bool createTypeIsSet() const;
    void unsetcreateType();
    void setCreateType(const CreateType& value);

    /// <summary>
    /// 
    /// </summary>

    JobTag getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const JobTag& value);

    /// <summary>
    /// 手机号
    /// </summary>

    std::string getPhone() const;
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::string& value);

    /// <summary>
    /// 形象制作任务id
    /// </summary>

    std::string getDhtmsJobId() const;
    bool dhtmsJobIdIsSet() const;
    void unsetdhtmsJobId();
    void setDhtmsJobId(const std::string& value);

    /// <summary>
    /// 批次名称
    /// </summary>

    std::string getBatchName() const;
    bool batchNameIsSet() const;
    void unsetbatchName();
    void setBatchName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VoiceTrainingAllocatedResource getAllocatedResource() const;
    bool allocatedResourceIsSet() const;
    void unsetallocatedResource();
    void setAllocatedResource(const VoiceTrainingAllocatedResource& value);

    /// <summary>
    /// 模型输出语言类型
    /// </summary>

    std::string getOutputLanguage() const;
    bool outputLanguageIsSet() const;
    void unsetoutputLanguage();
    void setOutputLanguage(const std::string& value);

    /// <summary>
    /// 任务是否重做
    /// </summary>

    bool isIsRemake() const;
    bool isRemakeIsSet() const;
    void unsetisRemake();
    void setIsRemake(bool value);

    /// <summary>
    /// 
    /// </summary>

    AssessResult getAssessResult() const;
    bool assessResultIsSet() const;
    void unsetassessResult();
    void setAssessResult(const AssessResult& value);

    /// <summary>
    /// 是否是按需任务
    /// </summary>

    bool isIsOndemandResource() const;
    bool isOndemandResourceIsSet() const;
    void unsetisOndemandResource();
    void setIsOndemandResource(bool value);


protected:
    JobType jobType_;
    bool jobTypeIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string appUserId_;
    bool appUserIdIsSet_;
    std::string voiceName_;
    bool voiceNameIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string language_;
    bool languageIsSet_;
    JobState state_;
    bool stateIsSet_;
    int32_t rejectTimes_;
    bool rejectTimesIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::string jobFailedCode_;
    bool jobFailedCodeIsSet_;
    std::string jobFailedReason_;
    bool jobFailedReasonIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t lastupdateTime_;
    bool lastupdateTimeIsSet_;
    std::string voiceAuthorizationUrl_;
    bool voiceAuthorizationUrlIsSet_;
    std::string trainingInputSourceUrl_;
    bool trainingInputSourceUrlIsSet_;
    CreateType createType_;
    bool createTypeIsSet_;
    JobTag tag_;
    bool tagIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string dhtmsJobId_;
    bool dhtmsJobIdIsSet_;
    std::string batchName_;
    bool batchNameIsSet_;
    VoiceTrainingAllocatedResource allocatedResource_;
    bool allocatedResourceIsSet_;
    std::string outputLanguage_;
    bool outputLanguageIsSet_;
    bool isRemake_;
    bool isRemakeIsSet_;
    AssessResult assessResult_;
    bool assessResultIsSet_;
    bool isOndemandResource_;
    bool isOndemandResourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TrainingJobInfo_H_
