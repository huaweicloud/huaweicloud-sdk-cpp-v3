
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateTrainingJobReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateTrainingJobReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/JobTag.h>
#include <huaweicloud/metastudio/v1/model/SupportedServiceEnum.h>
#include <string>
#include <vector>
#include <huaweicloud/metastudio/v1/model/CreateType.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建训练任务请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateTrainingJobReq
    : public ModelBase
{
public:
    CreateTrainingJobReq();
    virtual ~CreateTrainingJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTrainingJobReq members

    /// <summary>
    /// 
    /// </summary>

    JobTag getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const JobTag& value);

    /// <summary>
    /// 一段描述信息,会呈现在资产库中。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 语音性别,是男性声音还是女性声音。 * FEMALE: 女性 * MALE: 男性
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 音色名称。该名称会作为资产库中音色模型资产名称。
    /// </summary>

    std::string getVoiceName() const;
    bool voiceNameIsSet() const;
    void unsetvoiceName();
    void setVoiceName(const std::string& value);

    /// <summary>
    /// 训练语言,当前仅支持中文。 * CN: 中文 * EN: 英文
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateType getCreateType() const;
    bool createTypeIsSet() const;
    void unsetcreateType();
    void setCreateType(const CreateType& value);

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
    /// 模型输出语言类型
    /// </summary>

    std::string getOutputLanguage() const;
    bool outputLanguageIsSet() const;
    void unsetoutputLanguage();
    void setOutputLanguage(const std::string& value);

    /// <summary>
    /// 自定义试听文本
    /// </summary>

    std::string getCustomText() const;
    bool customTextIsSet() const;
    void unsetcustomText();
    void setCustomText(const std::string& value);

    /// <summary>
    /// 是否使用按需资源
    /// </summary>

    bool isIsOndemandResource() const;
    bool isOndemandResourceIsSet() const;
    void unsetisOndemandResource();
    void setIsOndemandResource(bool value);

    /// <summary>
    /// 支持的业务类型。： * VIDEO_2D：分身数字人视频制作 * LIVE_2D：分身数字人直播 * CHAT_2D：分身数字人智能交互
    /// </summary>

    std::vector<SupportedServiceEnum>& getSupportedService();
    bool supportedServiceIsSet() const;
    void unsetsupportedService();
    void setSupportedService(const std::vector<SupportedServiceEnum>& value);


protected:
    JobTag tag_;
    bool tagIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string voiceName_;
    bool voiceNameIsSet_;
    std::string language_;
    bool languageIsSet_;
    CreateType createType_;
    bool createTypeIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string dhtmsJobId_;
    bool dhtmsJobIdIsSet_;
    std::string batchName_;
    bool batchNameIsSet_;
    std::string outputLanguage_;
    bool outputLanguageIsSet_;
    std::string customText_;
    bool customTextIsSet_;
    bool isOndemandResource_;
    bool isOndemandResourceIsSet_;
    std::vector<SupportedServiceEnum> supportedService_;
    bool supportedServiceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateTrainingJobReq_H_
