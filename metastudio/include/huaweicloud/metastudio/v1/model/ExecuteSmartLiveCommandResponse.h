
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ExecuteSmartLiveCommandResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ExecuteSmartLiveCommandResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ExecuteSmartLiveCommandResponse
    : public ModelBase, public HttpResponse
{
public:
    ExecuteSmartLiveCommandResponse();
    virtual ~ExecuteSmartLiveCommandResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExecuteSmartLiveCommandResponse members

    /// <summary>
    /// 控制命令ID
    /// </summary>

    std::string getCommandId() const;
    bool commandIdIsSet() const;
    void unsetcommandId();
    void setCommandId(const std::string& value);

    /// <summary>
    /// 命令名称。 - INSERT_PLAY_SCRIPT：插入表演脚本。用于互动回复。数字人不变，背景不变。params结构定义：ShootScript。 - REWRITE_PLAY_SCRIPT：动态编辑未播放剧本。params结构定义：scene_scripts。 - INSERT_PLAY_AUDIO：插入驱动音频。用于音频直接驱动。数字人不变，背景不变。params结构定义：PlayAudioInfo。 - GET_CURRENT_PLAYING_SCRIPTS：查询本轮剧本列表。响应为LivePlayingScriptList结构。 - REFRESH_OUTPUT_URL：更新当前任务的rtmp推流信息。params结构定义： RefreshOutputUrlConfig。 - REWRITE_INTERACTION_RULES：动态修改互动规则。params结构定义：interaction_rules。 - GET_LIVE_JOB_CONFIG_INFO：获取任务中的房间信息。params结构定义：SmartLiveRoomInfo。 - CLEAN_UP_INSERT_COMMAND：清理未播放的插入命令。params结构定义：[CleanUpInsertCommand](metastudio_02_0014.xml) - RESET_EXIT_CONFIG: 重置退出参数。params结构定义：LiveExitConfig
    /// </summary>

    std::string getCommand() const;
    bool commandIsSet() const;
    void unsetcommand();
    void setCommand(const std::string& value);

    /// <summary>
    /// 命令执行结果
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string commandId_;
    bool commandIdIsSet_;
    std::string command_;
    bool commandIsSet_;
    std::string result_;
    bool resultIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ExecuteSmartLiveCommandResponse_H_
