
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ExcuteSQLNodeInfoResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ExcuteSQLNodeInfoResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ExcuteSQLNodeInfoResult
    : public ModelBase
{
public:
    ExcuteSQLNodeInfoResult();
    virtual ~ExcuteSQLNodeInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExcuteSQLNodeInfoResult members

    /// <summary>
    /// **参数解释**: 节点ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数解释**: 节点名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);

    /// <summary>
    /// **参数解释**: 节点角色。 **取值范围**: - master：主节点。 - slave：备节点。 - secondary：日志节点。 - readreplica：只读节点。 
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);

    /// <summary>
    /// **参数解释**: 实例ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**: 组件类型。 **取值范围**: - CN：CN组件。 - DN：DN组件。 
    /// </summary>

    std::string getComponentType() const;
    bool componentTypeIsSet() const;
    void unsetcomponentType();
    void setComponentType(const std::string& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string nodeName_;
    bool nodeNameIsSet_;
    std::string role_;
    bool roleIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string componentType_;
    bool componentTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ExcuteSQLNodeInfoResult_H_
