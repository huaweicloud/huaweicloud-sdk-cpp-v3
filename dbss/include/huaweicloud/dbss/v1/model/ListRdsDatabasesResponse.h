
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListRdsDatabasesResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListRdsDatabasesResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/RdsDbListResponse_databases.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListRdsDatabasesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRdsDatabasesResponse();
    virtual ~ListRdsDatabasesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRdsDatabasesResponse members

    /// <summary>
    /// rds数据库列表
    /// </summary>

    std::vector<RdsDbListResponse_databases>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<RdsDbListResponse_databases>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<RdsDbListResponse_databases> databases_;
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

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListRdsDatabasesResponse_H_
