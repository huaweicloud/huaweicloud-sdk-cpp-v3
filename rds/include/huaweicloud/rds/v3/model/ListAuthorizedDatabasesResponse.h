
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAuthorizedDatabasesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAuthorizedDatabasesResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/DatabaseWithPrivilege.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListAuthorizedDatabasesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuthorizedDatabasesResponse();
    virtual ~ListAuthorizedDatabasesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListAuthorizedDatabasesResponse members

    /// <summary>
    /// 数据库及相关权限。
    /// </summary>

    std::vector<DatabaseWithPrivilege>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<DatabaseWithPrivilege>& value);

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<DatabaseWithPrivilege> databases_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAuthorizedDatabasesResponse_H_
