
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowClickHouseSlowLogDetailResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowClickHouseSlowLogDetailResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ChSlowLogDetailResponse_slow_log_list.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowClickHouseSlowLogDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowClickHouseSlowLogDetailResponse();
    virtual ~ShowClickHouseSlowLogDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowClickHouseSlowLogDetailResponse members

    /// <summary>
    /// 慢日志列表。
    /// </summary>

    std::vector<ChSlowLogDetailResponse_slow_log_list>& getSlowLogList();
    bool slowLogListIsSet() const;
    void unsetslowLogList();
    void setSlowLogList(const std::vector<ChSlowLogDetailResponse_slow_log_list>& value);


protected:
    std::vector<ChSlowLogDetailResponse_slow_log_list> slowLogList_;
    bool slowLogListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowClickHouseSlowLogDetailResponse_H_
