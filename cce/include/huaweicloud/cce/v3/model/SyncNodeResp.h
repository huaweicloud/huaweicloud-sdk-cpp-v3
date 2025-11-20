
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_SyncNodeResp_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_SyncNodeResp_H_


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
/// **参数解释**： 固定值\&quot;Sync node success\&quot;，表示同步节点成功。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  SyncNodeResp
    : public ModelBase
{
public:
    SyncNodeResp();
    virtual ~SyncNodeResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SyncNodeResp members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_SyncNodeResp_H_
