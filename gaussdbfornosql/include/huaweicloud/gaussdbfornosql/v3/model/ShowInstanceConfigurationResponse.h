
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowInstanceConfigurationResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowInstanceConfigurationResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbfornosql/v3/model/ConfigurationParameterResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ShowInstanceConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowInstanceConfigurationResponse();
    virtual ~ShowInstanceConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowInstanceConfigurationResponse members

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
    /// 创建时间，格式为\&quot;yyyy-MM-ddTHH:mm:ssZ\&quot;。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
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
    /// 参数模板ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 数据库实例类型。 GeminiDB Cassandra集群类型为\&quot;Cluster\&quot;。 GeminiDB Mongo副本集类型为\&quot;ReplicaSet\&quot;。 GeminiDB Mongo集群类型为\&quot;Sharding\&quot;。 GeminiDB Influx集群类型为\&quot;Cluster\&quot;。 GeminiDB Influx单节点类型为\&quot;InfluxdbSingle\&quot;。 GeminiDB Redis集群类型为“Cluster”。 GeminiDB Redis主备类型为“Replication”。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 参数对象，用户基于默认参数模板自定义的参数配置。
    /// </summary>

    std::vector<ConfigurationParameterResult>& getConfigurationParameters();
    bool configurationParametersIsSet() const;
    void unsetconfigurationParameters();
    void setConfigurationParameters(const std::vector<ConfigurationParameterResult>& value);


protected:
    std::string datastoreVersionName_;
    bool datastoreVersionNameIsSet_;
    std::string datastoreName_;
    bool datastoreNameIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::vector<ConfigurationParameterResult> configurationParameters_;
    bool configurationParametersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowInstanceConfigurationResponse_H_
