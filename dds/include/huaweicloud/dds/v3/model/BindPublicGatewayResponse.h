
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_BindPublicGatewayResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_BindPublicGatewayResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  BindPublicGatewayResponse
    : public ModelBase, public HttpResponse
{
public:
    BindPublicGatewayResponse();
    virtual ~BindPublicGatewayResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BindPublicGatewayResponse members

    /// <summary>
    /// **参数解释：** 实例ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// **参数解释：** 节点ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数解释：** 节点名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);

    /// <summary>
    /// **参数解释：** 公网NAT网关实例的ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getNatGatewayId() const;
    bool natGatewayIdIsSet() const;
    void unsetnatGatewayId();
    void setNatGatewayId(const std::string& value);

    /// <summary>
    /// **参数解释：** 弹性公网IP的ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPublicIpId() const;
    bool publicIpIdIsSet() const;
    void unsetpublicIpId();
    void setPublicIpId(const std::string& value);

    /// <summary>
    /// **参数解释：** 弹性公网IP对外提供服务的端口号。 **取值范围：** 1~65535。
    /// </summary>

    int32_t getExternalServicePort() const;
    bool externalServicePortIsSet() const;
    void unsetexternalServicePort();
    void setExternalServicePort(int32_t value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string nodeName_;
    bool nodeNameIsSet_;
    std::string natGatewayId_;
    bool natGatewayIdIsSet_;
    std::string publicIpId_;
    bool publicIpIdIsSet_;
    int32_t externalServicePort_;
    bool externalServicePortIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_BindPublicGatewayResponse_H_
