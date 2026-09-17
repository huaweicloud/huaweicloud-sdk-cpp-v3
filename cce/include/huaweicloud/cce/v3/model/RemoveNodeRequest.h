
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_RemoveNodeRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_RemoveNodeRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/RemoveNodesTask.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  RemoveNodeRequest
    : public ModelBase
{
public:
    RemoveNodeRequest();
    virtual ~RemoveNodeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemoveNodeRequest members

    /// <summary>
    /// 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// **参数解释**： 移除节点时是否解绑节点默认安全组。 **约束限制**： 不涉及 **取值范围**： - false：移除节点时保留节点默认安全组 - true：移除节点时解绑节点默认安全组  **默认取值**： false
    /// </summary>

    bool isRemoveNodeSystemSecurityGroup() const;
    bool removeNodeSystemSecurityGroupIsSet() const;
    void unsetremoveNodeSystemSecurityGroup();
    void setRemoveNodeSystemSecurityGroup(bool value);

    /// <summary>
    /// 
    /// </summary>

    RemoveNodesTask getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RemoveNodesTask& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    bool removeNodeSystemSecurityGroup_;
    bool removeNodeSystemSecurityGroupIsSet_;
    RemoveNodesTask body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RemoveNodeRequest& dereference_from_shared_ptr(std::shared_ptr<RemoveNodeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_RemoveNodeRequest_H_
