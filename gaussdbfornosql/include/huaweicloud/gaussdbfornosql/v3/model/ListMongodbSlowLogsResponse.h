
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListMongodbSlowLogsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListMongodbSlowLogsResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/MongodbSlowLogDetail.h>
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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListMongodbSlowLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListMongodbSlowLogsResponse();
    virtual ~ListMongodbSlowLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMongodbSlowLogsResponse members

    /// <summary>
    /// 慢日志具体信息。
    /// </summary>

    std::vector<MongodbSlowLogDetail>& getSlowLogs();
    bool slowLogsIsSet() const;
    void unsetslowLogs();
    void setSlowLogs(const std::vector<MongodbSlowLogDetail>& value);


protected:
    std::vector<MongodbSlowLogDetail> slowLogs_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListMongodbSlowLogsResponse_H_
