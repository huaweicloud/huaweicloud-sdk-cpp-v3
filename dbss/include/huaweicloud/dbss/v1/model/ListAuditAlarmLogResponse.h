
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditAlarmLogResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditAlarmLogResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/AlarmLogResponse_alarm_log.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditAlarmLogResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditAlarmLogResponse();
    virtual ~ListAuditAlarmLogResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditAlarmLogResponse members

    /// <summary>
    /// 总条数
    /// </summary>

    int32_t getTotalNum() const;
    bool totalNumIsSet() const;
    void unsettotalNum();
    void setTotalNum(int32_t value);

    /// <summary>
    /// 告警列表
    /// </summary>

    std::vector<AlarmLogResponse_alarm_log>& getAlarmLog();
    bool alarmLogIsSet() const;
    void unsetalarmLog();
    void setAlarmLog(const std::vector<AlarmLogResponse_alarm_log>& value);


protected:
    int32_t totalNum_;
    bool totalNumIsSet_;
    std::vector<AlarmLogResponse_alarm_log> alarmLog_;
    bool alarmLogIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditAlarmLogResponse_H_
