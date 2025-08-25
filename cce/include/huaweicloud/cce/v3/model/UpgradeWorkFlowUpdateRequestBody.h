
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeWorkFlowUpdateRequestBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeWorkFlowUpdateRequestBody_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/UpgradeWorkFlowUpdateRequestBody_status.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeWorkFlowUpdateRequestBody
    : public ModelBase
{
public:
    UpgradeWorkFlowUpdateRequestBody();
    virtual ~UpgradeWorkFlowUpdateRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeWorkFlowUpdateRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpgradeWorkFlowUpdateRequestBody_status getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const UpgradeWorkFlowUpdateRequestBody_status& value);


protected:
    UpgradeWorkFlowUpdateRequestBody_status status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeWorkFlowUpdateRequestBody_H_
