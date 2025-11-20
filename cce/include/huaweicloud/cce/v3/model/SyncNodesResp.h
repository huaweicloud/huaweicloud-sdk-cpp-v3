
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_SyncNodesResp_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_SyncNodesResp_H_


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
/// <summary>
/// **参数解释**： 固定值\&quot;Start to batch sync nodes\&quot;，表示批量同步节点成功。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  SyncNodesResp
    : public ModelBase
{
public:
    SyncNodesResp();
    virtual ~SyncNodesResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SyncNodesResp members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_SyncNodesResp_H_
