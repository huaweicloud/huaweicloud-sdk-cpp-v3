
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_AuditLogDownloadLinkRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_AuditLogDownloadLinkRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  AuditLogDownloadLinkRequestBody
    : public ModelBase
{
public:
    AuditLogDownloadLinkRequestBody();
    virtual ~AuditLogDownloadLinkRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditLogDownloadLinkRequestBody members

    /// <summary>
    /// **参数解释**：  审计日志ID列表。  **约束限制**：  限制50条以内。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<std::string>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> ids_;
    bool idsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_AuditLogDownloadLinkRequestBody_H_
