
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateClusterEipResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateClusterEipResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/MasterEIPResponseSpec.h>
#include <huaweicloud/cce/v3/model/Metadata.h>
#include <huaweicloud/cce/v3/model/MasterEIPResponse_status.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  UpdateClusterEipResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateClusterEipResponse();
    virtual ~UpdateClusterEipResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateClusterEipResponse members

    /// <summary>
    /// 
    /// </summary>

    Metadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const Metadata& value);

    /// <summary>
    /// 
    /// </summary>

    MasterEIPResponseSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const MasterEIPResponseSpec& value);

    /// <summary>
    /// 
    /// </summary>

    MasterEIPResponse_status getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const MasterEIPResponse_status& value);


protected:
    Metadata metadata_;
    bool metadataIsSet_;
    MasterEIPResponseSpec spec_;
    bool specIsSet_;
    MasterEIPResponse_status status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateClusterEipResponse_H_
