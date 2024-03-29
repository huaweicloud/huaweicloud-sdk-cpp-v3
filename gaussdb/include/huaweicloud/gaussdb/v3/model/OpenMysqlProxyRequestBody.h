
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OpenMysqlProxyRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OpenMysqlProxyRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/NodesWeight.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  OpenMysqlProxyRequestBody
    : public ModelBase
{
public:
    OpenMysqlProxyRequestBody();
    virtual ~OpenMysqlProxyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpenMysqlProxyRequestBody members

    /// <summary>
    /// 代理规格码。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 代理实例节点数，取值整数2-32。
    /// </summary>

    int32_t getNodeNum() const;
    bool nodeNumIsSet() const;
    void unsetnodeNum();
    void setNodeNum(int32_t value);

    /// <summary>
    /// 代理实例名称。用于表示实例的名称，同一租户下，同类型的实例名可重名。  取值范围：最小为4个字符，最大为64个字符且不超过64个字节（注意：一个中文字符占用3个字节），必须以字母或中文开头，区分大小写，可以包含字母、数字、中划线、下划线或中文，不能包含其他特殊字符。
    /// </summary>

    std::string getProxyName() const;
    bool proxyNameIsSet() const;
    void unsetproxyName();
    void setProxyName(const std::string& value);

    /// <summary>
    /// 代理实例类型。默认类型为readwrite。
    /// </summary>

    std::string getProxyMode() const;
    bool proxyModeIsSet() const;
    void unsetproxyMode();
    void setProxyMode(const std::string& value);

    /// <summary>
    /// 数据库代理路由模式，默认为权重负载模式。  取值范围: - 0，表示权重负载模式; - 1，表示负载均衡模式（数据库主节点不接受读请求）； - 2，表示负载均衡模式（数据库主节点接受读请求）。
    /// </summary>

    int32_t getRouteMode() const;
    bool routeModeIsSet() const;
    void unsetrouteMode();
    void setRouteMode(int32_t value);

    /// <summary>
    /// 数据库节点的读权重设置。  在proxy_mode为readonly时，只能为只读节点选择权重。
    /// </summary>

    std::vector<NodesWeight>& getNodesReadWeight();
    bool nodesReadWeightIsSet() const;
    void unsetnodesReadWeight();
    void setNodesReadWeight(const std::vector<NodesWeight>& value);

    /// <summary>
    /// 数据库VPC下的子网ID。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 是否开启新增节点自动加入该Proxy。如果需要设置是否开启新增节点自动加入该Proxy，请联系客服人员添加白名单，加入白名单后，方可输入该字段。  取值范围： - ON：开启。 - OFF：关闭。
    /// </summary>

    std::string getNewNodeAutoAddStatus() const;
    bool newNodeAutoAddStatusIsSet() const;
    void unsetnewNodeAutoAddStatus();
    void setNewNodeAutoAddStatus(const std::string& value);

    /// <summary>
    /// 新增节点的读权重：    - 如果路由模式为0，新增节点自动加入为ON，取值为0~1000。 - 如果路由模式不为0或新增节点自动加入为OFF，则可不输入读权重。
    /// </summary>

    int32_t getNewNodeWeight() const;
    bool newNodeWeightIsSet() const;
    void unsetnewNodeWeight();
    void setNewNodeWeight(int32_t value);


protected:
    std::string flavorRef_;
    bool flavorRefIsSet_;
    int32_t nodeNum_;
    bool nodeNumIsSet_;
    std::string proxyName_;
    bool proxyNameIsSet_;
    std::string proxyMode_;
    bool proxyModeIsSet_;
    int32_t routeMode_;
    bool routeModeIsSet_;
    std::vector<NodesWeight> nodesReadWeight_;
    bool nodesReadWeightIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string newNodeAutoAddStatus_;
    bool newNodeAutoAddStatusIsSet_;
    int32_t newNodeWeight_;
    bool newNodeWeightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OpenMysqlProxyRequestBody_H_
