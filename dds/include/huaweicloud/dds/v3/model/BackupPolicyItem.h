
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_BackupPolicyItem_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_BackupPolicyItem_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 备份策略对象，包括备份保留的天数和备份开始时间。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  BackupPolicyItem
    : public ModelBase
{
public:
    BackupPolicyItem();
    virtual ~BackupPolicyItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupPolicyItem members

    /// <summary>
    /// 备份文件可以保存的天数。
    /// </summary>

    int32_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int32_t value);

    /// <summary>
    /// 备份时间段。自动备份将在该时间段内触发。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 备份周期配置。自动备份将在每星期指定的天进行。
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 是否开启增量备份。true：表示增量备份策略为开启状态；false：表示增量备份策略为关闭状态。
    /// </summary>

    bool isEnableIncrementalBackup() const;
    bool enableIncrementalBackupIsSet() const;
    void unsetenableIncrementalBackup();
    void setEnableIncrementalBackup(bool value);


protected:
    int32_t keepDays_;
    bool keepDaysIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string period_;
    bool periodIsSet_;
    bool enableIncrementalBackup_;
    bool enableIncrementalBackupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_BackupPolicyItem_H_
