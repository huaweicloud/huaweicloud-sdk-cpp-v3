
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlBackupPolicy_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlBackupPolicy_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlBackupPolicy
    : public ModelBase
{
public:
    MysqlBackupPolicy();
    virtual ~MysqlBackupPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlBackupPolicy members

    /// <summary>
    /// 备份时间段。自动备份将在该时间段内触发。  取值范围：非空，格式必须为hh:mm-HH:MM且有效，当前时间指UTC时间。HH取值必须比hh大1。mm和MM取值必须相同，且取值必须为00。  取值示例：21:00-22:00
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 备份文件的保留天数。
    /// </summary>

    int32_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int32_t value);

    /// <summary>
    /// 备份周期配置。自动备份将在每星期指定的天进行。  取值范围：格式为逗号隔开的数字，数字代表星期。  取值示例：1,2,3,4则表示备份周期配置为星期一、星期二、星期三和星期四。
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 一级备份保留数量，默认值为0。当一级备份开关开启时，该参数值有效。取值：0或1
    /// </summary>

    int32_t getRetentionNumBackupLevel1() const;
    bool retentionNumBackupLevel1IsSet() const;
    void unsetretentionNumBackupLevel1();
    void setRetentionNumBackupLevel1(int32_t value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    int32_t keepDays_;
    bool keepDaysIsSet_;
    std::string period_;
    bool periodIsSet_;
    int32_t retentionNumBackupLevel1_;
    bool retentionNumBackupLevel1IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlBackupPolicy_H_
