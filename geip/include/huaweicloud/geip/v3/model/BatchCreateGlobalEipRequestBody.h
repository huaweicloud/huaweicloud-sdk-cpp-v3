
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchCreateGlobalEipRequestBody_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchCreateGlobalEipRequestBody_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/BatchCreateGlobalEipRequestBody_global_eip.h>

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
class HUAWEICLOUD_GEIP_V3_EXPORT  BatchCreateGlobalEipRequestBody
    : public ModelBase
{
public:
    BatchCreateGlobalEipRequestBody();
    virtual ~BatchCreateGlobalEipRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateGlobalEipRequestBody members

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

    BatchCreateGlobalEipRequestBody_global_eip getGlobalEip() const;
    bool globalEipIsSet() const;
    void unsetglobalEip();
    void setGlobalEip(const BatchCreateGlobalEipRequestBody_global_eip& value);


protected:
    bool dryRun_;
    bool dryRunIsSet_;
    BatchCreateGlobalEipRequestBody_global_eip globalEip_;
    bool globalEipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchCreateGlobalEipRequestBody_H_
