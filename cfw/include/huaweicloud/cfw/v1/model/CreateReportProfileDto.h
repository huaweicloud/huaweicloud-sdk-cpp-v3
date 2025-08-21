
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateReportProfileDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateReportProfileDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/StatisticPeriod.h>
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
class HUAWEICLOUD_CFW_V1_EXPORT  CreateReportProfileDto
    : public ModelBase
{
public:
    CreateReportProfileDto();
    virtual ~CreateReportProfileDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateReportProfileDto members

    /// <summary>
    /// **参数解释**： 报告类型 **约束限制**： 不涉及 **取值范围**： daily 日报 weekly 周报 custom 自定义报告 **默认取值**： 不涉及
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**： 描述信息 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 模板名称 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 发送时间，日报和周报需要设置 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    int32_t getSendPeriod() const;
    bool sendPeriodIsSet() const;
    void unsetsendPeriod();
    void setSendPeriod(int32_t value);

    /// <summary>
    /// **参数解释**： 发送星期，周报需要设置 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    int32_t getSendWeekDay() const;
    bool sendWeekDayIsSet() const;
    void unsetsendWeekDay();
    void setSendWeekDay(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    StatisticPeriod getStatisticPeriod() const;
    bool statisticPeriodIsSet() const;
    void unsetstatisticPeriod();
    void setStatisticPeriod(const StatisticPeriod& value);

    /// <summary>
    /// **参数解释**： 启用状态 **约束限制**： 不涉及 **取值范围**： 0 关闭 1 启用 **默认取值**： 不涉及
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// **参数解释**： 通知群组 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// **参数解释**： 通知方式 **约束限制**： 不涉及 **取值范围**： 0 SMN通知方式 1 不需要通知 **默认取值**： 不涉及
    /// </summary>

    int32_t getSubscriptionType() const;
    bool subscriptionTypeIsSet() const;
    void unsetsubscriptionType();
    void setSubscriptionType(int32_t value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t sendPeriod_;
    bool sendPeriodIsSet_;
    int32_t sendWeekDay_;
    bool sendWeekDayIsSet_;
    StatisticPeriod statisticPeriod_;
    bool statisticPeriodIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::string topicUrn_;
    bool topicUrnIsSet_;
    int32_t subscriptionType_;
    bool subscriptionTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateReportProfileDto_H_
