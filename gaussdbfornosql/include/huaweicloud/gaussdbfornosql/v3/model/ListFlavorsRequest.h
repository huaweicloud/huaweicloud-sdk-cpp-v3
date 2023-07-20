
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListFlavorsRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListFlavorsRequest_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListFlavorsRequest
    : public ModelBase
{
public:
    ListFlavorsRequest();
    virtual ~ListFlavorsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListFlavorsRequest members

    /// <summary>
    /// 实例所在区域。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 数据库类型。   - 取值为“cassandra”，表示查询GaussDB(for Cassandra)数据库实例支持的规格。   - 取值为“mongodb”，表示查询GaussDB(for Mongo)数据库实例支持的规格。   - 取值为“influxdb”，表示查询GaussDB(for Influx)数据库实例支持的规格。   - 取值为“redis”，表示查询GaussDB(for Redis)数据库实例支持的规格。   - 如果不传该参数，默认为“cassandra”。
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);


protected:
    std::string region_;
    bool regionIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListFlavorsRequest& dereference_from_shared_ptr(std::shared_ptr<ListFlavorsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListFlavorsRequest_H_
