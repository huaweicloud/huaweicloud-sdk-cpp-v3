
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_UpdateAuditTaskStatusRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_UpdateAuditTaskStatusRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/AuditSummaryStatusRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  UpdateAuditTaskStatusRequest
    : public ModelBase
{
public:
    UpdateAuditTaskStatusRequest();
    virtual ~UpdateAuditTaskStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAuditTaskStatusRequest members

    /// <summary>
    /// **参数解释**： 业务类型。 **约束限制**： 区分大小写，以取值范围为准 **取值范围**： - risk: 风险  - audit: 审计实例 **默认取值**： 不涉及
    /// </summary>

    std::string getBusiType() const;
    bool busiTypeIsSet() const;
    void unsetbusiType();
    void setBusiType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AuditSummaryStatusRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AuditSummaryStatusRequest& value);


protected:
    std::string busiType_;
    bool busiTypeIsSet_;
    AuditSummaryStatusRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateAuditTaskStatusRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateAuditTaskStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_UpdateAuditTaskStatusRequest_H_
