
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DataStoreList_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DataStoreList_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  DataStoreList
    : public ModelBase
{
public:
    DataStoreList();
    virtual ~DataStoreList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataStoreList members

    /// <summary>
    /// 数据库引擎。
    /// </summary>

    std::string getDatastoreName() const;
    bool datastoreNameIsSet() const;
    void unsetdatastoreName();
    void setDatastoreName(const std::string& value);

    /// <summary>
    /// 数据库引擎版本。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 数据库实例类型。 取值范围： 取值为“Cluster”，表示GeminiDB Cassandra经典部署模式集群、GeminiDB Influx经典部署模式集群、GeminiDB Redis Proxy集群经典部署模式集群实例类型。 取值为“CloudNativeCluster”, 表示GeminiDB Cassandra云原生部署模式实例类型。 取值为“InfluxdbSingle”，表示GeminiDB Influx经典部署模式单节点类型实例类型。 取值为“ReplicaSet”，表示GeminiDB Mongo副本集实例类型。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string datastoreName_;
    bool datastoreNameIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DataStoreList_H_
