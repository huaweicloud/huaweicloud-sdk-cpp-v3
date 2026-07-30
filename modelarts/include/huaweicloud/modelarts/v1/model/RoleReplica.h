
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RoleReplica_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RoleReplica_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 角色副本配置
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  RoleReplica
    : public ModelBase
{
public:
    RoleReplica();
    virtual ~RoleReplica();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RoleReplica members

    /// <summary>
    /// **参数解释：** 角色名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 最大副本数。 **取值范围：** 1~128。
    /// </summary>

    int32_t getMaxReplicas() const;
    bool maxReplicasIsSet() const;
    void unsetmaxReplicas();
    void setMaxReplicas(int32_t value);

    /// <summary>
    /// **参数解释：** 最小副本数。 **取值范围：** 1~128。
    /// </summary>

    int32_t getMinReplicas() const;
    bool minReplicasIsSet() const;
    void unsetminReplicas();
    void setMinReplicas(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t maxReplicas_;
    bool maxReplicasIsSet_;
    int32_t minReplicas_;
    bool minReplicasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RoleReplica_H_
