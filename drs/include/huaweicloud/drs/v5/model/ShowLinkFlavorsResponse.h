
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowLinkFlavorsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowLinkFlavorsResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/FlavorInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowLinkFlavorsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowLinkFlavorsResponse();
    virtual ~ShowLinkFlavorsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLinkFlavorsResponse members

    /// <summary>
    /// 
    /// </summary>

    FlavorInfo getVmFlavor() const;
    bool vmFlavorIsSet() const;
    void unsetvmFlavor();
    void setVmFlavor(const FlavorInfo& value);

    /// <summary>
    /// 
    /// </summary>

    FlavorInfo getVolumeFlavor() const;
    bool volumeFlavorIsSet() const;
    void unsetvolumeFlavor();
    void setVolumeFlavor(const FlavorInfo& value);

    /// <summary>
    /// 
    /// </summary>

    FlavorInfo getFlowFlavor() const;
    bool flowFlavorIsSet() const;
    void unsetflowFlavor();
    void setFlowFlavor(const FlavorInfo& value);


protected:
    FlavorInfo vmFlavor_;
    bool vmFlavorIsSet_;
    FlavorInfo volumeFlavor_;
    bool volumeFlavorIsSet_;
    FlavorInfo flowFlavor_;
    bool flowFlavorIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowLinkFlavorsResponse_H_
