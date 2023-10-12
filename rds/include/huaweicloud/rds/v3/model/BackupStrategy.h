
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BackupStrategy_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BackupStrategy_H_


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
/// 自动备份策略。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  BackupStrategy
    : public ModelBase
{
public:
    BackupStrategy();
    virtual ~BackupStrategy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupStrategy members

    /// <summary>
    /// 备份时间段。自动备份将在该时间段内触发。  取值范围：非空，格式必须为hh:mm-HH:MM且有效，当前时间指UTC时间。  HH取值必须比hh大1。 mm和MM取值必须相同，且取值必须为00、15、30或45。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 指定备份文件的可保存天数。  取值范围：0～732。该参数缺省，或取值为0，表示关闭自动备份策略。如果需要延长保留时间请联系客服人员申请，自动备份最长可以保留2562天。  说明：SQL Server的HA实例不支持关闭自动备份策略。
    /// </summary>

    int32_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int32_t value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    int32_t keepDays_;
    bool keepDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BackupStrategy_H_
