
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ConstructDisasterRecoveryInstance_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ConstructDisasterRecoveryInstance_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ConstructDisasterRecoveryInstance
    : public ModelBase
{
public:
    ConstructDisasterRecoveryInstance();
    virtual ~ConstructDisasterRecoveryInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ConstructDisasterRecoveryInstance members

    /// <summary>
    /// 容灾实例的ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 容灾实例所在Region的code。
    /// </summary>

    std::string getRegionCode() const;
    bool regionCodeIsSet() const;
    void unsetregionCode();
    void setRegionCode(const std::string& value);

    /// <summary>
    /// 与当前实例建立容灾关系实例所在子网的CIDR列表。
    /// </summary>

    std::vector<std::string>& getSubnetCidrs();
    bool subnetCidrsIsSet() const;
    void unsetsubnetCidrs();
    void setSubnetCidrs(const std::vector<std::string>& value);

    /// <summary>
    /// 与当前实例建立容灾关系实例的所有节点的IP列表。
    /// </summary>

    std::vector<std::string>& getNodeIps();
    bool nodeIpsIsSet() const;
    void unsetnodeIps();
    void setNodeIps(const std::vector<std::string>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string regionCode_;
    bool regionCodeIsSet_;
    std::vector<std::string> subnetCidrs_;
    bool subnetCidrsIsSet_;
    std::vector<std::string> nodeIps_;
    bool nodeIpsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ConstructDisasterRecoveryInstance_H_
