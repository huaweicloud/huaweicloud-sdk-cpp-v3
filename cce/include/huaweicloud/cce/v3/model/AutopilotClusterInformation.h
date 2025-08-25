
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotClusterInformation_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotClusterInformation_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AutopilotClusterMetadataForUpdate.h>
#include <huaweicloud/cce/v3/model/AutopilotClusterInformationSpec.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  AutopilotClusterInformation
    : public ModelBase
{
public:
    AutopilotClusterInformation();
    virtual ~AutopilotClusterInformation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutopilotClusterInformation members

    /// <summary>
    /// 
    /// </summary>

    AutopilotClusterInformationSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const AutopilotClusterInformationSpec& value);

    /// <summary>
    /// 
    /// </summary>

    AutopilotClusterMetadataForUpdate getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const AutopilotClusterMetadataForUpdate& value);


protected:
    AutopilotClusterInformationSpec spec_;
    bool specIsSet_;
    AutopilotClusterMetadataForUpdate metadata_;
    bool metadataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotClusterInformation_H_
