
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeClusterResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeClusterResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/UpgradeCluserResponseMetadata.h>
#include <huaweicloud/cce/v3/model/UpgradeResponseSpec.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeClusterResponse
    : public ModelBase, public HttpResponse
{
public:
    UpgradeClusterResponse();
    virtual ~UpgradeClusterResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeClusterResponse members

    /// <summary>
    /// 
    /// </summary>

    UpgradeCluserResponseMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const UpgradeCluserResponseMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    UpgradeResponseSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const UpgradeResponseSpec& value);


protected:
    UpgradeCluserResponseMetadata metadata_;
    bool metadataIsSet_;
    UpgradeResponseSpec spec_;
    bool specIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeClusterResponse_H_
