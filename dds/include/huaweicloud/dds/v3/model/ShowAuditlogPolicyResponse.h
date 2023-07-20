
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowAuditlogPolicyResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowAuditlogPolicyResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowAuditlogPolicyResponse
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
    /// 审计日志保存天数，审计日志策略关闭时为0。
    /// </summary>

    int32_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int32_t value);

    /// <summary>
    /// 审计范围。
    /// </summary>

    std::string getAuditScope() const;
    bool auditScopeIsSet() const;
    void unsetauditScope();
    void setAuditScope(const std::string& value);

    /// <summary>
    /// 审计类型。
    /// </summary>

    std::vector<std::string>& getAuditTypes();
    bool auditTypesIsSet() const;
    void unsetauditTypes();
    void setAuditTypes(const std::vector<std::string>& value);


protected:
    int32_t keepDays_;
    bool keepDaysIsSet_;
    std::string auditScope_;
    bool auditScopeIsSet_;
    std::vector<std::string> auditTypes_;
    bool auditTypesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowAuditlogPolicyResponse_H_
