
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyGaussMySqlProxyRouteModeRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyGaussMySqlProxyRouteModeRequestBody_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ModifyProxyRouteWeightReadonlyNode.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// proxy实例修改路由模式请求体
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ModifyGaussMySqlProxyRouteModeRequestBody
    : public ModelBase
{
public:
    ModifyGaussMySqlProxyRouteModeRequestBody();
    virtual ~ModifyGaussMySqlProxyRouteModeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyGaussMySqlProxyRouteModeRequestBody members

    /// <summary>
    /// 数据库代理路由模式。  取值范围： - 0，表示权重负载模式。 - 1，表示负载均衡模式（数据库主节点不接受读请求）。 - 2，表示负载均衡模式（数据库主节点接受读请求）。
    /// </summary>

    int32_t getRouteMode() const;
    bool routeModeIsSet() const;
    void unsetrouteMode();
    void setRouteMode(int32_t value);

    /// <summary>
    /// 主节点权重： - 如果路由模式为0，取值为0~1000。 - 如果路由模式为1，取值为0。 - 如果路由模式为2，取值为1。
    /// </summary>

    int32_t getMasterWeight() const;
    bool masterWeightIsSet() const;
    void unsetmasterWeight();
    void setMasterWeight(int32_t value);

    /// <summary>
    /// 只读节点权重配置信息。
    /// </summary>

    std::vector<ModifyProxyRouteWeightReadonlyNode>& getReadonlyNodes();
    bool readonlyNodesIsSet() const;
    void unsetreadonlyNodes();
    void setReadonlyNodes(const std::vector<ModifyProxyRouteWeightReadonlyNode>& value);


protected:
    int32_t routeMode_;
    bool routeModeIsSet_;
    int32_t masterWeight_;
    bool masterWeightIsSet_;
    std::vector<ModifyProxyRouteWeightReadonlyNode> readonlyNodes_;
    bool readonlyNodesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyGaussMySqlProxyRouteModeRequestBody_H_
