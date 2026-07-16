
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeInfo_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeInfo_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点检查状态
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeInfo
    : public ModelBase
{
public:
    NodeInfo();
    virtual ~NodeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeInfo members

    /// <summary>
    /// 节点UID
    /// </summary>

    std::string getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(const std::string& value);

    /// <summary>
    /// 节点名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点状态 **取值范围**： - Build：创建中，表示节点正处于创建过程中。 - Installing：安装中，表示节点正处于纳管过程中。 - Upgrading：升级中，表示节点正处于升级过程中。 - Active：运行中，表示节点处于正常状态。 - Abnormal：不可用，表示节点处于异常状态。 - Deleting： 删除中，表示节点正处于删除过程中。 - Error：错误，表示节点处于故障状态。 **默认取值**： 不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点类型 **取值范围**： - master：控制面节点 - node：数据面节点 **默认取值**： 不涉及
    /// </summary>

    std::string getNodeType() const;
    bool nodeTypeIsSet() const;
    void unsetnodeType();
    void setNodeType(const std::string& value);


protected:
    std::string uid_;
    bool uidIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string nodeType_;
    bool nodeTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeInfo_H_
