
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_UpdateTenantAccessInfoReq_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_UpdateTenantAccessInfoReq_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  UpdateTenantAccessInfoReq
    : public ModelBase
{
public:
    UpdateTenantAccessInfoReq();
    virtual ~UpdateTenantAccessInfoReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTenantAccessInfoReq members

    /// <summary>
    /// 是否已开通服务 - false：未开通 - true：已开通 
    /// </summary>

    bool isIsOpen() const;
    bool isOpenIsSet() const;
    void unsetisOpen();
    void setIsOpen(bool value);

    /// <summary>
    /// 服务协议版本 
    /// </summary>

    int32_t getAgreementVersion() const;
    bool agreementVersionIsSet() const;
    void unsetagreementVersion();
    void setAgreementVersion(int32_t value);


protected:
    bool isOpen_;
    bool isOpenIsSet_;
    int32_t agreementVersion_;
    bool agreementVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_UpdateTenantAccessInfoReq_H_
