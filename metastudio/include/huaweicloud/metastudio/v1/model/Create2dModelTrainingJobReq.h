
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Create2dModelTrainingJobReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Create2dModelTrainingJobReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/VoiceProperties.h>
#include <huaweicloud/metastudio/v1/model/SupportedServiceEnum.h>
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
/// 创建或更新分身数字人模型训练任务请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  Create2dModelTrainingJobReq
    : public ModelBase
{
public:
    Create2dModelTrainingJobReq();
    virtual ~Create2dModelTrainingJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Create2dModelTrainingJobReq members

    /// <summary>
    /// 分身数字人模型名称。该名称会作为资产库中分身数字人模型资产名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 分身数字人训练任务创建者的手机号。
    /// </summary>

    std::string getContact() const;
    bool contactIsSet() const;
    void unsetcontact();
    void setContact(const std::string& value);

    /// <summary>
    /// 命令类型： * UPDATE_VIDEO: 更新视频 * UPLOAD_VIDEO：上传视频 * CONFIRM_ACTION_VIDEO: 确认动作编排视频 * GET_ACTION_VIDEO_MULTIPART: 获取动作编排视频分片
    /// </summary>

    std::string getCommandMessage() const;
    bool commandMessageIsSet() const;
    void unsetcommandMessage();
    void setCommandMessage(const std::string& value);

    /// <summary>
    /// 训练视频上传分片数（上传时对唯一训练视频文件的数据分片，用于对该文件的并发上传，不是分多个视频文件上传）。
    /// </summary>

    int32_t getVideoMultipartCount() const;
    bool videoMultipartCountIsSet() const;
    void unsetvideoMultipartCount();
    void setVideoMultipartCount(int32_t value);

    /// <summary>
    /// 动作视频上传分片数。
    /// </summary>

    int32_t getActionVideoMultipartCount() const;
    bool actionVideoMultipartCountIsSet() const;
    void unsetactionVideoMultipartCount();
    void setActionVideoMultipartCount(int32_t value);

    /// <summary>
    /// 分身数字人是否需要背景替换。需要背景替换的分身数字人训练视频需要绿幕拍摄。
    /// </summary>

    bool isIsBackgroundReplacement() const;
    bool isBackgroundReplacementIsSet() const;
    void unsetisBackgroundReplacement();
    void setIsBackgroundReplacement(bool value);

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

    /// <summary>
    /// 声音来源类型 * VIDEO：视频中抽取音频 * AUDIO：单独上传的音频
    /// </summary>

    std::string getAudioSourceType() const;
    bool audioSourceTypeIsSet() const;
    void unsetaudioSourceType();
    void setAudioSourceType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VoiceProperties getVoiceProperties() const;
    bool voicePropertiesIsSet() const;
    void unsetvoiceProperties();
    void setVoiceProperties(const VoiceProperties& value);

    /// <summary>
    /// 该任务所生成的模型支持的业务类型，可多选。  Flexus版数字人仅支持选择“VIDEO_2D”。
    /// </summary>

    std::vector<SupportedServiceEnum>& getSupportedService();
    bool supportedServiceIsSet() const;
    void unsetsupportedService();
    void setSupportedService(const std::vector<SupportedServiceEnum>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string contact_;
    bool contactIsSet_;
    std::string commandMessage_;
    bool commandMessageIsSet_;
    int32_t videoMultipartCount_;
    bool videoMultipartCountIsSet_;
    int32_t actionVideoMultipartCount_;
    bool actionVideoMultipartCountIsSet_;
    bool isBackgroundReplacement_;
    bool isBackgroundReplacementIsSet_;
    std::string batchName_;
    bool batchNameIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string modelVersion_;
    bool modelVersionIsSet_;
    bool isFlexus_;
    bool isFlexusIsSet_;
    bool isOnlyHumanModel_;
    bool isOnlyHumanModelIsSet_;
    std::string audioSourceType_;
    bool audioSourceTypeIsSet_;
    VoiceProperties voiceProperties_;
    bool voicePropertiesIsSet_;
    std::vector<SupportedServiceEnum> supportedService_;
    bool supportedServiceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Create2dModelTrainingJobReq_H_
