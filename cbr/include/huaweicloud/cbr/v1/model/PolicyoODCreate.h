
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyoODCreate_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyoODCreate_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  PolicyoODCreate
    : public ModelBase
{
public:
    PolicyoODCreate();
    virtual ~PolicyoODCreate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PolicyoODCreate members

    /// <summary>
    /// 保留日备个数，该备份不受保留最大备份数限制。取值为0到100。若选择该参数，则timezone 也必选。
    /// </summary>

    int32_t getDayBackups() const;
    bool dayBackupsIsSet() const;
    void unsetdayBackups();
    void setDayBackups(int32_t value);

    /// <summary>
    /// 复制的目标项目ID，仅在跨区域复制时才会使用并且必须指定。
    /// </summary>

    std::string getDestinationProjectId() const;
    bool destinationProjectIdIsSet() const;
    void unsetdestinationProjectId();
    void setDestinationProjectId(const std::string& value);

    /// <summary>
    /// 复制的目标区域，仅在跨区域复制时才会使用并且必须指定。长度限制：0- 255，只能由字母、数字、“_”、“-”组成
    /// </summary>

    std::string getDestinationRegion() const;
    bool destinationRegionIsSet() const;
    void unsetdestinationRegion();
    void setDestinationRegion(const std::string& value);

    /// <summary>
    /// 跨区域复制时，是否启用加速从而缩减复制的时间，如果不指定，默认不启用加速。
    /// </summary>

    bool isEnableAcceleration() const;
    bool enableAccelerationIsSet() const;
    void unsetenableAcceleration();
    void setEnableAcceleration(bool value);

    /// <summary>
    /// 单个备份对象自动备份的最大备份数。取值为-1或0-99999。-1代表不按备份数清理。若该字段和retention_duration_days字段同时为空，备份会永久保留。
    /// </summary>

    int32_t getMaxBackups() const;
    bool maxBackupsIsSet() const;
    void unsetmaxBackups();
    void setMaxBackups(int32_t value);

    /// <summary>
    /// 保留月备个数，该备份不受保留最大备份数限制。取值为0到100。若选择该参数，则timezone 也必选。
    /// </summary>

    int32_t getMonthBackups() const;
    bool monthBackupsIsSet() const;
    void unsetmonthBackups();
    void setMonthBackups(int32_t value);

    /// <summary>
    /// 备份保留时长，单位天。最长支持99999天。-1代表不按时间清理。若该字段和max_backups 参数同时为空，备份会永久保留。
    /// </summary>

    int32_t getRetentionDurationDays() const;
    bool retentionDurationDaysIsSet() const;
    void unsetretentionDurationDays();
    void setRetentionDurationDays(int32_t value);

    /// <summary>
    /// 用户所在时区,格式形如UTC+08:00, 若选择年备，月备，周备，日备中任一参数，则该参数不能为空。
    /// </summary>

    std::string getTimezone() const;
    bool timezoneIsSet() const;
    void unsettimezone();
    void setTimezone(const std::string& value);

    /// <summary>
    /// 保留周备个数，该备份不受保留最大备份数限制。取值为0到100。若选择该参数，则timezone 也必选。
    /// </summary>

    int32_t getWeekBackups() const;
    bool weekBackupsIsSet() const;
    void unsetweekBackups();
    void setWeekBackups(int32_t value);

    /// <summary>
    /// 保留年备个数，该备份不受保留最大备份数限制。取值为0到100。若选择该参数，则timezone 也必选。
    /// </summary>

    int32_t getYearBackups() const;
    bool yearBackupsIsSet() const;
    void unsetyearBackups();
    void setYearBackups(int32_t value);

    /// <summary>
    /// 每间隔多少次执行一次全量备份，当取值为 -1 时，不执行全量备份。  最小值：-1  最大值：100
    /// </summary>

    int32_t getFullBackupInterval() const;
    bool fullBackupIntervalIsSet() const;
    void unsetfullBackupInterval();
    void setFullBackupInterval(int32_t value);


protected:
    int32_t dayBackups_;
    bool dayBackupsIsSet_;
    std::string destinationProjectId_;
    bool destinationProjectIdIsSet_;
    std::string destinationRegion_;
    bool destinationRegionIsSet_;
    bool enableAcceleration_;
    bool enableAccelerationIsSet_;
    int32_t maxBackups_;
    bool maxBackupsIsSet_;
    int32_t monthBackups_;
    bool monthBackupsIsSet_;
    int32_t retentionDurationDays_;
    bool retentionDurationDaysIsSet_;
    std::string timezone_;
    bool timezoneIsSet_;
    int32_t weekBackups_;
    bool weekBackupsIsSet_;
    int32_t yearBackups_;
    bool yearBackupsIsSet_;
    int32_t fullBackupInterval_;
    bool fullBackupIntervalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyoODCreate_H_
