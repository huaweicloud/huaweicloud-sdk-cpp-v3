
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeClusterRequestBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeClusterRequestBody_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/UpgradeSpec.h>
#include <huaweicloud/cce/v3/model/UpgradeClusterRequestMetadata.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeClusterRequestBody
    : public ModelBase
{
public:
    UpgradeClusterRequestBody();
    virtual ~UpgradeClusterRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeClusterRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpgradeClusterRequestMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const UpgradeClusterRequestMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    UpgradeSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const UpgradeSpec& value);


protected:
    UpgradeClusterRequestMetadata metadata_;
    bool metadataIsSet_;
    UpgradeSpec spec_;
    bool specIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeClusterRequestBody_H_
