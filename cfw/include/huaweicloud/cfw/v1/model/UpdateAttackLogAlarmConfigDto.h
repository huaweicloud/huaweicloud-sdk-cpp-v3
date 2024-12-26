
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateAttackLogAlarmConfigDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateAttackLogAlarmConfigDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  UpdateAttackLogAlarmConfigDto
    : public ModelBase
{
public:
    UpdateAttackLogAlarmConfigDto();
    virtual ~UpdateAttackLogAlarmConfigDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAttackLogAlarmConfigDto members

    /// <summary>
    /// 账号名称
    /// </summary>

    std::string getAccountName() const;
    bool accountNameIsSet() const;
    void unsetaccountName();
    void setAccountName(const std::string& value);

    /// <summary>
    /// 告警id
    /// </summary>

    std::string getAlarmId() const;
    bool alarmIdIsSet() const;
    void unsetalarmId();
    void setAlarmId(const std::string& value);

    /// <summary>
    /// 告警周期，0：全天，1：8时到22时
    /// </summary>

    int32_t getAlarmTimePeriod() const;
    bool alarmTimePeriodIsSet() const;
    void unsetalarmTimePeriod();
    void setAlarmTimePeriod(int32_t value);

    /// <summary>
    /// 告警类型 0:攻击告警; 1:流量超额预警; 2:EIP未防护告警; 3:威胁情报告警
    /// </summary>

    int32_t getAlarmType() const;
    bool alarmTypeIsSet() const;
    void unsetalarmType();
    void setAlarmType(int32_t value);

    /// <summary>
    /// 告警状态 0:失效; 1:生效
    /// </summary>

    int32_t getEnableStatus() const;
    bool enableStatusIsSet() const;
    void unsetenableStatus();
    void setEnableStatus(int32_t value);

    /// <summary>
    /// 告警触发频次
    /// </summary>

    int32_t getFrequencyCount() const;
    bool frequencyCountIsSet() const;
    void unsetfrequencyCount();
    void setFrequencyCount(int32_t value);

    /// <summary>
    /// 告警频次时间范围
    /// </summary>

    int32_t getFrequencyTime() const;
    bool frequencyTimeIsSet() const;
    void unsetfrequencyTime();
    void setFrequencyTime(int32_t value);

    /// <summary>
    /// 告警语言
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 告警等级
    /// </summary>

    std::string getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const std::string& value);

    /// <summary>
    /// 告警urn
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// 用户名称
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);


protected:
    std::string accountName_;
    bool accountNameIsSet_;
    std::string alarmId_;
    bool alarmIdIsSet_;
    int32_t alarmTimePeriod_;
    bool alarmTimePeriodIsSet_;
    int32_t alarmType_;
    bool alarmTypeIsSet_;
    int32_t enableStatus_;
    bool enableStatusIsSet_;
    int32_t frequencyCount_;
    bool frequencyCountIsSet_;
    int32_t frequencyTime_;
    bool frequencyTimeIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string severity_;
    bool severityIsSet_;
    std::string topicUrn_;
    bool topicUrnIsSet_;
    std::string username_;
    bool usernameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateAttackLogAlarmConfigDto_H_
