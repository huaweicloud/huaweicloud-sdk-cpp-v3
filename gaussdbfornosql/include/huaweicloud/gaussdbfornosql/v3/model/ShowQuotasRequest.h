
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowQuotasRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowQuotasRequest_H_


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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ShowQuotasRequest
    : public ModelBase
{
public:
    ShowQuotasRequest();
    virtual ~ShowQuotasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowQuotasRequest members

    /// <summary>
    /// 数据库类型。 取值为“cassandra”，表示查询GeminiDB Cassandra数据库实例配额。 取值为“mongodb”，表示GeminiDB Mongo查询数据库实例配额。 取值为“influxdb”，表示查询GeminiDB Influx数据库实例配额。 取值为“redis”，表示查询GeminiDB Redis数据库实例配额。 如果不传该参数，表示查询所有数据库实例配额。
    /// </summary>

    std::string getDatastoreType() const;
    bool datastoreTypeIsSet() const;
    void unsetdatastoreType();
    void setDatastoreType(const std::string& value);

    /// <summary>
    /// 实例类型。 取值为“Cluster”，表示GeminiDB Cassandra、GeminiDB Influx、GeminiDB Redis集群实例类型。 取值为“InfluxdbSingle”，表示GeminiDB Influx单节点实例类型。 取值为“ReplicaSet”，表示GeminiDB Mongo副本集实例类型。 如果不传datastore_type参数，自动忽略该参数设置，传入datastore_type时，该参数必填。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string datastoreType_;
    bool datastoreTypeIsSet_;
    std::string mode_;
    bool modeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowQuotasRequest& dereference_from_shared_ptr(std::shared_ptr<ShowQuotasRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowQuotasRequest_H_
