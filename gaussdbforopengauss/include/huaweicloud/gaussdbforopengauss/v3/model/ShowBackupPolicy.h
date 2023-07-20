
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowBackupPolicy_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowBackupPolicy_H_

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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowBackupPolicy
    : public ModelBase
{
public:
    ShowBackupPolicy();
    virtual ~ShowBackupPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowBackupPolicy members

    /// <summary>
    /// 全量备份文件可以保存的天数。
    /// </summary>

    int32_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int32_t value);

    /// <summary>
    /// 全量备份时间段。自动备份将在该时间段内触发。除关闭自动备份策略外，必选。  取值范围：格式必须为hh:mm-HH:MM且有效，当前时间指UTC时间。  - HH取值必须比hh大1。 - mm和MM取值必须相同，且取值必须为00。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 全量备份周期配置。自动备份将在每星期指定的天进行。  取值范围：格式为逗号隔开的数字，数字代表星期。
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 差量备份周期配置。自动差量备份将每隔周期分钟执行(废弃)。
    /// </summary>

    std::string getDifferentialPriod() const;
    bool differentialPriodIsSet() const;
    void unsetdifferentialPriod();
    void setDifferentialPriod(const std::string& value);

    /// <summary>
    /// 差量备份周期配置。自动差量备份将每隔周期分钟执行。
    /// </summary>

    std::string getDifferentialPeriod() const;
    bool differentialPeriodIsSet() const;
    void unsetdifferentialPeriod();
    void setDifferentialPeriod(const std::string& value);

    /// <summary>
    /// 备份时备份数据上传OBS的速度，单位为MB/s。范围为0~1024MB/s，默认75MB/s，0MB/s表示不限速。
    /// </summary>

    int32_t getRateLimit() const;
    bool rateLimitIsSet() const;
    void unsetrateLimit();
    void setRateLimit(int32_t value);

    /// <summary>
    /// 控制差量备份时读取磁盘上表文件差量修改页面的预取页面个数，可设置范围为1~8192，默认64。
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
    std::string differentialPriod_;
    bool differentialPriodIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowBackupPolicy_H_
