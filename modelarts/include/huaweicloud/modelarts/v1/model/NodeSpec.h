
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeSpec_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeSpec_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Os.h>
#include <huaweicloud/modelarts/v1/model/VolumeVO.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/NodeNetwork.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/ResourceExtendParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点期望信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeSpec
    : public ModelBase
{
public:
    NodeSpec();
    virtual ~NodeSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeSpec members

    /// <summary>
    /// **参数解释**：节点资源规格ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

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

    NodeNetwork getHostNetwork() const;
    bool hostNetworkIsSet() const;
    void unsethostNetwork();
    void setHostNetwork(const NodeNetwork& value);

    /// <summary>
    /// 
    /// </summary>

    VolumeVO getRootVolume() const;
    bool rootVolumeIsSet() const;
    void unsetrootVolume();
    void setRootVolume(const VolumeVO& value);

    /// <summary>
    /// **参数解释**：数据盘信息。
    /// </summary>

    std::vector<VolumeVO>& getDataVolumes();
    bool dataVolumesIsSet() const;
    void unsetdataVolumes();
    void setDataVolumes(const std::vector<VolumeVO>& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceExtendParams getExtendParams() const;
    bool extendParamsIsSet() const;
    void unsetextendParams();
    void setExtendParams(const ResourceExtendParams& value);


protected:
    std::string flavor_;
    bool flavorIsSet_;
    Os os_;
    bool osIsSet_;
    NodeNetwork hostNetwork_;
    bool hostNetworkIsSet_;
    VolumeVO rootVolume_;
    bool rootVolumeIsSet_;
    std::vector<VolumeVO> dataVolumes_;
    bool dataVolumesIsSet_;
    ResourceExtendParams extendParams_;
    bool extendParamsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeSpec_H_
