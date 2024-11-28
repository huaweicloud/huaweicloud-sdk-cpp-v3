
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSlowLogStatisticsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSlowLogStatisticsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ShowSlowLogStatisticsItem.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowSlowLogStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSlowLogStatisticsResponse();
    virtual ~ShowSlowLogStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSlowLogStatisticsResponse members

    /// <summary>
    /// 慢日志统计信息列表。
    /// </summary>

    std::vector<ShowSlowLogStatisticsItem>& getSlowLogList();
    bool slowLogListIsSet() const;
    void unsetslowLogList();
    void setSlowLogList(const std::vector<ShowSlowLogStatisticsItem>& value);

    /// <summary>
    /// 总条数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ShowSlowLogStatisticsItem> slowLogList_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSlowLogStatisticsResponse_H_
