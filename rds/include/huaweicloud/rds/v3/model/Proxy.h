
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Proxy_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Proxy_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ProxyNode.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  Proxy
    : public ModelBase
{
public:
    Proxy();
    virtual ~Proxy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Proxy members

    /// <summary>
    /// Proxy实例ID。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// Proxy实例开启状态，取值范围如下。 - open：打开。 - closed：关闭。 - frozen：已冻结。 - opening：打开中。 - closing：关闭中。 - freezing：冻结中。 - unfreezing：解冻中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// Proxy读写分离地址。
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// elb模式的虚拟IP信息。
    /// </summary>

    std::string getElbVip() const;
    bool elbVipIsSet() const;
    void unsetelbVip();
    void setElbVip(const std::string& value);

    /// <summary>
    /// 弹性公网IP信息。
    /// </summary>

    std::string getEip() const;
    bool eipIsSet() const;
    void unseteip();
    void setEip(const std::string& value);

    /// <summary>
    /// Proxy端口信息。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// Proxy实例状态。 - abnormal：异常。 - normal：正常。 - creating：创建中。 - deleted：已删除。
    /// </summary>

    std::string getPoolStatus() const;
    bool poolStatusIsSet() const;
    void unsetpoolStatus();
    void setPoolStatus(const std::string& value);

    /// <summary>
    /// 延时阈值（单位：KB）。
    /// </summary>

    int32_t getDelayThresholdInKilobytes() const;
    bool delayThresholdInKilobytesIsSet() const;
    void unsetdelayThresholdInKilobytes();
    void setDelayThresholdInKilobytes(int32_t value);

    /// <summary>
    /// Proxy实例规格的CPU数量。
    /// </summary>

    std::string getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(const std::string& value);

    /// <summary>
    /// Proxy实例规格的内存数量。
    /// </summary>

    std::string getMem() const;
    bool memIsSet() const;
    void unsetmem();
    void setMem(const std::string& value);

    /// <summary>
    /// Proxy节点个数。
    /// </summary>

    int32_t getNodeNum() const;
    bool nodeNumIsSet() const;
    void unsetnodeNum();
    void setNodeNum(int32_t value);

    /// <summary>
    /// Proxy节点信息。
    /// </summary>

    std::vector<ProxyNode>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<ProxyNode>& value);

    /// <summary>
    /// Proxy主备模式，取值范围：Ha。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string poolId_;
    bool poolIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string elbVip_;
    bool elbVipIsSet_;
    std::string eip_;
    bool eipIsSet_;
    int32_t port_;
    bool portIsSet_;
    std::string poolStatus_;
    bool poolStatusIsSet_;
    int32_t delayThresholdInKilobytes_;
    bool delayThresholdInKilobytesIsSet_;
    std::string cpu_;
    bool cpuIsSet_;
    std::string mem_;
    bool memIsSet_;
    int32_t nodeNum_;
    bool nodeNumIsSet_;
    std::vector<ProxyNode> nodes_;
    bool nodesIsSet_;
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Proxy_H_
