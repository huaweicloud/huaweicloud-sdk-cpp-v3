
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListAuditLogsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListAuditLogsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/AuditLogDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListAuditLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditLogsResponse();
    virtual ~ListAuditLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditLogsResponse members

    /// <summary>
    /// **参数解释**：  记录列表。  **取值范围**：  不涉及。
    /// </summary>

    std::vector<AuditLogDetail>& getAuditLogs();
    bool auditLogsIsSet() const;
    void unsetauditLogs();
    void setAuditLogs(const std::vector<AuditLogDetail>& value);

    /// <summary>
    /// **参数解释**：  总记录数。  **取值范围**：  不小于0。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<AuditLogDetail> auditLogs_;
    bool auditLogsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListAuditLogsResponse_H_
