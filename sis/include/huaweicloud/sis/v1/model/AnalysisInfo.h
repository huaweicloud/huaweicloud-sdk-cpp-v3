
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_AnalysisInfo_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_AnalysisInfo_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_SIS_V1_EXPORT  AnalysisInfo
    : public ModelBase
{
public:
    AnalysisInfo();
    virtual ~AnalysisInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AnalysisInfo members

    /// <summary>
    /// 是否需要做话者分离。缺省为true，表示会进行话者分离，识别结果中会包含role项（角色）。如果diarization为false, 那么结果中不会出现role项。
    /// </summary>

    bool isDiarization() const;
    bool diarizationIsSet() const;
    void unsetdiarization();
    void setDiarization(bool value);

    /// <summary>
    /// 语音文件声道信息，可以为MONO（缺省), LEFT_AGENT, RIGHT_AGENT。  如果channel 为MONO，那么原始文件需要为单声道文件。  如果为双声道文件，系统会将其转换成单声道文件，可能会影响识别效果。  如果 channel 为 LEFT_AGENT或RIGHT_AGENT, 则原始文件需要为双声道文件，如果为单声道文件，系统会将其转换成双声道文件，可能会影响识别效果。  当channel 为 LEFT_AGENT或RIGHT_AGENT，且diarization为true时，系统会按照配置给出对应角色。其中：  LEFT_AGENT 指定左声道语音为agent（坐席）,  RIGHT_AGENT 指定右声道为agent（坐席）。
    /// </summary>

    std::string getChannel() const;
    bool channelIsSet() const;
    void unsetchannel();
    void setChannel(const std::string& value);

    /// <summary>
    /// 是否需要做情绪检测, 缺省为true。
    /// </summary>

    bool isEmotion() const;
    bool emotionIsSet() const;
    void unsetemotion();
    void setEmotion(bool value);

    /// <summary>
    /// 是否需要输出语速信息, 缺省为true。
    /// </summary>

    bool isSpeed() const;
    bool speedIsSet() const;
    void unsetspeed();
    void setSpeed(bool value);


protected:
    bool diarization_;
    bool diarizationIsSet_;
    std::string channel_;
    bool channelIsSet_;
    bool emotion_;
    bool emotionIsSet_;
    bool speed_;
    bool speedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_AnalysisInfo_H_
