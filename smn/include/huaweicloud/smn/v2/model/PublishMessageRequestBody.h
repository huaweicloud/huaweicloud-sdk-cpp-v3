
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_PublishMessageRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_PublishMessageRequestBody_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/MessageAttribute.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  PublishMessageRequestBody
    : public ModelBase
{
public:
    PublishMessageRequestBody();
    virtual ~PublishMessageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublishMessageRequestBody members

    /// <summary>
    /// 消息标题，给邮箱订阅者发送邮件时作为邮件主题，长度不能超过512个字节。
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 发送的消息。消息体必须是UTF-8编码的字符串，大小至多256KB。如果订阅者是手机号码，长度不超过490个字符，超出部分系统自动截断。短信内容不能包含“[]”或者“【】”符号。  对于移动推送订阅者推送消息，message消息必须符合移动推送平台的消息格式，消息格式请参见application消息体格式。否则移动app无法收到消息，目前支持的平台有HMS、APNS、APNS_SANDBOX。 说明： 三种消息发送方式  message  message_structure  message_template_name  至少设置其中一个，如果同时设置，生效的优先级为 message_structure &gt; message_template_name &gt; message。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// Json格式的字符串。支持“email”、“sms”、 “http”、“https”、“dms”、“functiongraph”、“functionstage”、“HMS”、“APNS”、“APNS_SANDBOX”、 \&quot;dingding\&quot;, \&quot;wechat\&quot;,”feishu“, \&quot;welink\&quot;。其中，“HMS”、“APNS”以及“APNS_SANDBOX”三种消息的格式请参见application消息体格式。必须设置默认的消息“default”，当匹配不到消息协议时，按“default”中的内容发送。其中，钉钉、微信、飞书、welink协议类型的消息需指定msgType字段；钉钉，微信和飞书机器人协议支持msgType为text（纯文本）和markdown（MD）格式消息，welink和红版welink机器人类型暂仅支持msgType为text的纯文本消息。  说明： 三种消息发送方式  message  message_structure  message_template_name  至少设置其中一个，如果同时设置，生效的优先级为 message_structure &gt; message_template_name &gt; message。  华为透传消息  {   \&quot;hps\&quot;: {     \&quot;msg\&quot;: {       \&quot;type\&quot;: 1,       \&quot;body\&quot;: {         \&quot;key\&quot;: \&quot;value\&quot;       }     }   } }  华为系统通知栏消息  {   \&quot;hps\&quot;: {     \&quot;msg\&quot;: {       \&quot;type\&quot;: 3,       \&quot;body\&quot;: {         \&quot;content\&quot;: \&quot;Push message content\&quot;,         \&quot;title\&quot;: \&quot;Push message content\&quot;       },       \&quot;action\&quot;: {         \&quot;type\&quot;: 1,         \&quot;param\&quot;: {           \&quot;intent\&quot;: \&quot;#Intent;compo&#x3D;com.rvr/.Activity;S.W&#x3D;U;end\&quot;         }       }     },     \&quot;ext\&quot;: {       \&quot;biTag\&quot;: \&quot;Trump\&quot;,       \&quot;icon\&quot;: \&quot;http://upload.w.org/00/150pxsvg.png\&quot;     }   } }  苹果平台消息格式  {   \&quot;aps\&quot;: {     \&quot;alert\&quot;: \&quot;hello world\&quot;   } }
    /// </summary>

    std::string getMessageStructure() const;
    bool messageStructureIsSet() const;
    void unsetmessageStructure();
    void setMessageStructure(const std::string& value);

    /// <summary>
    /// 消息模板名称，可通过[查询消息模板列表](ListMessageTemplates.xml)获取名称。  说明： 三种消息发送方式:  message  message_structure  message_template_name  至少设置其中一个，如果同时设置，生效的优先级为 message_structure &gt; message_template_name &gt; message。
    /// </summary>

    std::string getMessageTemplateName() const;
    bool messageTemplateNameIsSet() const;
    void unsetmessageTemplateName();
    void setMessageTemplateName(const std::string& value);

    /// <summary>
    /// tag以及替换tag的参数组成的字典。消息模板中的标签对应的值。使用消息模板方式的消息发布必须携带该参数。字典中的key为消息模板中的参数名称，不超过21个字符。字典中的value为消息模板中的参数被替换后的值，不超过1KB。
    /// </summary>

    std::map<std::string, std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 指消息在SMN系统内部的最长存留时间。超过该存留时间，系统将不再发送该消息。单位是s，变量默认值是3600s，即一小时。值为正整数且小于等于3600*24。
    /// </summary>

    std::string getTimeToLive() const;
    bool timeToLiveIsSet() const;
    void unsettimeToLive();
    void setTimeToLive(const std::string& value);

    /// <summary>
    /// 消息属性列表
    /// </summary>

    std::vector<MessageAttribute>& getMessageAttributes();
    bool messageAttributesIsSet() const;
    void unsetmessageAttributes();
    void setMessageAttributes(const std::vector<MessageAttribute>& value);


protected:
    std::string subject_;
    bool subjectIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string messageStructure_;
    bool messageStructureIsSet_;
    std::string messageTemplateName_;
    bool messageTemplateNameIsSet_;
    std::map<std::string, std::string> tags_;
    bool tagsIsSet_;
    std::string timeToLive_;
    bool timeToLiveIsSet_;
    std::vector<MessageAttribute> messageAttributes_;
    bool messageAttributesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_PublishMessageRequestBody_H_
