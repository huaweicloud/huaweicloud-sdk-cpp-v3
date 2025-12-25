
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_AuditResult_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_AuditResult_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/codeartsartifact/v2/model/AuditDO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  AuditResult
    : public ModelBase
{
public:
    AuditResult();
    virtual ~AuditResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditResult members

    /// <summary>
    /// **参数解释**： 审计日志列表。  **取值范围**： 不涉及。
    /// </summary>

    std::vector<AuditDO>& getAuditInfoList();
    bool auditInfoListIsSet() const;
    void unsetauditInfoList();
    void setAuditInfoList(const std::vector<AuditDO>& value);

    /// <summary>
    /// **参数解释**： 审计日志条数。  **取值范围**： 不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<AuditDO> auditInfoList_;
    bool auditInfoListIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_AuditResult_H_
