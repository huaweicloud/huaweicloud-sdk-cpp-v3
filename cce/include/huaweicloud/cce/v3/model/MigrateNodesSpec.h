
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_MigrateNodesSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_MigrateNodesSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/MigrateServerConfig.h>
#include <huaweicloud/cce/v3/model/NodeItem.h>
#include <string>
#include <huaweicloud/cce/v3/model/Runtime.h>
#include <huaweicloud/cce/v3/model/Login.h>
#include <vector>
#include <huaweicloud/cce/v3/model/MigrateNodeExtendParam.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  MigrateNodesSpec
    : public ModelBase
{
public:
    MigrateNodesSpec();
    virtual ~MigrateNodesSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MigrateNodesSpec members

    /// <summary>
    /// **参数解释**： 操作系统类型，须精确到版本号。例：Huawei Cloud EulerOS 2.0。具体支持的操作系统请参见[节点操作系统说明](node-os.xml)。 **约束限制**： 当指定“alpha.cce/NodeImageID”参数时，“os”参数必须和用户自定义镜像的操作系统一致。 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MigrateNodeExtendParam getExtendParam() const;
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const MigrateNodeExtendParam& value);

    /// <summary>
    /// 
    /// </summary>

    Login getLogin() const;
    bool loginIsSet() const;
    void unsetlogin();
    void setLogin(const Login& value);

    /// <summary>
    /// 
    /// </summary>

    Runtime getRuntime() const;
    bool runtimeIsSet() const;
    void unsetruntime();
    void setRuntime(const Runtime& value);

    /// <summary>
    /// 
    /// </summary>

    MigrateServerConfig getServerConfig() const;
    bool serverConfigIsSet() const;
    void unsetserverConfig();
    void setServerConfig(const MigrateServerConfig& value);

    /// <summary>
    /// **参数解释**： 待操作节点列表，当前最多支持同时迁移200个节点。 **约束限制**： 不涉及 
    /// </summary>

    std::vector<NodeItem>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<NodeItem>& value);


protected:
    std::string os_;
    bool osIsSet_;
    MigrateNodeExtendParam extendParam_;
    bool extendParamIsSet_;
    Login login_;
    bool loginIsSet_;
    Runtime runtime_;
    bool runtimeIsSet_;
    MigrateServerConfig serverConfig_;
    bool serverConfigIsSet_;
    std::vector<NodeItem> nodes_;
    bool nodesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_MigrateNodesSpec_H_
