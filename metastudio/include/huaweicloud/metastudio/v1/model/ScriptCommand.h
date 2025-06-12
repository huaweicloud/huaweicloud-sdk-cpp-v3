
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ScriptCommand_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ScriptCommand_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/LivePlayingScriptInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数字人话术命令信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ScriptCommand
    : public ModelBase
{
public:
    ScriptCommand();
    virtual ~ScriptCommand();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScriptCommand members

    /// <summary>
    /// 直播间ID
    /// </summary>

    std::string getRoomId() const;
    bool roomIdIsSet() const;
    void unsetroomId();
    void setRoomId(const std::string& value);

    /// <summary>
    /// 直播任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 命令ID。
    /// </summary>

    std::string getCommandId() const;
    bool commandIdIsSet() const;
    void unsetcommandId();
    void setCommandId(const std::string& value);

    /// <summary>
    /// 命令时间。格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getCommandTime() const;
    bool commandTimeIsSet() const;
    void unsetcommandTime();
    void setCommandTime(const std::string& value);

    /// <summary>
    /// 直播剧本列表。
    /// </summary>

    std::vector<LivePlayingScriptInfo>& getSceneScripts();
    bool sceneScriptsIsSet() const;
    void unsetsceneScripts();
    void setSceneScripts(const std::vector<LivePlayingScriptInfo>& value);


protected:
    std::string roomId_;
    bool roomIdIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string commandId_;
    bool commandIdIsSet_;
    std::string commandTime_;
    bool commandTimeIsSet_;
    std::vector<LivePlayingScriptInfo> sceneScripts_;
    bool sceneScriptsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ScriptCommand_H_
