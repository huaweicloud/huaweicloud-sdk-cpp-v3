
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowAdminConfigResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowAdminConfigResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ShowAdminConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAdminConfigResponse();
    virtual ~ShowAdminConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAdminConfigResponse members

    /// <summary>
    /// 
    /// </summary>

    bool isLogConvergeSwitch() const;
    bool logConvergeSwitchIsSet() const;
    void unsetlogConvergeSwitch();
    void setLogConvergeSwitch(bool value);


protected:
    bool logConvergeSwitch_;
    bool logConvergeSwitchIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowAdminConfigResponse_H_
