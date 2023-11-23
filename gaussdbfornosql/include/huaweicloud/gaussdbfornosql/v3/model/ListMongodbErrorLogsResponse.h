
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListMongodbErrorLogsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListMongodbErrorLogsResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdbfornosql/v3/model/MongodbErrorLogDetail.h>

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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListMongodbErrorLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListMongodbErrorLogsResponse();
    virtual ~ListMongodbErrorLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMongodbErrorLogsResponse members

    /// <summary>
    /// 错误日志具体信息。
    /// </summary>

    std::vector<MongodbErrorLogDetail>& getErrorLogs();
    bool errorLogsIsSet() const;
    void unseterrorLogs();
    void setErrorLogs(const std::vector<MongodbErrorLogDetail>& value);


protected:
    std::vector<MongodbErrorLogDetail> errorLogs_;
    bool errorLogsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListMongodbErrorLogsResponse_H_
