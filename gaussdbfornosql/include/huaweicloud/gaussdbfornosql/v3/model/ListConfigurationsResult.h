
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListConfigurationsResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListConfigurationsResult_H_


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
/// 参数模板信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListConfigurationsResult
    : public ModelBase
{
public:
    ListConfigurationsResult();
    virtual ~ListConfigurationsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListConfigurationsResult members

    /// <summary>
    /// 参数模板ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 参数模板名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数模板描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 数据库版本名称。
    /// </summary>

    std::string getDatastoreVersionName() const;
    bool datastoreVersionNameIsSet() const;
    void unsetdatastoreVersionName();
    void setDatastoreVersionName(const std::string& value);

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getDatastoreName() const;
    bool datastoreNameIsSet() const;
    void unsetdatastoreName();
    void setDatastoreName(const std::string& value);

    /// <summary>
    /// 创建时间，格式为\&quot;yyyy-MM-ddTHH:mm:ssZ\&quot;。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 更新时间，格式为\&quot;yyyy-MM-ddTHH:mm:ssZ\&quot;。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// 数据库实例类型。 GeminiDB Cassandra集群类型为\&quot;Cluster\&quot;。 GeminiDB Mongo副本集类型为\&quot;ReplicaSet\&quot;。 GeminiDB Mongo集群类型为\&quot;Sharding\&quot;。 GeminiDB Influx集群类型为\&quot;Cluster\&quot;。 GeminiDB Influx单节点类型为\&quot;InfluxdbSingle\&quot;。 GeminiDB Redis集群类型为“Cluster”。 GeminiDB Redis主备类型为“Replication”。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 是否是用户自定义参数模板： - false，表示为系统默认参数模板。 - true，表示为用户自定义参数模板。
    /// </summary>

    bool isUserDefined() const;
    bool userDefinedIsSet() const;
    void unsetuserDefined();
    void setUserDefined(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string datastoreVersionName_;
    bool datastoreVersionNameIsSet_;
    std::string datastoreName_;
    bool datastoreNameIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::string mode_;
    bool modeIsSet_;
    bool userDefined_;
    bool userDefinedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListConfigurationsResult_H_
