
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateTenantServiceConfigsReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateTenantServiceConfigsReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/SubAccountControlConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 租户业务配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateTenantServiceConfigsReq
    : public ModelBase
{
public:
    UpdateTenantServiceConfigsReq();
    virtual ~UpdateTenantServiceConfigsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTenantServiceConfigsReq members

    /// <summary>
    /// 
    /// </summary>

    SubAccountControlConfig getSubAccountControlConfig() const;
    bool subAccountControlConfigIsSet() const;
    void unsetsubAccountControlConfig();
    void setSubAccountControlConfig(const SubAccountControlConfig& value);

    /// <summary>
    /// AI标识开关
    /// </summary>

    bool isIsAiMarkOn() const;
    bool isAiMarkOnIsSet() const;
    void unsetisAiMarkOn();
    void setIsAiMarkOn(bool value);


protected:
    SubAccountControlConfig subAccountControlConfig_;
    bool subAccountControlConfigIsSet_;
    bool isAiMarkOn_;
    bool isAiMarkOnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateTenantServiceConfigsReq_H_
