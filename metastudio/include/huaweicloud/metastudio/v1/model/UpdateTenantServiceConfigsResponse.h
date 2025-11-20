
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateTenantServiceConfigsResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateTenantServiceConfigsResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/SubAccountControlConfig.h>
#include <huaweicloud/metastudio/v1/model/TenantServiceConfigsInfo.h>
#include <huaweicloud/metastudio/v1/model/ServiceSharedConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/TenantLogConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateTenantServiceConfigsResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateTenantServiceConfigsResponse();
    virtual ~UpdateTenantServiceConfigsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTenantServiceConfigsResponse members

    /// <summary>
    /// 
    /// </summary>

    ServiceSharedConfig getServiceSharedConfig() const;
    bool serviceSharedConfigIsSet() const;
    void unsetserviceSharedConfig();
    void setServiceSharedConfig(const ServiceSharedConfig& value);

    /// <summary>
    /// 
    /// </summary>

    TenantLogConfig getTenantLogConfig() const;
    bool tenantLogConfigIsSet() const;
    void unsettenantLogConfig();
    void setTenantLogConfig(const TenantLogConfig& value);

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

    /// <summary>
    /// 租户project ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    ServiceSharedConfig serviceSharedConfig_;
    bool serviceSharedConfigIsSet_;
    TenantLogConfig tenantLogConfig_;
    bool tenantLogConfigIsSet_;
    SubAccountControlConfig subAccountControlConfig_;
    bool subAccountControlConfigIsSet_;
    bool isAiMarkOn_;
    bool isAiMarkOnIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateTenantServiceConfigsResponse_H_
