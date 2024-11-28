
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowMultiTenantResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowMultiTenantResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowMultiTenantResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowMultiTenantResponse();
    virtual ~ShowMultiTenantResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowMultiTenantResponse members

    /// <summary>
    /// 实例多租特性开关。 - true:开启 - false:关闭。
    /// </summary>

    bool isMultiTenantSwitch() const;
    bool multiTenantSwitchIsSet() const;
    void unsetmultiTenantSwitch();
    void setMultiTenantSwitch(bool value);


protected:
    bool multiTenantSwitch_;
    bool multiTenantSwitchIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowMultiTenantResponse_H_
