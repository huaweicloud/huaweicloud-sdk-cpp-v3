
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_CreateNotificationResponse_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_CreateNotificationResponse_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  CreateNotificationResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateNotificationResponse();
    virtual ~CreateNotificationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateNotificationResponse members

    /// <summary>
    /// 通知名称。
    /// </summary>

    std::string getNotificationName() const;
    bool notificationNameIsSet() const;
    void unsetnotificationName();
    void setNotificationName(const std::string& value);

    /// <summary>
    /// 操作类型，完整和自定义。
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
    /// 云服务委托名称。
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);

    /// <summary>
    /// 通知状态，启用和停用。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 消息通知服务(SMN)主题的唯一的资源标识，可通过查询主题列表获取该标识。
    /// </summary>

    std::string getTopicId() const;
    bool topicIdIsSet() const;
    void unsettopicId();
    void setTopicId(const std::string& value);

    /// <summary>
    /// 通知的唯一标识ID。
    /// </summary>

    std::string getNotificationId() const;
    bool notificationIdIsSet() const;
    void unsetnotificationId();
    void setNotificationId(const std::string& value);

    /// <summary>
    /// 通知类型，消息通知，函数触发器。
    /// </summary>

    std::string getNotificationType() const;
    bool notificationTypeIsSet() const;
    void unsetnotificationType();
    void setNotificationType(const std::string& value);

    /// <summary>
    /// 项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 通知规则创建时间。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

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
    std::string agencyName_;
    bool agencyNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string topicId_;
    bool topicIdIsSet_;
    std::string notificationId_;
    bool notificationIdIsSet_;
    std::string notificationType_;
    bool notificationTypeIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    Filter filter_;
    bool filterIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_CreateNotificationResponse_H_
