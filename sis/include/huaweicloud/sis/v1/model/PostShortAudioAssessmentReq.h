
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_PostShortAudioAssessmentReq_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_PostShortAudioAssessmentReq_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/AudioConfig.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  PostShortAudioAssessmentReq
    : public ModelBase
{
public:
    PostShortAudioAssessmentReq();
    virtual ~PostShortAudioAssessmentReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostShortAudioAssessmentReq members

    /// <summary>
    /// 
    /// </summary>

    AudioConfig getConfig() const;
    bool configIsSet() const;
    void unsetconfig();
    void setConfig(const AudioConfig& value);

    /// <summary>
    /// 语音数据，Base64编码，要求Base64编码后大小不超过1M。  注意评测接口使用次数定义为：每8秒的音频作为一次，不足8秒按一次计算。例如传入4秒或8秒的音频，都算作使用一次，传入9秒的音频则视为调用2次。
    /// </summary>

    std::string getAudioData() const;
    bool audioDataIsSet() const;
    void unsetaudioData();
    void setAudioData(const std::string& value);

    /// <summary>
    /// 评测文本
    /// </summary>

    std::string getRefText() const;
    bool refTextIsSet() const;
    void unsetrefText();
    void setRefText(const std::string& value);


protected:
    AudioConfig config_;
    bool configIsSet_;
    std::string audioData_;
    bool audioDataIsSet_;
    std::string refText_;
    bool refTextIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_PostShortAudioAssessmentReq_H_
