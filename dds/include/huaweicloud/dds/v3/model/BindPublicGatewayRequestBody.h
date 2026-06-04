
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_BindPublicGatewayRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_BindPublicGatewayRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  BindPublicGatewayRequestBody
    : public ModelBase
{
public:
    BindPublicGatewayRequestBody();
    virtual ~BindPublicGatewayRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BindPublicGatewayRequestBody members

    /// <summary>
    /// **参数解释：** 公网NAT网关实例的ID。可以调用“查询公网NAT网关列表”接口获取。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getNatGatewayId() const;
    bool natGatewayIdIsSet() const;
    void unsetnatGatewayId();
    void setNatGatewayId(const std::string& value);

    /// <summary>
    /// **参数解释：** 弹性公网IP的ID。可以调用“查询弹性公网IP列表”接口获取。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getPublicIpId() const;
    bool publicIpIdIsSet() const;
    void unsetpublicIpId();
    void setPublicIpId(const std::string& value);

    /// <summary>
    /// **参数解释：** 弹性公网IP对外提供服务的端口号。 **约束限制：** 不涉及。 **取值范围：** 1~65535。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getExternalServicePort() const;
    bool externalServicePortIsSet() const;
    void unsetexternalServicePort();
    void setExternalServicePort(int32_t value);


protected:
    std::string natGatewayId_;
    bool natGatewayIdIsSet_;
    std::string publicIpId_;
    bool publicIpIdIsSet_;
    int32_t externalServicePort_;
    bool externalServicePortIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_BindPublicGatewayRequestBody_H_
