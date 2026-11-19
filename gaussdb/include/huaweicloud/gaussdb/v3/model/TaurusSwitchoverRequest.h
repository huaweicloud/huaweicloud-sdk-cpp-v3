
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusSwitchoverRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusSwitchoverRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TaurusSwitchoverRequest
    : public ModelBase
{
public:
    TaurusSwitchoverRequest();
    virtual ~TaurusSwitchoverRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaurusSwitchoverRequest members

    /// <summary>
    /// 只读节点ID，倒换后为主节点。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否进行强制倒换。强制倒换将导致主节点重启，未提交的事务会被中断，请在业务低峰期执行该操作。  **约束限制**：  不涉及。  **取值范围**：  - true：强制倒换。 - false：普通倒换。  **默认取值**：  false。
    /// </summary>

    bool isForce() const;
    bool forceIsSet() const;
    void unsetforce();
    void setForce(bool value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    bool force_;
    bool forceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusSwitchoverRequest_H_
