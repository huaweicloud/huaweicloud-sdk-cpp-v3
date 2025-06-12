
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ControlSmartLiveReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ControlSmartLiveReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/ReviewConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 控制命令。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ControlSmartLiveReq
    : public ModelBase
{
public:
    ControlSmartLiveReq();
    virtual ~ControlSmartLiveReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ControlSmartLiveReq members

    /// <summary>
    /// **参数解释**： 命令名称。 **约束限制**： 不限制 **取值范围**： * INSERT_PLAY_SCRIPT：插入表演脚本。用于互动回复。数字人不变，背景不变。params结构定义：[PlayTextInfo](metastudio_02_0014.xml)。 * INSERT_PLAY_AUDIO：插入驱动音频。用于音频直接驱动。数字人不变，背景不变。params结构定义：[PlayAudioInfo](metastudio_02_0014.xml)。 * REWRITE_PLAY_SCRIPT：动态编辑未播放剧本。params结构定义：[scene_scripts](CreateSmartLiveRoom.xml)。 * REWRITE_INTERACTION_RULES：动态修改互动规则。params结构定义：[interaction_rules](CreateSmartLiveRoom.xml)。 * GET_CURRENT_PLAYING_SCRIPTS：查询本轮剧本列表。响应为：[LivePlayingScriptList](metastudio_02_0014.xml)结构。 * SHOW_LAYER：显示导播素材，用于直播导播。params结构定义：LiveGuideRuleInfo。 * REFRESH_OUTPUT_URL：更新当前任务的rtmp推流信息。params结构定义： RefreshOutputUrlConfig。 * GET_LIVE_JOB_CONFIG_INFO：获取任务中的房间信息。params结构定义：与[直播间详情响应体](ShowSmartLiveRoom.xml)一致。 * CLEAN_UP_INSERT_COMMAND：清理未播放的插入命令。params结构定义：[CleanUpInsertCommand](metastudio_02_0014.xml) * RESET_EXIT_CONFIG: 重置退出参数。params结构定义 LiveExitConfig。例：{\&quot;command\&quot;:\&quot;RESET_EXIT_CONFIG\&quot;,\&quot;params\&quot;:{\&quot;max_live_duration\&quot;:168,\&quot;auto_stop_mode\&quot;:\&quot;FORCE_EXIT\&quot;,\&quot;max_exception_waiting_duration\&quot;:60}} **默认取值**： 不涉及
    /// </summary>

    std::string getCommand() const;
    bool commandIsSet() const;
    void unsetcommand();
    void setCommand(const std::string& value);

    /// <summary>
    /// **参数解释**： 命令参数。 **约束限制**： 不限制 **取值范围**： 参考COMMNAD说明。 **默认取值**： 不涉及
    /// </summary>

    Object getParams() const;
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    ReviewConfig getReviewConfig() const;
    bool reviewConfigIsSet() const;
    void unsetreviewConfig();
    void setReviewConfig(const ReviewConfig& value);


protected:
    std::string command_;
    bool commandIsSet_;
    Object params_;
    bool paramsIsSet_;
    ReviewConfig reviewConfig_;
    bool reviewConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ControlSmartLiveReq_H_
