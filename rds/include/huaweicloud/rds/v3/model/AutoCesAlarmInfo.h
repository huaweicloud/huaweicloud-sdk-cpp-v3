
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_AutoCesAlarmInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_AutoCesAlarmInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  AutoCesAlarmInfo
    : public ModelBase
{
public:
    AutoCesAlarmInfo();
    virtual ~AutoCesAlarmInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutoCesAlarmInfo members

    /// <summary>
    /// **参数解释**：  告警记录唯一标识符。  **约束限制**：  不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：  租户ID。  **约束限制**：  不涉及。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**：  租户名称。  **约束限制**：  不涉及。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// **参数解释**：  用户ID。  **约束限制**：  不涉及。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// **参数解释**：  用户名称。  **约束限制**：  不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**：  项目ID。  **约束限制**：  不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**：  项目名称。  **约束限制**：  不涉及。
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库引擎名称。  **约束限制**：  不涉及。
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// **参数解释**：  新实例是否默认开启自动告警。  **约束限制**：  不涉及。
    /// </summary>

    bool isNewInstanceDefault() const;
    bool newInstanceDefaultIsSet() const;
    void unsetnewInstanceDefault();
    void setNewInstanceDefault(bool value);

    /// <summary>
    /// **参数解释**：  自动告警状态转换。  **约束限制**：  不涉及。
    /// </summary>

    std::string getSwitchStatus() const;
    bool switchStatusIsSet() const;
    void unsetswitchStatus();
    void setSwitchStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  告警规则唯一标识符。  **约束限制**：  不涉及。
    /// </summary>

    std::string getAlarmId() const;
    bool alarmIdIsSet() const;
    void unsetalarmId();
    void setAlarmId(const std::string& value);

    /// <summary>
    /// **参数解释**：  主题URN。  **约束限制**：  不涉及。
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// **参数解释**：  记录被创建的时间戳。  **约束限制**：  不涉及。
    /// </summary>

    int64_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(int64_t value);

    /// <summary>
    /// **参数解释**：  记录最后一次被更新的时间戳。  **约束限制**：  不涉及。
    /// </summary>

    int64_t getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(int64_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    bool newInstanceDefault_;
    bool newInstanceDefaultIsSet_;
    std::string switchStatus_;
    bool switchStatusIsSet_;
    std::string alarmId_;
    bool alarmIdIsSet_;
    std::string topicUrn_;
    bool topicUrnIsSet_;
    int64_t createdAt_;
    bool createdAtIsSet_;
    int64_t updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_AutoCesAlarmInfo_H_
