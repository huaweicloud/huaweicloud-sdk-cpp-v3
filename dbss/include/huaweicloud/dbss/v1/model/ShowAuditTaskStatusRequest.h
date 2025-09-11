
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditTaskStatusRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditTaskStatusRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ShowAuditTaskStatusRequest
    : public ModelBase
{
public:
    ShowAuditTaskStatusRequest();
    virtual ~ShowAuditTaskStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuditTaskStatusRequest members

    /// <summary>
    /// **参数解释**： 业务类型。 **约束限制**： 不涉及 **取值范围**：   - audit：审计实例    - risk：风险 **默认取值**： 不涉及 
    /// </summary>

    std::string getBusiType() const;
    bool busiTypeIsSet() const;
    void unsetbusiType();
    void setBusiType(const std::string& value);


protected:
    std::string busiType_;
    bool busiTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAuditTaskStatusRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAuditTaskStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditTaskStatusRequest_H_
