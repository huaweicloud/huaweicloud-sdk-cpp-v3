
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CreateConfigurationDatastoreOption_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CreateConfigurationDatastoreOption_H_


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
/// 数据库对象。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  CreateConfigurationDatastoreOption
    : public ModelBase
{
public:
    CreateConfigurationDatastoreOption();
    virtual ~CreateConfigurationDatastoreOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateConfigurationDatastoreOption members

    /// <summary>
    /// **参数解释：** 数据库类型。 **约束限制：** 不涉及。 **取值范围：** - GeminiDB Cassandra实例取值为“cassandra”。 - GeminiDB Mongo实例取值为\&quot;mongodb\&quot;。 - GeminiDB Influx实例取值为\&quot;influxdb\&quot;。 - GeminiDB Redis实例取值为\&quot;redis\&quot;。 - GeminiDB DynamoDB实例取值为\&quot;dynamodb\&quot;。 - GeminiDB HBase实例取值为\&quot;hbase\&quot;。 **默认取值：** 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 数据库版本。 **约束限制：** 不涉及。 **取值范围：** - GeminiDB Cassandra实例支持3.11版本，取值为“3.11”。 - GeminiDB Mongo实例支持4.0版本，取值为\\\&quot;4.0\\\&quot;。 - GeminiDB Influx实例支持1.8版本，取值\\\&quot;1.8\\\&quot;。 - GeminiDB Redis实例支持5.0版本，取值\\\&quot;5.0\\\&quot;。 **默认取值：** 不涉及。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 数据库实例类型。 **约束限制：** 当创建支持GeminiDB Mongo、GeminiDB Cassandra云原生部署模式实例的参数模板， 该参数必选。 **取值范围：** - GeminiDB Mongo副本集实例取值为\\\&quot;ReplicaSet\\\&quot;。 - GeminiDB Influx 单节点实例取值为\\\&quot;InfluxdbSingle\\\&quot;。 - GeminiDB Influx 集群增强版实例取值为\\\&quot;EnhancedCluster\\\&quot;。 - GeminiDB Cassandra云原生部署模式实例取值为\\\&quot;CloudNativeCluster\\\&quot;。 - GeminiDB Influx 云原生部署模式实例取值为\\\&quot;CloudNativeCluster\\\&quot;。 - GeminiDB Redis云原生部署模式实例取值为\\\&quot;CloudNativeCluster\\\&quot;。 **默认取值：** 不传该参数，对GeminiDB Cassandra实例默认创建支持经典部署模式实例的参数模板。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CreateConfigurationDatastoreOption_H_
