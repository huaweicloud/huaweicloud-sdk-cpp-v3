
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_AdditionalParams_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_AdditionalParams_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotdm/v5/model/Port.h>
#include <string>

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
class HUAWEICLOUD_IOTDM_V5_EXPORT  AdditionalParams
    : public ModelBase
{
public:
    AdditionalParams();
    virtual ~AdditionalParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AdditionalParams members

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
    /// **参数说明**：企业版实例的安全组ID。请确保所选安全组已放通22端口（Linux SSH登录），3389端口（Windows远程登录）和ICMP协议（Ping）。 
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// **参数说明**：SMN的topic urn, 当企业版实例创建成功时，平台将通过该topic发送通知。 
    /// </summary>

    std::string getSmnTopicUrn() const;
    bool smnTopicUrnIsSet() const;
    void unsetsmnTopicUrn();
    void setSmnTopicUrn(const std::string& value);

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

    Port getPortInfo() const;
    bool portInfoIsSet() const;
    void unsetportInfo();
    void setPortInfo(const Port& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string smnTopicUrn_;
    bool smnTopicUrnIsSet_;
    std::string cipheringAlgorithm_;
    bool cipheringAlgorithmIsSet_;
    Port portInfo_;
    bool portInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_AdditionalParams_H_
