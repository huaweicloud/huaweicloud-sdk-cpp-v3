
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_AdditionalParamsResp_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_AdditionalParamsResp_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotdm/v5/model/ForwardingInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 企业版附加参数信息。 
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  AdditionalParamsResp
    : public ModelBase
{
public:
    AdditionalParamsResp();
    virtual ~AdditionalParamsResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AdditionalParamsResp members

    /// <summary>
    /// **参数说明**：企业版实例的VPCID。 
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// **参数说明**：企业版实例的子网ID。 
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// **参数说明**：企业版实例的安全组ID。 
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// **参数说明**：实例支持的加密算法。 **取值范围**： - COMMON_ALGORITHM: 通用加密算法（支持RSA，SHA256等国际通用的密码算法） - SM_ALGORITHM: 支持SM系列商密算法（支持SM2，SM3，SM4等国密算法） 
    /// </summary>

    std::string getCipheringAlgorithm() const;
    bool cipheringAlgorithmIsSet() const;
    void unsetcipheringAlgorithm();
    void setCipheringAlgorithm(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ForwardingInfo getForwardingInfo() const;
    bool forwardingInfoIsSet() const;
    void unsetforwardingInfo();
    void setForwardingInfo(const ForwardingInfo& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string cipheringAlgorithm_;
    bool cipheringAlgorithmIsSet_;
    ForwardingInfo forwardingInfo_;
    bool forwardingInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_AdditionalParamsResp_H_
