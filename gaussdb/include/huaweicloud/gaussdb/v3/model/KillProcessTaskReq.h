
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_KillProcessTaskReq_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_KillProcessTaskReq_H_


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
/// **参数解释**：  Kill会话任务条件，条件各项之间是“与”的逻辑关系。  **约束限制**：  支持同时运行最多5个条件Kill任务。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  KillProcessTaskReq
    : public ModelBase
{
public:
    KillProcessTaskReq();
    virtual ~KillProcessTaskReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KillProcessTaskReq members

    /// <summary>
    /// **参数解释**：  用户名。  **约束限制**：  不涉及。  **取值范围**：  1到32个字符之间，由字母、数字、中划线或下划线组成，不能包含其他特殊字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// **参数解释**：  主机。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getHost() const;
    bool hostIsSet() const;
    void unsethost();
    void setHost(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库名。  **约束限制**：  不涉及。  **取值范围**：  1到64个字符之间，由字母、数字、中划线或下划线组成，不能包含其他特殊字符。   **默认取值**：  不涉及。
    /// </summary>

    std::string getDb() const;
    bool dbIsSet() const;
    void unsetdb();
    void setDb(const std::string& value);

    /// <summary>
    /// **参数解释**：  命令。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getCommand() const;
    bool commandIsSet() const;
    void unsetcommand();
    void setCommand(const std::string& value);

    /// <summary>
    /// **参数解释**：  SQL语句。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInfo() const;
    bool infoIsSet() const;
    void unsetinfo();
    void setInfo(const std::string& value);

    /// <summary>
    /// **参数解释**：  持续时间，单位为秒。持续时间大于等于该值的会话满足Kill条件。  **约束限制**：  必须是整数。  **取值范围**：  1-2147483647。  **默认取值**：  不涉及。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务持续时间，单位为秒。  **约束限制**：  执行方式为auto时必填。  **取值范围**：  10-31535999。  **默认取值**：  不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  执行方式。  **约束限制**：  不涉及。  **取值范围**：  - auto：定时关闭，任务持续时长等于end_time参数值。 - manual：手动关闭。  **默认取值**：  不涉及。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string user_;
    bool userIsSet_;
    std::string host_;
    bool hostIsSet_;
    std::string db_;
    bool dbIsSet_;
    std::string command_;
    bool commandIsSet_;
    std::string info_;
    bool infoIsSet_;
    std::string time_;
    bool timeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_KillProcessTaskReq_H_
