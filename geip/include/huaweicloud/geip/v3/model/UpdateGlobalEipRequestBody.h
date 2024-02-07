
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipRequestBody_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipRequestBody_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/UpdateGlobalEipRequestBody_global_eip.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  UpdateGlobalEipRequestBody
    : public ModelBase
{
public:
    UpdateGlobalEipRequestBody();
    virtual ~UpdateGlobalEipRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateGlobalEipRequestBody members

    /// <summary>
    /// 
    /// </summary>

    bool isDryRun() const;
    bool dryRunIsSet() const;
    void unsetdryRun();
    void setDryRun(bool value);

    /// <summary>
    /// 
    /// </summary>

    UpdateGlobalEipRequestBody_global_eip getGlobalEip() const;
    bool globalEipIsSet() const;
    void unsetglobalEip();
    void setGlobalEip(const UpdateGlobalEipRequestBody_global_eip& value);


protected:
    bool dryRun_;
    bool dryRunIsSet_;
    UpdateGlobalEipRequestBody_global_eip globalEip_;
    bool globalEipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipRequestBody_H_
