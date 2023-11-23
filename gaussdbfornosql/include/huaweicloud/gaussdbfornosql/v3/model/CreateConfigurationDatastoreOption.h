
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
    /// 数据库类型。 - GeminiDB Cassandra实例取值为“cassandra”。 - GeminiDB Mongo实例取值为\&quot;mongodb\&quot;。 - GeminiDB Influx实例取值为\&quot;influxdb\&quot;。 - GeminiDB Redis实例取值为\&quot;redis\&quot;。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 数据库版本。 - GeminiDB Cassandra实例支持3.11版本，取值为“3.11”。 - GeminiDB Mongo实例支持4.0版本，取值为\&quot;4.0\&quot;。 - GeminiDB Influx实例支持1.7版本，取值\&quot;1.7\&quot;。 - GeminiDB Redis实例支持5.0版本，取值\&quot;5.0\&quot;。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 数据库部署模式，GeminiDB Mongo该参数必选。 - GeminiDB Mongo 副本集实例取值为\&quot;ReplicaSet\&quot;。
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
