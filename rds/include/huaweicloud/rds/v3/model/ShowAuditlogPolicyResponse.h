
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAuditlogPolicyResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAuditlogPolicyResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowAuditlogPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAuditlogPolicyResponse();
    virtual ~ShowAuditlogPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuditlogPolicyResponse members

    /// <summary>
    /// 审计日志保存天数，取值范围0~732。0表示关闭审计日志策略。
    /// </summary>

    int32_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int32_t value);

    /// <summary>
    /// 审计记录的操作类型，动态范围。空表示不过滤任何操作类型。
    /// </summary>

    std::vector<std::string>& getAuditTypes();
    bool auditTypesIsSet() const;
    void unsetauditTypes();
    void setAuditTypes(const std::vector<std::string>& value);

    /// <summary>
    /// 审计记录的所有操作类型。
    /// </summary>

    std::string getAllAuditLogAction() const;
    bool allAuditLogActionIsSet() const;
    void unsetallAuditLogAction();
    void setAllAuditLogAction(const std::string& value);


protected:
    int32_t keepDays_;
    bool keepDaysIsSet_;
    std::vector<std::string> auditTypes_;
    bool auditTypesIsSet_;
    std::string allAuditLogAction_;
    bool allAuditLogActionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAuditlogPolicyResponse_H_
