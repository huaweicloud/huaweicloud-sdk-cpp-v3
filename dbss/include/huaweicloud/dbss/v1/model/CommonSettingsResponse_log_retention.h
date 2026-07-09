
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_CommonSettingsResponse_log_retention_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_CommonSettingsResponse_log_retention_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 日志保留设置
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  CommonSettingsResponse_log_retention
    : public ModelBase
{
public:
    CommonSettingsResponse_log_retention();
    virtual ~CommonSettingsResponse_log_retention();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommonSettingsResponse_log_retention members

    /// <summary>
    /// 设定的审计日志保存时间
    /// </summary>

    int32_t getRetentionDays() const;
    bool retentionDaysIsSet() const;
    void unsetretentionDays();
    void setRetentionDays(int32_t value);

    /// <summary>
    /// 审计日志保存时间设置最小时间
    /// </summary>

    int32_t getRangeDaysMin() const;
    bool rangeDaysMinIsSet() const;
    void unsetrangeDaysMin();
    void setRangeDaysMin(int32_t value);

    /// <summary>
    /// 审计日志保存时间设置最大时间
    /// </summary>

    int32_t getRangeDaysMax() const;
    bool rangeDaysMaxIsSet() const;
    void unsetrangeDaysMax();
    void setRangeDaysMax(int32_t value);


protected:
    int32_t retentionDays_;
    bool retentionDaysIsSet_;
    int32_t rangeDaysMin_;
    bool rangeDaysMinIsSet_;
    int32_t rangeDaysMax_;
    bool rangeDaysMaxIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_CommonSettingsResponse_log_retention_H_
