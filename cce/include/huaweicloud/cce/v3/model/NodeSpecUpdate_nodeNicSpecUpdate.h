
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSpecUpdate_nodeNicSpecUpdate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSpecUpdate_nodeNicSpecUpdate_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodeSpecUpdate_nodeNicSpecUpdate_primaryNic.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 更新节点的网卡信息。 **约束限制**： 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeSpecUpdate_nodeNicSpecUpdate
    : public ModelBase
{
public:
    NodeSpecUpdate_nodeNicSpecUpdate();
    virtual ~NodeSpecUpdate_nodeNicSpecUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeSpecUpdate_nodeNicSpecUpdate members

    /// <summary>
    /// 
    /// </summary>

    NodeSpecUpdate_nodeNicSpecUpdate_primaryNic getPrimaryNic() const;
    bool primaryNicIsSet() const;
    void unsetprimaryNic();
    void setPrimaryNic(const NodeSpecUpdate_nodeNicSpecUpdate_primaryNic& value);


protected:
    NodeSpecUpdate_nodeNicSpecUpdate_primaryNic primaryNic_;
    bool primaryNicIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSpecUpdate_nodeNicSpecUpdate_H_
