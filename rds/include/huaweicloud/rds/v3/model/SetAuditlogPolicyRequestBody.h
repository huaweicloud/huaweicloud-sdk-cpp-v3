
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SetAuditlogPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SetAuditlogPolicyRequestBody_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SetAuditlogPolicyRequestBody
    : public ModelBase
{
public:
    SetAuditlogPolicyRequestBody();
    virtual ~SetAuditlogPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SetAuditlogPolicyRequestBody members

    /// <summary>
    /// 审计日志保存天数，取值范围0~732。0表示关闭审计日志策略。
    /// </summary>

    int32_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int32_t value);

    /// <summary>
    /// 仅关闭审计日志策略时有效。  - true（默认），表示关闭审计日志策略的同时，延迟删除已有的历史审计日志。 - false，表示关闭审计日志策略的同时，删除已有的历史审计日志。
    /// </summary>

    bool isReserveAuditlogs() const;
    bool reserveAuditlogsIsSet() const;
    void unsetreserveAuditlogs();
    void setReserveAuditlogs(bool value);


protected:
    int32_t keepDays_;
    bool keepDaysIsSet_;
    bool reserveAuditlogs_;
    bool reserveAuditlogsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SetAuditlogPolicyRequestBody_H_
