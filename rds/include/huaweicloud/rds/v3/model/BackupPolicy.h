
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BackupPolicy_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BackupPolicy_H_


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
/// 备份策略信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  BackupPolicy
    : public ModelBase
{
public:
    BackupPolicy();
    virtual ~BackupPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupPolicy members

    /// <summary>
    /// 指定已生成的备份文件可以保存的天数。  取值范围：1～732。如果需要延长保留时间请联系客服人员申请，自动备份最长可以保留10年。
    /// </summary>

    int32_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int32_t value);

    /// <summary>
    /// 备份时间段。自动备份将在该时间段内触发。除关闭自动备份策略外，必选。  取值范围：格式必须为hh:mm-HH:MM且有效，当前时间指UTC时间。  - HH取值必须比hh大1。 - mm和MM取值必须相同，且取值必须为00、15、30或45。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 备份周期配置。自动备份将在每星期指定的天进行。除关闭自动备份策略外，必选。  取值范围：格式为逗号隔开的数字，数字代表星期。
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);


protected:
    int32_t keepDays_;
    bool keepDaysIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string period_;
    bool periodIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BackupPolicy_H_
