
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonInstanceRollbackRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonInstanceRollbackRequest_H_


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
/// **参数解释**： 回滚插件实例请求结构体。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AddonInstanceRollbackRequest
    : public ModelBase
{
public:
    AddonInstanceRollbackRequest();
    virtual ~AddonInstanceRollbackRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddonInstanceRollbackRequest members

    /// <summary>
    /// **参数解释**： 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getClusterID() const;
    bool clusterIDIsSet() const;
    void unsetclusterID();
    void setClusterID(const std::string& value);


protected:
    std::string clusterID_;
    bool clusterIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonInstanceRollbackRequest_H_
