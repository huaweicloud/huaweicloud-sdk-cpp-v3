
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditDatabasesResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditDatabasesResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/DataBaseBean.h>
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
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditDatabasesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditDatabasesResponse();
    virtual ~ListAuditDatabasesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditDatabasesResponse members

    /// <summary>
    /// 数据库信息列表
    /// </summary>

    std::vector<DataBaseBean>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<DataBaseBean>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<DataBaseBean> databases_;
    bool databasesIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditDatabasesResponse_H_
