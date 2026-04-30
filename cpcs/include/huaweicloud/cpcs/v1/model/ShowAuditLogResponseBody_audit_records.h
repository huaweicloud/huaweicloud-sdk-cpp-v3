
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAuditLogResponseBody_audit_records_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAuditLogResponseBody_audit_records_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowAuditLogResponseBody_audit_records
    : public ModelBase
{
public:
    ShowAuditLogResponseBody_audit_records();
    virtual ~ShowAuditLogResponseBody_audit_records();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuditLogResponseBody_audit_records members

    /// <summary>
    /// 日志ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 集群ID
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 集群类型
    /// </summary>

    std::string getClusterType() const;
    bool clusterTypeIsSet() const;
    void unsetclusterType();
    void setClusterType(const std::string& value);

    /// <summary>
    /// 操作
    /// </summary>

    std::string getOperation() const;
    bool operationIsSet() const;
    void unsetoperation();
    void setOperation(const std::string& value);

    /// <summary>
    /// 时间
    /// </summary>

    int64_t getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(int64_t value);

    /// <summary>
    /// 操作状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 操作失败消息
    /// </summary>

    std::string getFailureMessage() const;
    bool failureMessageIsSet() const;
    void unsetfailureMessage();
    void setFailureMessage(const std::string& value);

    /// <summary>
    /// 操作验证信息
    /// </summary>

    std::string getVerification() const;
    bool verificationIsSet() const;
    void unsetverification();
    void setVerification(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string clusterType_;
    bool clusterTypeIsSet_;
    std::string operation_;
    bool operationIsSet_;
    int64_t time_;
    bool timeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string failureMessage_;
    bool failureMessageIsSet_;
    std::string verification_;
    bool verificationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAuditLogResponseBody_audit_records_H_
