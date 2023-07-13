
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ExternalGatewayInfo_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ExternalGatewayInfo_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  ExternalGatewayInfo
    : public ModelBase
{
public:
    ExternalGatewayInfo();
    virtual ~ExternalGatewayInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ExternalGatewayInfo members

    /// <summary>
    /// 功能说明：是否启用SNAT 取值范围：true、false；默认为false。
    /// </summary>

    bool isEnableSnat() const;
    bool enableSnatIsSet() const;
    void unsetenableSnat();
    void setEnableSnat(bool value);

    /// <summary>
    /// 外部网络的ID。
    /// </summary>

    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);


protected:
    bool enableSnat_;
    bool enableSnatIsSet_;
    std::string networkId_;
    bool networkIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ExternalGatewayInfo_H_
