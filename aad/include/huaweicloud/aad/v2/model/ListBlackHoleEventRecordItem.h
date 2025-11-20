
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListBlackHoleEventRecordItem_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListBlackHoleEventRecordItem_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// item
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ListBlackHoleEventRecordItem
    : public ModelBase
{
public:
    ListBlackHoleEventRecordItem();
    virtual ~ListBlackHoleEventRecordItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBlackHoleEventRecordItem members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 租户名
    /// </summary>

    std::string getTenantName() const;
    bool tenantNameIsSet() const;
    void unsettenantName();
    void setTenantName(const std::string& value);

    /// <summary>
    /// 高防ip
    /// </summary>

    std::string getVip() const;
    bool vipIsSet() const;
    void unsetvip();
    void setVip(const std::string& value);

    /// <summary>
    /// ip id
    /// </summary>

    std::string getVipId() const;
    bool vipIdIsSet() const;
    void unsetvipId();
    void setVipId(const std::string& value);

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 事件类型 block-黑洞中，unblock-黑洞结束
    /// </summary>

    std::string getEventType() const;
    bool eventTypeIsSet() const;
    void unseteventType();
    void setEventType(const std::string& value);

    /// <summary>
    /// 封堵开始时间
    /// </summary>

    int32_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int32_t value);

    /// <summary>
    /// 封堵结束时间
    /// </summary>

    int32_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int32_t value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string tenantName_;
    bool tenantNameIsSet_;
    std::string vip_;
    bool vipIsSet_;
    std::string vipId_;
    bool vipIdIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string eventType_;
    bool eventTypeIsSet_;
    int32_t startTime_;
    bool startTimeIsSet_;
    int32_t endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListBlackHoleEventRecordItem_H_
