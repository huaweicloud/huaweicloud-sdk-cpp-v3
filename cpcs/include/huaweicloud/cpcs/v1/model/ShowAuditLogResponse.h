
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAuditLogResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAuditLogResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/ShowAuditLogResponseBody_audit_records.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowAuditLogResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAuditLogResponse();
    virtual ~ShowAuditLogResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuditLogResponse members

    /// <summary>
    /// 日志总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 日志列表
    /// </summary>

    std::vector<ShowAuditLogResponseBody_audit_records>& getAuditRecords();
    bool auditRecordsIsSet() const;
    void unsetauditRecords();
    void setAuditRecords(const std::vector<ShowAuditLogResponseBody_audit_records>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<ShowAuditLogResponseBody_audit_records> auditRecords_;
    bool auditRecordsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAuditLogResponse_H_
