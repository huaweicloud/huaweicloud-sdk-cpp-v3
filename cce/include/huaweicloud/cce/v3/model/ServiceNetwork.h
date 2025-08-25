
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ServiceNetwork_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ServiceNetwork_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ServiceNetwork
    : public ModelBase
{
public:
    ServiceNetwork();
    virtual ~ServiceNetwork();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceNetwork members

    /// <summary>
    /// kubernetes clusterIP IPv4 CIDR取值范围。创建集群时若未传参，默认为\&quot;10.247.0.0/16\&quot;。
    /// </summary>

    std::string getIPv4CIDR() const;
    bool iPv4CIDRIsSet() const;
    void unsetiPv4CIDR();
    void setIPv4CIDR(const std::string& value);


protected:
    std::string iPv4CIDR_;
    bool iPv4CIDRIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ServiceNetwork_H_
