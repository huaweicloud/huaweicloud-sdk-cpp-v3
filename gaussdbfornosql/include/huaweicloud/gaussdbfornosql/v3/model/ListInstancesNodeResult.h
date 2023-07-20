
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesNodeResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesNodeResult_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例节点信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListInstancesNodeResult
    : public ModelBase
{
public:
    ListInstancesNodeResult();
    virtual ~ListInstancesNodeResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListInstancesNodeResult members

    /// <summary>
    /// 节点ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 节点名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 节点状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 节点角色。 该参数仅对GaussDB(for Mongo)引擎的副本集实例有效。
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);

    /// <summary>
    /// 节点所在的子网的ID。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 节点内网IP。在弹性云服务器创建成功后参数值存在，否则，值为\&quot;\&quot;。
    /// </summary>

    std::string getPrivateIp() const;
    bool privateIpIsSet() const;
    void unsetprivateIp();
    void setPrivateIp(const std::string& value);

    /// <summary>
    /// 绑定的公网IP。该参数仅针对绑定了公网IP的节点有效。
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);

    /// <summary>
    /// 资源规格编码。关于实例的规格信息，请参见查询所有实例规格信息中响应参数“flavors.spec_code”的值。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// 可用区。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 是否支持节点缩容。 - true，表示该节点支持节点缩容。 - false，表示该节点不支持节点缩容。
    /// </summary>

    bool isSupportReduce() const;
    bool supportReduceIsSet() const;
    void unsetsupportReduce();
    void setSupportReduce(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string role_;
    bool roleIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string privateIp_;
    bool privateIpIsSet_;
    std::string publicIp_;
    bool publicIpIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    bool supportReduce_;
    bool supportReduceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesNodeResult_H_
