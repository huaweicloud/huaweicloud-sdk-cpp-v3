
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RuleCommand_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RuleCommand_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/LiveRoomInteractionRuleInfo.h>
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
/// 数字人互动规则命令信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  RuleCommand
    : public ModelBase
{
public:
    RuleCommand();
    virtual ~RuleCommand();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleCommand members

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
    /// 互动规则列表
    /// </summary>

    std::vector<LiveRoomInteractionRuleInfo>& getInteractionRules();
    bool interactionRulesIsSet() const;
    void unsetinteractionRules();
    void setInteractionRules(const std::vector<LiveRoomInteractionRuleInfo>& value);


protected:
    std::string roomId_;
    bool roomIdIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string commandId_;
    bool commandIdIsSet_;
    std::string commandTime_;
    bool commandTimeIsSet_;
    std::vector<LiveRoomInteractionRuleInfo> interactionRules_;
    bool interactionRulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RuleCommand_H_
