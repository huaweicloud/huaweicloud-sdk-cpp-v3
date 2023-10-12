
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_Event_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_Event_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/csms/v1/model/Notification.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 事件通知对象。
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  Event
    : public ModelBase
{
public:
    Event();
    virtual ~Event();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Event members

    /// <summary>
    /// 事件通知名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 事件通知的资源标识符。
    /// </summary>

    std::string getEventId() const;
    bool eventIdIsSet() const;
    void unseteventId();
    void setEventId(const std::string& value);

    /// <summary>
    /// 设置事件的基础事件类型列表,。  约束：数组大小：最小1，最大12。 
    /// </summary>

    std::vector<std::string>& getEventTypes();
    bool eventTypesIsSet() const;
    void unseteventTypes();
    void setEventTypes(const std::vector<std::string>& value);

    /// <summary>
    /// 事件通知状态，取值如下。  ENABLED：表示启用状态 DISABLED：表示禁用状态 
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 事件通知创建时间，时间戳，即从1970年1月1日至该时间的总秒数。 
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 事件通知上次更新时间，时间戳，即从1970年1月1日至该时间的总秒数。
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    Notification getNotification() const;
    bool notificationIsSet() const;
    void unsetnotification();
    void setNotification(const Notification& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string eventId_;
    bool eventIdIsSet_;
    std::vector<std::string> eventTypes_;
    bool eventTypesIsSet_;
    std::string state_;
    bool stateIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    Notification notification_;
    bool notificationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_Event_H_
