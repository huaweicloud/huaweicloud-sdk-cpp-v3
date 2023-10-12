
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_PublishAppMessageRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_PublishAppMessageRequestBody_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_SMN_V2_EXPORT  PublishAppMessageRequestBody
    : public ModelBase
{
public:
    PublishAppMessageRequestBody();
    virtual ~PublishAppMessageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublishAppMessageRequestBody members

    /// <summary>
    ///  message与message_structure二者选其一。  message, App消息发布。  message_structure, 使用消息结构体方式的App消息发布。  app推送的消息内容，当前支持的推送平台有HMS、APNS、APNS_SANDBOX。  HMS是为开发者提供的消息推送平台。  APNS和APNS_SANDBOX是用于推送iOS消息的服务平台。  HMS平台指定的消息内容不超过2K。  APNS和APNS_SANDBOX平台的消息内容不能超过4K。  推送平台的消息内容格式要求详情见application消息体格式。  华为透传消息  {   \&quot;hps\&quot;: {     \&quot;msg\&quot;: {       \&quot;type\&quot;: 1,       \&quot;body\&quot;: {         \&quot;key\&quot;: \&quot;value\&quot;       }     }   } }  华为系统通知栏消息  {   \&quot;hps\&quot;: {     \&quot;msg\&quot;: {       \&quot;type\&quot;: 3,       \&quot;body\&quot;: {         \&quot;content\&quot;: \&quot;Push message content\&quot;,         \&quot;title\&quot;: \&quot;Push message content\&quot;       },       \&quot;action\&quot;: {         \&quot;type\&quot;: 1,         \&quot;param\&quot;: {           \&quot;intent\&quot;: \&quot;#Intent;compo&#x3D;com.rvr/.Activity;S.W&#x3D;U;end\&quot;         }       }     },     \&quot;ext\&quot;: {       \&quot;biTag\&quot;: \&quot;Trump\&quot;,       \&quot;icon\&quot;: \&quot;http://upload.w.org/00/150pxsvg.png\&quot;     }   } }  苹果平台消息格式 {   \&quot;aps\&quot;: {     \&quot;alert\&quot;: \&quot;hello world\&quot;   } }
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// app推送的消息内容，当前支持的推送平台有HMS、APNS、APNS_SANDBOX。  HMS是为开发者提供的消息推送平台。  APNS和APNS_SANDBOX是用于推送iOS消息的服务平台。  HMS平台指定的消息内容不超过2K。  APNS和APNS_SANDBOX平台的消息内容不能超过4K。  推送平台的消息内容格式要求详情见application消息体格式。  华为透传消息  {   \&quot;HMS\&quot;: {     \&quot;hps\&quot;: {       \&quot;msg\&quot;: {         \&quot;type\&quot;: 1,         \&quot;body\&quot;: {           \&quot;key\&quot;: \&quot;value\&quot;         }       }     }   } }  华为系统通知栏消息  {   \&quot;HMS\&quot;: {     \&quot;hps\&quot;: {       \&quot;msg\&quot;: {         \&quot;type\&quot;: 3,         \&quot;body\&quot;: {           \&quot;content\&quot;: \&quot;Push message content\&quot;,           \&quot;title\&quot;: \&quot;Push message content\&quot;         },         \&quot;action\&quot;: {           \&quot;type\&quot;: 1,           \&quot;param\&quot;: {             \&quot;intent\&quot;: \&quot;#Intent;compo&#x3D;com.rvr/.Activity;S.W&#x3D;U;end\&quot;           }         }       },       \&quot;ext\&quot;: {         \&quot;biTag\&quot;: \&quot;Trump\&quot;,         \&quot;icon\&quot;: \&quot;http://upload.w.org/00/150pxsvg.png\&quot;       }     }   } }  苹果平台消息格式  {   \&quot;APNS\&quot;: {     \&quot;aps\&quot;: {       \&quot;alert\&quot;: \&quot;hello world\&quot;     }   } }
    /// </summary>

    std::string getMessageStructure() const;
    bool messageStructureIsSet() const;
    void unsetmessageStructure();
    void setMessageStructure(const std::string& value);

    /// <summary>
    /// 消息发送的生存时间，是相对于发布时间的。  SMN系统将移动推送消息转交给推送平台前，会计算该消息在系统消耗的时间。只有消耗的时间小于time_to_live时，SMN才会将消息转交给推送平台，并将time_to_live减去消耗的时间传递给推送平台，否则消息废弃。  time _to_live的单位是s，变量默认值是3600s，即一小时。值为正整数且小于等于3600*24。
    /// </summary>

    std::string getTimeToLive() const;
    bool timeToLiveIsSet() const;
    void unsettimeToLive();
    void setTimeToLive(const std::string& value);


protected:
    std::string message_;
    bool messageIsSet_;
    std::string messageStructure_;
    bool messageStructureIsSet_;
    std::string timeToLive_;
    bool timeToLiveIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_PublishAppMessageRequestBody_H_
