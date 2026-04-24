
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DNatInfoResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DNatInfoResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  DNatInfoResult
    : public ModelBase
{
public:
    DNatInfoResult();
    virtual ~DNatInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DNatInfoResult members

    /// <summary>
    /// **参数解释**: 已经绑定NAT网关的节点ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数解释**: NAT网关实例的ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNatGatewayId() const;
    bool natGatewayIdIsSet() const;
    void unsetnatGatewayId();
    void setNatGatewayId(const std::string& value);

    /// <summary>
    /// **参数解释**: 端口ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// **参数解释**: 弹性公网ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getPublicIpId() const;
    bool publicIpIdIsSet() const;
    void unsetpublicIpId();
    void setPublicIpId(const std::string& value);

    /// <summary>
    /// **参数解释**: 弹性公网IP。 **取值范围**: 不涉及。
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);

    /// <summary>
    /// **参数解释**: 对外提供服务的端口号，可通过弹性公网IP加该端口号的方式连接数据库实例。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getExternalServicePort() const;
    bool externalServicePortIsSet() const;
    void unsetexternalServicePort();
    void setExternalServicePort(int32_t value);

    /// <summary>
    /// **参数解释**: GaussDB数据库端口号。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getInternalServicePort() const;
    bool internalServicePortIsSet() const;
    void unsetinternalServicePort();
    void setInternalServicePort(int32_t value);

    /// <summary>
    /// **参数解释**: 内网地址。 **取值范围**: 不涉及。
    /// </summary>

    std::string getPrivateIp() const;
    bool privateIpIsSet() const;
    void unsetprivateIp();
    void setPrivateIp(const std::string& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string natGatewayId_;
    bool natGatewayIdIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    std::string publicIpId_;
    bool publicIpIdIsSet_;
    std::string publicIp_;
    bool publicIpIsSet_;
    int32_t externalServicePort_;
    bool externalServicePortIsSet_;
    int32_t internalServicePort_;
    bool internalServicePortIsSet_;
    std::string privateIp_;
    bool privateIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DNatInfoResult_H_
