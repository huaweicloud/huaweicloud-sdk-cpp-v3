
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecCreation_network_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecCreation_network_H_


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
/// **参数解释**：资源池网络参数。创建物理资源池时必选。 **约束限制**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolSpecCreation_network
    : public ModelBase
{
public:
    PoolSpecCreation_network();
    virtual ~PoolSpecCreation_network();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolSpecCreation_network members

    /// <summary>
    /// **参数解释**：网络名称，即网络详情中的metadata.name字段的值。用户接口通过指定网络名称创建网络，系统会自动创建子网，用户无法创建子网。默认将创建在第一个子网下。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecCreation_network_H_
