
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DatastoreResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DatastoreResult_H_


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
/// 数据库信息，与请求参数相同。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  DatastoreResult
    : public ModelBase
{
public:
    DatastoreResult();
    virtual ~DatastoreResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatastoreResult members

    /// <summary>
    /// 数据库类型。 - 支持GeminiDB Cassandra，GeminiDB Mongo，GeminiDB Influx数据库实例。 - 取值为“cassandra”，表示创建GeminiDB Cassandra数据库实例。 - 取值为“mongodb”，表示创建GeminiDB Mongo数据库实例。 - 取值为“influxdb”，表示创建GeminiDB Influx数据库实例。 - 取值为“dynamodb”，表示创建GeminiDB DynamoDB数据库实例。 - 取值为“hbase”，表示创建GeminiDB Hbase数据库实例。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 数据库版本。 - GeminiDB Cassandra实例支持3.11版本，取值为“3.11”。 - GeminiDB Mongo实例支持3.4，4.0版本，取值为\&quot;3.4\&quot;或\&quot;4.0\&quot;。 - GeminiDB Influx实例支持1.7版本，取值为“1.7”。 - GeminiDB DynamoDB取值为“”。 - GeminiDB HBase取值为“”。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 存储引擎。 - GeminiDB Cassandra实例支持RocksDB存储引擎，取值为“rocksDB”。 - GeminiDB Mongo实例支持RocksDB存储引擎，取值为“rocksDB”。 - GeminiDB Influx实例支持RocksDB存储引擎，取值为“rocksDB”。
    /// </summary>

    std::string getStorageEngine() const;
    bool storageEngineIsSet() const;
    void unsetstorageEngine();
    void setStorageEngine(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string storageEngine_;
    bool storageEngineIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DatastoreResult_H_
