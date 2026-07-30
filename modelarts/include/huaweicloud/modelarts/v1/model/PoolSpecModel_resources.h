
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_resources_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_resources_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Os.h>
#include <huaweicloud/modelarts/v1/model/PoolSpecModel_dataVolumes.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/PoolNodeAz.h>
#include <huaweicloud/modelarts/v1/model/PoolSpecModel_extendParams.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/PoolSpecModel_volumeGroupConfigs.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolSpecModel_resources
    : public ModelBase
{
public:
    PoolSpecModel_resources();
    virtual ~PoolSpecModel_resources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolSpecModel_resources members

    /// <summary>
    /// **参数解释**：资源规格ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池中资源规格实例数量。 **取值范围**：不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**：资源规格的弹性资源量。物理池中该值和count必须一致。 **取值范围**：不涉及。
    /// </summary>

    int32_t getMaxCount() const;
    bool maxCountIsSet() const;
    void unsetmaxCount();
    void setMaxCount(int32_t value);

    /// <summary>
    /// **参数解释**：资源池中期望创建的资源规格实例的az分布。
    /// </summary>

    std::vector<PoolNodeAz>& getAzs();
    bool azsIsSet() const;
    void unsetazs();
    void setAzs(const std::vector<PoolNodeAz>& value);

    /// <summary>
    /// 
    /// </summary>

    PoolSpecModel_extendParams getExtendParams() const;
    bool extendParamsIsSet() const;
    void unsetextendParams();
    void setExtendParams(const PoolSpecModel_extendParams& value);

    /// <summary>
    /// 
    /// </summary>

    Os getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const Os& value);

    /// <summary>
    /// 
    /// </summary>

    PoolSpecModel_dataVolumes getDataVolumes() const;
    bool dataVolumesIsSet() const;
    void unsetdataVolumes();
    void setDataVolumes(const PoolSpecModel_dataVolumes& value);

    /// <summary>
    /// 
    /// </summary>

    PoolSpecModel_volumeGroupConfigs getVolumeGroupConfigs() const;
    bool volumeGroupConfigsIsSet() const;
    void unsetvolumeGroupConfigs();
    void setVolumeGroupConfigs(const PoolSpecModel_volumeGroupConfigs& value);


protected:
    std::string flavor_;
    bool flavorIsSet_;
    int32_t count_;
    bool countIsSet_;
    int32_t maxCount_;
    bool maxCountIsSet_;
    std::vector<PoolNodeAz> azs_;
    bool azsIsSet_;
    PoolSpecModel_extendParams extendParams_;
    bool extendParamsIsSet_;
    Os os_;
    bool osIsSet_;
    PoolSpecModel_dataVolumes dataVolumes_;
    bool dataVolumesIsSet_;
    PoolSpecModel_volumeGroupConfigs volumeGroupConfigs_;
    bool volumeGroupConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_resources_H_
