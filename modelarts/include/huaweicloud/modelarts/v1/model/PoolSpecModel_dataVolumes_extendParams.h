
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_dataVolumes_extendParams_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_dataVolumes_extendParams_H_


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
/// **参数解释**：磁盘自定义配置
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolSpecModel_dataVolumes_extendParams
    : public ModelBase
{
public:
    PoolSpecModel_dataVolumes_extendParams();
    virtual ~PoolSpecModel_dataVolumes_extendParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolSpecModel_dataVolumes_extendParams members

    /// <summary>
    /// **参数解释**：标识存储实例是否计费。为空则表示不计费。该字段用户不可指定或修改。 **取值范围**：不涉及。
    /// </summary>

    std::string getBilling() const;
    bool billingIsSet() const;
    void unsetbilling();
    void setBilling(const std::string& value);

    /// <summary>
    /// **参数解释**：磁盘分组名称，用于各个存储空间的划分。 **取值范围**：可选项如下： - vgpaas：容器盘。 - default：普通数据盘，以默认方式挂载。 - vguser{num}：普通数据盘，指定挂载路径，不同路径的分组名称不同，如vguser1，vguser2。 - vg-everest-localvolume-persistent：普通数据盘，作为持久存储卷 - vg-everest-localvolume-ephemeral：普通数据盘，作为临时存储卷
    /// </summary>

    std::string getVolumeGroup() const;
    bool volumeGroupIsSet() const;
    void unsetvolumeGroup();
    void setVolumeGroup(const std::string& value);


protected:
    std::string billing_;
    bool billingIsSet_;
    std::string volumeGroup_;
    bool volumeGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_dataVolumes_extendParams_H_
