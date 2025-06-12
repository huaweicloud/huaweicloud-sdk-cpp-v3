
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveRoomInteractionConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveRoomInteractionConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 直播使用互动配置信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LiveRoomInteractionConfig
    : public ModelBase
{
public:
    LiveRoomInteractionConfig();
    virtual ~LiveRoomInteractionConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LiveRoomInteractionConfig members

    /// <summary>
    /// 播放类型。 - APPEND：追加，放置在场景播放队列尾部 - INSERT： 插入，在两个音频文件，或者文本句末添加。 - PLAY_NOW : 立即插入，收到指令后，立即播放，无需等待句末。
    /// </summary>

    std::string getPlayType() const;
    bool playTypeIsSet() const;
    void unsetplayType();
    void setPlayType(const std::string& value);

    /// <summary>
    /// 忽略互动回复中断句子后半句不再播放。用于立即中断场景。默认不忽略。
    /// </summary>

    bool isIgnoreCurrentSentence() const;
    bool ignoreCurrentSentenceIsSet() const;
    void unsetignoreCurrentSentence();
    void setIgnoreCurrentSentence(bool value);


protected:
    std::string playType_;
    bool playTypeIsSet_;
    bool ignoreCurrentSentence_;
    bool ignoreCurrentSentenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveRoomInteractionConfig_H_
