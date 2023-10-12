
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_PrecheckDisasterRecoveryInstance_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_PrecheckDisasterRecoveryInstance_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  PrecheckDisasterRecoveryInstance
    : public ModelBase
{
public:
    PrecheckDisasterRecoveryInstance();
    virtual ~PrecheckDisasterRecoveryInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrecheckDisasterRecoveryInstance members

    /// <summary>
    /// 与当前实例建立容灾关系实例的vpc网段。
    /// </summary>

    std::string getVpcCidr() const;
    bool vpcCidrIsSet() const;
    void unsetvpcCidr();
    void setVpcCidr(const std::string& value);

    /// <summary>
    /// 与当前实例建立容灾关系实例的规格码。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// 与当前实例建立容灾关系实例的节点IP列表。
    /// </summary>

    std::vector<std::string>& getNodeIps();
    bool nodeIpsIsSet() const;
    void unsetnodeIps();
    void setNodeIps(const std::vector<std::string>& value);


protected:
    std::string vpcCidr_;
    bool vpcCidrIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;
    std::vector<std::string> nodeIps_;
    bool nodeIpsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_PrecheckDisasterRecoveryInstance_H_
