
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSqlserverDatabasesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSqlserverDatabasesResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SqlserverDatabaseForDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListSqlserverDatabasesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSqlserverDatabasesResponse();
    virtual ~ListSqlserverDatabasesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSqlserverDatabasesResponse members

    /// <summary>
    /// 数据库信息。
    /// </summary>

    std::vector<SqlserverDatabaseForDetail>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<SqlserverDatabaseForDetail>& value);

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<SqlserverDatabaseForDetail> databases_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSqlserverDatabasesResponse_H_
