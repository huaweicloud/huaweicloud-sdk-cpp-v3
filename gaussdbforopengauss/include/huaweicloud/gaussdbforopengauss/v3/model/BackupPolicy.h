
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BackupPolicy_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BackupPolicy_H_

#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 备份策略信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  BackupPolicy
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
    /// 备份文件可以保存的天数。  取值范围：1-732天。
    /// </summary>

    int32_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int32_t value);

    /// <summary>
    /// 备份时间段。自动备份将在该时间段内触发。  取值范围：非空，格式必须为hh:mm-HH:MM且有效，当前时间指UTC时间。  HH取值必须比hh大1，mm和MM取值必须相同，且取值必须为00。  取值示例：  21:00-22:00
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 全量备份周期配置。自动全量备份将在每星期指定的天进行。取值范围：格式为逗号隔开的数字，数字代表星期。取值示例：1,2,3,4则表示备份周期配置为星期一、星期二、星期三和星期四。
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 差异备份间隔时间配置。每次自动差异备份的间隔时间。  取值范围：15、30、60、180、360、720、1440。单位：分钟。  取值示例：30
    /// </summary>

    std::string getDifferentialPeriod() const;
    bool differentialPeriodIsSet() const;
    void unsetdifferentialPeriod();
    void setDifferentialPeriod(const std::string& value);

    /// <summary>
    /// 备份限速  取值范围：0 ~ 1024
    /// </summary>

    int32_t getRateLimit() const;
    bool rateLimitIsSet() const;
    void unsetrateLimit();
    void setRateLimit(int32_t value);

    /// <summary>
    /// 控制差量备份时读取磁盘上表文件差量修改页面的预取页面个数。当差量修改页面非常集中时（如数据导入场景），可以适当调大该值；当差量修改页面非常分散时（如随机更新），可以适当调小该值。  取值范围：1 ~ 8192
    /// </summary>

    int32_t getPrefetchBlock() const;
    bool prefetchBlockIsSet() const;
    void unsetprefetchBlock();
    void setPrefetchBlock(int32_t value);

    /// <summary>
    /// 废弃。
    /// </summary>

    int32_t getFilesplitSize() const;
    bool filesplitSizeIsSet() const;
    void unsetfilesplitSize();
    void setFilesplitSize(int32_t value);

    /// <summary>
    /// 全量、差量备份时产生的备份文件会根据分片大小进行拆分，可设置范围为0~1024GB，设置需为4的倍数，默认4GB，0GB表示不限制大小。  取值范围：0 ~ 1024
    /// </summary>

    int32_t getFileSplitSize() const;
    bool fileSplitSizeIsSet() const;
    void unsetfileSplitSize();
    void setFileSplitSize(int32_t value);

    /// <summary>
    /// 是否启用备机备份。  取值范围：true|false
    /// </summary>

    bool isEnableStandbyBackup() const;
    bool enableStandbyBackupIsSet() const;
    void unsetenableStandbyBackup();
    void setEnableStandbyBackup(bool value);


protected:
    int32_t keepDays_;
    bool keepDaysIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string period_;
    bool periodIsSet_;
    std::string differentialPeriod_;
    bool differentialPeriodIsSet_;
    int32_t rateLimit_;
    bool rateLimitIsSet_;
    int32_t prefetchBlock_;
    bool prefetchBlockIsSet_;
    int32_t filesplitSize_;
    bool filesplitSizeIsSet_;
    int32_t fileSplitSize_;
    bool fileSplitSizeIsSet_;
    bool enableStandbyBackup_;
    bool enableStandbyBackupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BackupPolicy_H_
