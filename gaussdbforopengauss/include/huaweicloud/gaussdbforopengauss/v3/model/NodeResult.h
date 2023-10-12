
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_NodeResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_NodeResult_H_


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
/// 实例节点信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  NodeResult
    : public ModelBase
{
public:
    NodeResult();
    virtual ~NodeResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeResult members

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
    /// 节点类型，取值为“master”、“slave”，分别对应于主节点、备节点。
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);

    /// <summary>
    /// 节点状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 可用区。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 节点内网IP。分布式实例类型下该参数仅针对CN节点有效，主备版实例类型下该参数对所有节点有效，且在弹性云服务器创建成功后参数值存在。
    /// </summary>

    std::string getPrivateIp() const;
    bool privateIpIsSet() const;
    void unsetprivateIp();
    void setPrivateIp(const std::string& value);

    /// <summary>
    /// 绑定的外网IP。分布式实例类型下该参数仅针对CN节点有效，主备版实例类型下该参数对所有节点有效，且在弹性云服务器创建成功并绑定弹性公网IP后参数值存在。
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);

    /// <summary>
    /// 节点上组件信息（例组件ID:分布式ID），多个组件信息用;隔开。
    /// </summary>

    std::string getComponentNames() const;
    bool componentNamesIsSet() const;
    void unsetcomponentNames();
    void setComponentNames(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string role_;
    bool roleIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string privateIp_;
    bool privateIpIsSet_;
    std::string publicIp_;
    bool publicIpIsSet_;
    std::string componentNames_;
    bool componentNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_NodeResult_H_
