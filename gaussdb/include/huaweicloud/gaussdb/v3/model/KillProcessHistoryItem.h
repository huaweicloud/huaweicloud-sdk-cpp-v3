
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_KillProcessHistoryItem_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_KillProcessHistoryItem_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  KillProcessHistoryItem
    : public ModelBase
{
public:
    KillProcessHistoryItem();
    virtual ~KillProcessHistoryItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KillProcessHistoryItem members

    /// <summary>
    /// **参数解释**：  自动Kill会话任务ID。  **取值范围**：  不涉及。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// **参数解释**：  会话ID。  **取值范围**：  不涉及。
    /// </summary>

    std::string getSessionId() const;
    bool sessionIdIsSet() const;
    void unsetsessionId();
    void setSessionId(const std::string& value);

    /// <summary>
    /// **参数解释**：  Kill会话的时间戳。  **取值范围**：  不涉及。
    /// </summary>

    std::string getKillTime() const;
    bool killTimeIsSet() const;
    void unsetkillTime();
    void setKillTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  Kill会话方式。  **取值范围**：  - once：一键Kill会话。 - condition：条件Kill会话。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// **参数解释**：  用户。  **取值范围**：  不涉及。
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// **参数解释**：  主机。  **取值范围**：  不涉及。
    /// </summary>

    std::string getHost() const;
    bool hostIsSet() const;
    void unsethost();
    void setHost(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库名。  **取值范围**：  不涉及。
    /// </summary>

    std::string getDb() const;
    bool dbIsSet() const;
    void unsetdb();
    void setDb(const std::string& value);

    /// <summary>
    /// **参数解释**：  命令。  **取值范围**：  不涉及。
    /// </summary>

    std::string getCommand() const;
    bool commandIsSet() const;
    void unsetcommand();
    void setCommand(const std::string& value);

    /// <summary>
    /// **参数解释**：  会话持续时间，单位是秒。  **取值范围**：  不涉及。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  SQL语句。  **取值范围**：  不涉及。
    /// </summary>

    std::string getInfo() const;
    bool infoIsSet() const;
    void unsetinfo();
    void setInfo(const std::string& value);

    /// <summary>
    /// **参数解释**：  执行状态。  **取值范围**：  不涉及。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例ID。  **取值范围**：  只能由英文字母、数字组成，后缀为in07，长度为36个字符。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  节点ID。  **取值范围**：  只能由英文字母、数字组成，后缀为no07，长度为36个字符。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string sessionId_;
    bool sessionIdIsSet_;
    std::string killTime_;
    bool killTimeIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string user_;
    bool userIsSet_;
    std::string host_;
    bool hostIsSet_;
    std::string db_;
    bool dbIsSet_;
    std::string command_;
    bool commandIsSet_;
    std::string time_;
    bool timeIsSet_;
    std::string info_;
    bool infoIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_KillProcessHistoryItem_H_
