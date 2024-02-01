
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyMySqlProxyRouteModeRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyMySqlProxyRouteModeRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/InstancesWeight.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改数据库代理路由模式请求体。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ModifyMySqlProxyRouteModeRequest
    : public ModelBase
{
public:
    ModifyMySqlProxyRouteModeRequest();
    virtual ~ModifyMySqlProxyRouteModeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyMySqlProxyRouteModeRequest members

    /// <summary>
    /// 数据库主实例读权重。     - 当route_mode选择0（权重负载）时，该字段取值范围为0~1000。     - 当route_mode选择1或2（负载均衡）时，该字段不生效。
    /// </summary>

    int32_t getMasterWeight() const;
    bool masterWeightIsSet() const;
    void unsetmasterWeight();
    void setMasterWeight(int32_t value);

    /// <summary>
    /// 数据库节点的读权重设置。      - 只能为只读实例选择权重。     - 该列表可以为空列表。
    /// </summary>

    std::vector<InstancesWeight>& getReadonlyInstances();
    bool readonlyInstancesIsSet() const;
    void unsetreadonlyInstances();
    void setReadonlyInstances(const std::vector<InstancesWeight>& value);

    /// <summary>
    /// 数据库代理路由模式。 取值范围:     0：表示权重负载模式。     1：表示负载均衡模式（数据库主实例不接受读请求）。     2：表示负载均衡模式（数据库主实例接受读请求）。      - 如需使用负载均衡模式，请联系客服申请
    /// </summary>

    int32_t getRouteMode() const;
    bool routeModeIsSet() const;
    void unsetrouteMode();
    void setRouteMode(int32_t value);


protected:
    int32_t masterWeight_;
    bool masterWeightIsSet_;
    std::vector<InstancesWeight> readonlyInstances_;
    bool readonlyInstancesIsSet_;
    int32_t routeMode_;
    bool routeModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyMySqlProxyRouteModeRequest_H_
