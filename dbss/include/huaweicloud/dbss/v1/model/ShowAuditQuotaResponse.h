
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditQuotaResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditQuotaResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ShowAuditQuotaResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAuditQuotaResponse();
    virtual ~ShowAuditQuotaResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuditQuotaResponse members

    /// <summary>
    /// 实例当前剩余配额。
    /// </summary>

    int64_t getAuditQuota() const;
    bool auditQuotaIsSet() const;
    void unsetauditQuota();
    void setAuditQuota(int64_t value);

    /// <summary>
    /// Cpu当前剩余配额。
    /// </summary>

    int64_t getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(int64_t value);

    /// <summary>
    /// 项目Id。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 配额。
    /// </summary>

    int64_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int64_t value);

    /// <summary>
    /// 内存当前剩余配额
    /// </summary>

    int64_t getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(int64_t value);


protected:
    int64_t auditQuota_;
    bool auditQuotaIsSet_;
    int64_t cpu_;
    bool cpuIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    int64_t quota_;
    bool quotaIsSet_;
    int64_t ram_;
    bool ramIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditQuotaResponse_H_
