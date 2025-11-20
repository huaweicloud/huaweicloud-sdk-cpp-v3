
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_RemoveNodesSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_RemoveNodesSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodeItem.h>
#include <huaweicloud/cce/v3/model/Login.h>
#include <vector>

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
class HUAWEICLOUD_CCE_V3_EXPORT  RemoveNodesSpec
    : public ModelBase
{
public:
    RemoveNodesSpec();
    virtual ~RemoveNodesSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemoveNodesSpec members

    /// <summary>
    /// 
    /// </summary>

    Login getLogin() const;
    bool loginIsSet() const;
    void unsetlogin();
    void setLogin(const Login& value);

    /// <summary>
    /// **参数解释**： 待操作节点列表，当前最多支持同时移除200个节点。 **约束限制**： 不涉及 
    /// </summary>

    std::vector<NodeItem>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<NodeItem>& value);


protected:
    Login login_;
    bool loginIsSet_;
    std::vector<NodeItem> nodes_;
    bool nodesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_RemoveNodesSpec_H_
