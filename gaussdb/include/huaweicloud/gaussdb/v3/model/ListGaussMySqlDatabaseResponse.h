
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlDatabaseResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlDatabaseResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ListGaussMysqlDatabaseInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListGaussMySqlDatabaseResponse
    : public ModelBase, public HttpResponse
{
public:
    ListGaussMySqlDatabaseResponse();
    virtual ~ListGaussMySqlDatabaseResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGaussMySqlDatabaseResponse members

    /// <summary>
    /// 数据库信息列表。
    /// </summary>

    std::vector<ListGaussMysqlDatabaseInfo>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<ListGaussMysqlDatabaseInfo>& value);

    /// <summary>
    /// 数据库总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ListGaussMysqlDatabaseInfo> databases_;
    bool databasesIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlDatabaseResponse_H_
