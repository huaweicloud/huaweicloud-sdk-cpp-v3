
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_WorkFlowPhase_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_WorkFlowPhase_H_


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
class HUAWEICLOUD_CCE_V3_EXPORT  WorkFlowPhase
: public ModelBase
{
public:
    WorkFlowPhase();
    virtual ~WorkFlowPhase();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eWorkFlowPhase 
    {
        WorkFlowPhase_Init,
        WorkFlowPhase_Running,
        WorkFlowPhase_Pending,
        WorkFlowPhase_Success,
        WorkFlowPhase_Cancel,
    };

    eWorkFlowPhase getValue() const;
    void setValue(eWorkFlowPhase const value);

protected:
    eWorkFlowPhase value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_WorkFlowPhase_H_
