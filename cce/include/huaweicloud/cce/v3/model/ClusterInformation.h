
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterInformation_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterInformation_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ClusterInformationSpec.h>
#include <huaweicloud/cce/v3/model/ClusterMetadataForUpdate.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterInformation
    : public ModelBase
{
public:
    ClusterInformation();
    virtual ~ClusterInformation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterInformation members

    /// <summary>
    /// 
    /// </summary>

    ClusterInformationSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const ClusterInformationSpec& value);

    /// <summary>
    /// 
    /// </summary>

    ClusterMetadataForUpdate getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const ClusterMetadataForUpdate& value);


protected:
    ClusterInformationSpec spec_;
    bool specIsSet_;
    ClusterMetadataForUpdate metadata_;
    bool metadataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterInformation_H_
