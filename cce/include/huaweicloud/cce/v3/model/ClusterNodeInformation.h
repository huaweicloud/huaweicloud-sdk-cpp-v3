
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterNodeInformation_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterNodeInformation_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ClusterNodeInformationMetadata.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterNodeInformation
    : public ModelBase
{
public:
    ClusterNodeInformation();
    virtual ~ClusterNodeInformation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterNodeInformation members

    /// <summary>
    /// 
    /// </summary>

    ClusterNodeInformationMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const ClusterNodeInformationMetadata& value);


protected:
    ClusterNodeInformationMetadata metadata_;
    bool metadataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterNodeInformation_H_
