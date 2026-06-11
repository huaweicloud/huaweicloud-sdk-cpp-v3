
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListHistoryTopSqlsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListHistoryTopSqlsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/TopSql.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListHistoryTopSqlsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHistoryTopSqlsResponse();
    virtual ~ListHistoryTopSqlsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHistoryTopSqlsResponse members

    /// <summary>
    /// 总记录数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// top sql 列表
    /// </summary>

    std::vector<TopSql>& getTopSqls();
    bool topSqlsIsSet() const;
    void unsettopSqls();
    void setTopSqls(const std::vector<TopSql>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<TopSql> topSqls_;
    bool topSqlsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListHistoryTopSqlsResponse_H_
