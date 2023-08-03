
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowLogStatisticsForLtsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowLogStatisticsForLtsResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/MysqlSlowLogStatisticsItem.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListSlowLogStatisticsForLtsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSlowLogStatisticsForLtsResponse();
    virtual ~ListSlowLogStatisticsForLtsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSlowLogStatisticsForLtsResponse members

    /// <summary>
    /// 数据集合。
    /// </summary>

    std::vector<MysqlSlowLogStatisticsItem>& getSlowLogList();
    bool slowLogListIsSet() const;
    void unsetslowLogList();
    void setSlowLogList(const std::vector<MysqlSlowLogStatisticsItem>& value);

    /// <summary>
    /// 总条数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<MysqlSlowLogStatisticsItem> slowLogList_;
    bool slowLogListIsSet_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowLogStatisticsForLtsResponse_H_
