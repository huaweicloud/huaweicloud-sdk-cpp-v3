
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesSessionStatisticsRespondBody_top_source_ips_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesSessionStatisticsRespondBody_top_source_ips_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListInstancesSessionStatisticsRespondBody_top_source_ips
    : public ModelBase
{
public:
    ListInstancesSessionStatisticsRespondBody_top_source_ips();
    virtual ~ListInstancesSessionStatisticsRespondBody_top_source_ips();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstancesSessionStatisticsRespondBody_top_source_ips members

    /// <summary>
    /// 客户端ip地址。
    /// </summary>

    std::string getClientIp() const;
    bool clientIpIsSet() const;
    void unsetclientIp();
    void setClientIp(const std::string& value);

    /// <summary>
    /// 客户端连接数。
    /// </summary>

    int32_t getConnectionCount() const;
    bool connectionCountIsSet() const;
    void unsetconnectionCount();
    void setConnectionCount(int32_t value);


protected:
    std::string clientIp_;
    bool clientIpIsSet_;
    int32_t connectionCount_;
    bool connectionCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesSessionStatisticsRespondBody_top_source_ips_H_
