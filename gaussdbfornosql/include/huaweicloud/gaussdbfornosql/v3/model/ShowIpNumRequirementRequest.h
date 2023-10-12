
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowIpNumRequirementRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowIpNumRequirementRequest_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ShowIpNumRequirementRequest
    : public ModelBase
{
public:
    ShowIpNumRequirementRequest();
    virtual ~ShowIpNumRequirementRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIpNumRequirementRequest members

    /// <summary>
    /// 创建实例或扩容节点的个数。最大支持输入200。
    /// </summary>

    int32_t getNodeNum() const;
    bool nodeNumIsSet() const;
    void unsetnodeNum();
    void setNodeNum(int32_t value);

    /// <summary>
    /// 数据库引擎名称。没有传入实例ID的时候该字段为必传。 - 取值为“cassandra”，表示GaussDB(for Cassandra)数据库引擎。 - 取值为“mongodb”，表示GaussDB(for Mongo)数据库引擎。 - 取值为“influxdb”，表示GaussDB(for Influx)数据库引擎。 - 取值为“redis”，表示GaussDB(for Redis)数据库引擎。
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// 实例类型。没有传入实例ID的时候该字段为必传。 - 取值为“Cluster”，表示GaussDB(for Cassandra)、GaussDB(for Influx)、GaussDB(for Redis)集群实例类型。 - 取值为“ReplicaSet”，表示GaussDB(for Mongo)副本集实例类型。
    /// </summary>

    std::string getInstanceMode() const;
    bool instanceModeIsSet() const;
    void unsetinstanceMode();
    void setInstanceMode(const std::string& value);

    /// <summary>
    /// 实例Id，可以调用5.3.3 查询实例列表和详情接口获取。如果未申请实例，可以调用5.3.1 创建实例接口创建。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);


protected:
    int32_t nodeNum_;
    bool nodeNumIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    std::string instanceMode_;
    bool instanceModeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowIpNumRequirementRequest& dereference_from_shared_ptr(std::shared_ptr<ShowIpNumRequirementRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowIpNumRequirementRequest_H_
