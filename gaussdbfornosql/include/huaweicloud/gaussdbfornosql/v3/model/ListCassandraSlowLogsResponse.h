
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListCassandraSlowLogsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListCassandraSlowLogsResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/CassandraSlowLogDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListCassandraSlowLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCassandraSlowLogsResponse();
    virtual ~ListCassandraSlowLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCassandraSlowLogsResponse members

    /// <summary>
    /// 慢日志具体信息。
    /// </summary>

    std::vector<CassandraSlowLogDetail>& getSlowLogs();
    bool slowLogsIsSet() const;
    void unsetslowLogs();
    void setSlowLogs(const std::vector<CassandraSlowLogDetail>& value);


protected:
    std::vector<CassandraSlowLogDetail> slowLogs_;
    bool slowLogsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListCassandraSlowLogsResponse_H_
