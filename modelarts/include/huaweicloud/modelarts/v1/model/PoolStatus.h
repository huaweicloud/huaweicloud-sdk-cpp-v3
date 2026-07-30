
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolStatus_clusters.h>
#include <huaweicloud/modelarts/v1/model/PoolStatus_scope.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/PoolStatus_driver.h>
#include <huaweicloud/modelarts/v1/model/PoolStatus_resources.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源池状态信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolStatus
    : public ModelBase
{
public:
    PoolStatus();
    virtual ~PoolStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolStatus members

    /// <summary>
    /// **参数解释**：资源池的状态。 **取值范围**：可选值如下： - Creating：资源池在创建中。 - Running：资源池在运行中。 - Abnormal：资源池异常。 - Deleting：资源池在删除中。 - Error：资源池错误。
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池当前状态的提示信息。 **取值范围**：不涉及。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PoolStatus_resources getResources() const;
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const PoolStatus_resources& value);

    /// <summary>
    /// **参数解释**：资源池当前支持的业务类型的状态信息。
    /// </summary>

    std::vector<PoolStatus_scope>& getScope();
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(const std::vector<PoolStatus_scope>& value);

    /// <summary>
    /// 
    /// </summary>

    PoolStatus_driver getDriver() const;
    bool driverIsSet() const;
    void unsetdriver();
    void setDriver(const PoolStatus_driver& value);

    /// <summary>
    /// **参数解释**：资源池所属父资源池的ID。物理池为空。 **取值范围**：不涉及。
    /// </summary>

    std::string getParent() const;
    bool parentIsSet() const;
    void unsetparent();
    void setParent(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池根资源池的ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getRoot() const;
    bool rootIsSet() const;
    void unsetroot();
    void setRoot(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PoolStatus_clusters getClusters() const;
    bool clustersIsSet() const;
    void unsetclusters();
    void setClusters(const PoolStatus_clusters& value);


protected:
    std::string phase_;
    bool phaseIsSet_;
    std::string message_;
    bool messageIsSet_;
    PoolStatus_resources resources_;
    bool resourcesIsSet_;
    std::vector<PoolStatus_scope> scope_;
    bool scopeIsSet_;
    PoolStatus_driver driver_;
    bool driverIsSet_;
    std::string parent_;
    bool parentIsSet_;
    std::string root_;
    bool rootIsSet_;
    PoolStatus_clusters clusters_;
    bool clustersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_H_
