
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeWorkflowTaskStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeWorkflowTaskStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeWorkflowTaskStatus
: public ModelBase
{
public:
    UpgradeWorkflowTaskStatus();
    virtual ~UpgradeWorkflowTaskStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eUpgradeWorkflowTaskStatus 
    {
        UpgradeWorkflowTaskStatus_Init,
        UpgradeWorkflowTaskStatus_Queuing,
        UpgradeWorkflowTaskStatus_Running,
        UpgradeWorkflowTaskStatus_Success,
        UpgradeWorkflowTaskStatus_Failed,
    };

    eUpgradeWorkflowTaskStatus getValue() const;
    void setValue(eUpgradeWorkflowTaskStatus const value);

protected:
    eUpgradeWorkflowTaskStatus value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeWorkflowTaskStatus_H_
