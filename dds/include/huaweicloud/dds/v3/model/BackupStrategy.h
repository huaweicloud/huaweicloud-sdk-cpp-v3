
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_BackupStrategy_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_BackupStrategy_H_


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
/// 高级备份策略。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  BackupStrategy
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
    /// 备份时间段。自动备份将在该时间段内触发。 取值范围：非空，格式必须为hh:mm-HH:MM且有效，当前时间指UTC时间。   - HH取值必须比hh大1。   - mm和MM取值必须相同，且取值必须为00、15、30或45。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 指定已生成的备份文件可以保存的天数。 取值范围：0～732。   - 取0值，表示不设置自动备份策略。   - 不传该参数，默认开启自动备份策略，备份文件默认保存7天。
    /// </summary>

    std::string getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(const std::string& value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string keepDays_;
    bool keepDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_BackupStrategy_H_
