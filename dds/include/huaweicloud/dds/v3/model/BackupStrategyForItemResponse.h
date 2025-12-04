
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_BackupStrategyForItemResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_BackupStrategyForItemResponse_H_


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
/// 自动备份策略。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  BackupStrategyForItemResponse
    : public ModelBase
{
public:
    BackupStrategyForItemResponse();
    virtual ~BackupStrategyForItemResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupStrategyForItemResponse members

    /// <summary>
    /// 备份时间段。自动备份将在该时间段内触发。当前时间指UTC时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 已生成备份文件可以保存的天数。取值范围：0~732。
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

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_BackupStrategyForItemResponse_H_
