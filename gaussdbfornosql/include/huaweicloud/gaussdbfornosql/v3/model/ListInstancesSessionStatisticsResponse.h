
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesSessionStatisticsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesSessionStatisticsResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstancesSessionStatisticsRespondBody_top_source_ips.h>
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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListInstancesSessionStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstancesSessionStatisticsResponse();
    virtual ~ListInstancesSessionStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstancesSessionStatisticsResponse members

    /// <summary>
    /// 总客户端连接数。
    /// </summary>

    int32_t getTotalConnectionCount() const;
    bool totalConnectionCountIsSet() const;
    void unsettotalConnectionCount();
    void setTotalConnectionCount(int32_t value);

    /// <summary>
    /// active_connection_count
    /// </summary>

    int32_t getActiveConnectionCount() const;
    bool activeConnectionCountIsSet() const;
    void unsetactiveConnectionCount();
    void setActiveConnectionCount(int32_t value);

    /// <summary>
    /// 节点连接的各个客户端连接数汇总，从大到小取前十个，最多十个，展示客户端的ip地址和连接总数。
    /// </summary>

    std::vector<ListInstancesSessionStatisticsRespondBody_top_source_ips>& getTopSourceIps();
    bool topSourceIpsIsSet() const;
    void unsettopSourceIps();
    void setTopSourceIps(const std::vector<ListInstancesSessionStatisticsRespondBody_top_source_ips>& value);

    /// <summary>
    /// 节点各数据库连接的客户端的ip和该ip连接节点的连接数，按连接数从高到低取前十个，最多十个。
    /// </summary>

    Object getTopDbs() const;
    bool topDbsIsSet() const;
    void unsettopDbs();
    void setTopDbs(const Object& value);


protected:
    int32_t totalConnectionCount_;
    bool totalConnectionCountIsSet_;
    int32_t activeConnectionCount_;
    bool activeConnectionCountIsSet_;
    std::vector<ListInstancesSessionStatisticsRespondBody_top_source_ips> topSourceIps_;
    bool topSourceIpsIsSet_;
    Object topDbs_;
    bool topDbsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesSessionStatisticsResponse_H_
