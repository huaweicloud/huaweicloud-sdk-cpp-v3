
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_SubTemplateResBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_SubTemplateResBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  SubTemplateResBody
    : public ModelBase
{
public:
    SubTemplateResBody();
    virtual ~SubTemplateResBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubTemplateResBody members

    /// <summary>
    /// **参数解释：**  消息模板的通知渠道。 **取值范围：**  - sms - dingding - wechat - webhook - email - voice - feishu - welink
    /// </summary>

    std::string getSubType() const;
    bool subTypeIsSet() const;
    void unsetsubType();
    void setSubType(const std::string& value);

    /// <summary>
    /// **参数解释：**  对应通知渠道的消息模板正文，$符号后所跟变量仅支持以下变量，根据不同告警类型（关键词告警和sql告警），所支持的变量亦不相同。目前两种告警类型有共同变量如下： 告警级别：${event_severity}; 发生时间：${starts_at}; 告警源：$event.metadata.resource_provider; 资源类型：$event.metadata.resource_type; 资源标识：${resources}; 统计类型：关键词统计; 表达式：$event.annotations.condition_expression; 当前值: $event.annotations.current_value; 统计周期：$event.annotations.frequency; 关键词告警特有变量： 查询时间：$event.annotations.results[0].time; 查询日志：$event.annotations.results[0].raw_results; sql告警特有变量： 日志组/流名称：$event.annotations.results[0].resource_id; 查询语句：$event.annotations.results[0].sql; 查询时间：$event.annotations.results[0].time; 查询URL：$event.annotations.results[0].url; 查询日志：$event.annotations.results[0].raw_results;  告警级别：${event_severity}; 发生时间：${starts_at}; 告警源：$event.metadata.resource_provider; 资源类型：$event.metadata.resource_type; 资源标识：${resources}; 统计类型：关键词统计; 表达式：$event.annotations.condition_expression; 当前值: $event.annotations.current_value; 统计周期：$event.annotations.frequency; 关键词告警特有变量： 查询时间：$event.annotations.results[0].time; 查询日志：$event.annotations.results[0].raw_results; sql告警特有变量： 日志组/流名称：$event.annotations.results[0].resource_id; 查询语句：$event.annotations.results[0].sql; 查询时间：$event.annotations.results[0].time; 查询URL：$event.annotations.results[0].url; 查询日志：$event.annotations.results[0].raw_results;   &gt;变量后面的分号\&quot;;\&quot;为英文符号，必须添加，否则模板会出现替换失败的情况。  **取值范围：**  不涉及。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// **参数解释：**  邮件主题。通知渠道为邮件时生效，即sub_type&#x3D;email。 **取值范围：**  不涉及。
    /// </summary>

    std::string getTopic() const;
    bool topicIsSet() const;
    void unsettopic();
    void setTopic(const std::string& value);

    /// <summary>
    /// **参数解释：**  当消息模板类型为webhook时生效，决定该消息的渲染方式。 **取值范围：**  - HTML - JSON
    /// </summary>

    std::string getSendType() const;
    bool sendTypeIsSet() const;
    void unsetsendType();
    void setSendType(const std::string& value);

    /// <summary>
    /// **参数解释：**  消息模板的适用版本。 **取值范围：**   v1：标识为LTS的消息模板。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    std::string subType_;
    bool subTypeIsSet_;
    std::string content_;
    bool contentIsSet_;
    std::string topic_;
    bool topicIsSet_;
    std::string sendType_;
    bool sendTypeIsSet_;
    std::string version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_SubTemplateResBody_H_
