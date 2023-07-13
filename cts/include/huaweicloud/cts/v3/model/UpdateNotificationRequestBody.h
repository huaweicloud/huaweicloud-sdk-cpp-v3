
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_UpdateNotificationRequestBody_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_UpdateNotificationRequestBody_H_

#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/Filter.h>
#include <string>
#include <huaweicloud/cts/v3/model/Operations.h>
#include <huaweicloud/cts/v3/model/NotificationUsers.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改关键操作通知规则的请求体。
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  UpdateNotificationRequestBody
    : public ModelBase
{
public:
    UpdateNotificationRequestBody();
    virtual ~UpdateNotificationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateNotificationRequestBody members

    /// <summary>
    /// 标识关键操作名称。
    /// </summary>

    std::string getNotificationName() const;
    bool notificationNameIsSet() const;
    void unsetnotificationName();
    void setNotificationName(const std::string& value);

    /// <summary>
    /// 标识操作类型。 目前支持的操作类型有完整类型(complete)和自定义类型(customized)。 完整类型下，CTS发送通知的对象为已对接服务的所有事件。 自定义类型下，CTS发送通知的对象是在operations列表中指定的事件。
    /// </summary>

    std::string getOperationType() const;
    bool operationTypeIsSet() const;
    void unsetoperationType();
    void setOperationType(const std::string& value);

    /// <summary>
    /// 操作事件列表。
    /// </summary>

    std::vector<Operations>& getOperations();
    bool operationsIsSet() const;
    void unsetoperations();
    void setOperations(const std::vector<Operations>& value);

    /// <summary>
    /// 通知用户列表，目前最多支持对10个用户组和50个用户发起的操作进行配置。
    /// </summary>

    std::vector<NotificationUsers>& getNotifyUserList();
    bool notifyUserListIsSet() const;
    void unsetnotifyUserList();
    void setNotifyUserList(const std::vector<NotificationUsers>& value);

    /// <summary>
    /// 标识关键操作通知状态，包括正常(enabled)，停止(disabled)两种状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 消息通知服务的topic_urn或者函数工作流的func_urn，当“status”字段为enabled时，该字段必填。 - 消息通知服务的topic_urn可以通过消息通知服务的查询主题列表API获取，示例：urn:smn:regionId:f96188c7ccaf4ffba0c9aa149ab2bd57:test_topic_v2。 - 函数工作流的func_urn可以通过函数工作流的获取函数列表API获取，示例：urn:fss:xxxxxxxxx:7aad83af3e8d42e99ac194e8419e2c9b:function:default:test。
    /// </summary>

    std::string getTopicId() const;
    bool topicIdIsSet() const;
    void unsettopicId();
    void setTopicId(const std::string& value);

    /// <summary>
    /// 关键操作通知id。
    /// </summary>

    std::string getNotificationId() const;
    bool notificationIdIsSet() const;
    void unsetnotificationId();
    void setNotificationId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Filter getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const Filter& value);


protected:
    std::string notificationName_;
    bool notificationNameIsSet_;
    std::string operationType_;
    bool operationTypeIsSet_;
    std::vector<Operations> operations_;
    bool operationsIsSet_;
    std::vector<NotificationUsers> notifyUserList_;
    bool notifyUserListIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string topicId_;
    bool topicIdIsSet_;
    std::string notificationId_;
    bool notificationIdIsSet_;
    Filter filter_;
    bool filterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_UpdateNotificationRequestBody_H_
