
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BindDNatRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BindDNatRequestBody_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  BindDNatRequestBody
    : public ModelBase
{
public:
    BindDNatRequestBody();
    virtual ~BindDNatRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BindDNatRequestBody members

    /// <summary>
    /// **参数解释**: 需要绑定或者解绑的节点ID。 **约束限制**: 分布式仅支持CN节点，集中式不支持日志节点。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数解释**: 弹性公网ID。 **约束限制**: action类型为BIND时必选。 一个弹性公网IP只能绑定到一个NAT网关。 **取值范围**: UUID格式。 **默认取值**: 不涉及。
    /// </summary>

    std::string getPublicIpId() const;
    bool publicIpIdIsSet() const;
    void unsetpublicIpId();
    void setPublicIpId(const std::string& value);

    /// <summary>
    /// **参数解释**: 公网NAT网关的ID。 **约束限制**: action类型为BIND时必选。 NAT网关的虚拟私有云和子网需要和GaussDB数据库实例的虚拟私有云和子网保持一致。 **取值范围**: UUID格式。 **默认取值**: 不涉及。
    /// </summary>

    std::string getNatGatewayId() const;
    bool natGatewayIdIsSet() const;
    void unsetnatGatewayId();
    void setNatGatewayId(const std::string& value);

    /// <summary>
    /// **参数解释**: 对外提供服务的端口号，可通过弹性公网IP加该端口号的方式连接数据库实例。 **约束限制**: action类型为BIND时必选。 **取值范围**: 0~65535。 **默认取值**: 不涉及。
    /// </summary>

    int32_t getExternalServicePort() const;
    bool externalServicePortIsSet() const;
    void unsetexternalServicePort();
    void setExternalServicePort(int32_t value);

    /// <summary>
    /// **参数解释**: 操作标识。 **约束限制**: 不涉及。 **取值范围**: BIND，表示绑定NAT网关。 UNBIND，表示解绑NAT网关。 **默认取值**: 不涉及。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string publicIpId_;
    bool publicIpIdIsSet_;
    std::string natGatewayId_;
    bool natGatewayIdIsSet_;
    int32_t externalServicePort_;
    bool externalServicePortIsSet_;
    std::string action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BindDNatRequestBody_H_
