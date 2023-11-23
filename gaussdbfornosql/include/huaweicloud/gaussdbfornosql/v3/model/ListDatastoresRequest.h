
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListDatastoresRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListDatastoresRequest_H_


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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListDatastoresRequest
    : public ModelBase
{
public:
    ListDatastoresRequest();
    virtual ~ListDatastoresRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDatastoresRequest members

    /// <summary>
    /// 数据库类型。   - GeminiDB Cassandra数据库实例，取值为“cassandra”。   - GeminiDB Mongo数据库实例，取值为“mongodb”。   - GeminiDB Influx数据库实例，取值为“influxdb”。   - GeminiDB Redis数据库实例，取值为“redis”。
    /// </summary>

    std::string getDatastoreName() const;
    bool datastoreNameIsSet() const;
    void unsetdatastoreName();
    void setDatastoreName(const std::string& value);


protected:
    std::string datastoreName_;
    bool datastoreNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDatastoresRequest& dereference_from_shared_ptr(std::shared_ptr<ListDatastoresRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListDatastoresRequest_H_
