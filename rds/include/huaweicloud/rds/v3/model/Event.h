
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Event_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Event_H_


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
/// 事件信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  Event
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
    /// 采样时间
    /// </summary>

    std::string getSampleTime() const;
    bool sampleTimeIsSet() const;
    void unsetsampleTime();
    void setSampleTime(const std::string& value);

    /// <summary>
    /// 个数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 会话状态
    /// </summary>

    std::string getSessionStatus() const;
    bool sessionStatusIsSet() const;
    void unsetsessionStatus();
    void setSessionStatus(const std::string& value);

    /// <summary>
    /// 等待事件类型
    /// </summary>

    std::string getWaitEventType() const;
    bool waitEventTypeIsSet() const;
    void unsetwaitEventType();
    void setWaitEventType(const std::string& value);

    /// <summary>
    /// 等待事件名称
    /// </summary>

    std::string getWaitEventName() const;
    bool waitEventNameIsSet() const;
    void unsetwaitEventName();
    void setWaitEventName(const std::string& value);


protected:
    std::string sampleTime_;
    bool sampleTimeIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::string sessionStatus_;
    bool sessionStatusIsSet_;
    std::string waitEventType_;
    bool waitEventTypeIsSet_;
    std::string waitEventName_;
    bool waitEventNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Event_H_
