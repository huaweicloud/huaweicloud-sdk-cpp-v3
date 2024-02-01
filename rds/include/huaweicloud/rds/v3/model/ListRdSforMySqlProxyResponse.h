
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListRdSforMySqlProxyResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListRdSforMySqlProxyResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/QueryProxyResponseV3.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListRdSforMySqlProxyResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRdSforMySqlProxyResponse();
    virtual ~ListRdSforMySqlProxyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRdSforMySqlProxyResponse members

    /// <summary>
    /// 数据库实例下的数据库代理信息列表。
    /// </summary>

    std::vector<QueryProxyResponseV3>& getProxyQueryInfoList();
    bool proxyQueryInfoListIsSet() const;
    void unsetproxyQueryInfoList();
    void setProxyQueryInfoList(const std::vector<QueryProxyResponseV3>& value);

    /// <summary>
    /// 支持同时开启的数据库代理的最大数量。
    /// </summary>

    int32_t getMaxProxyNum() const;
    bool maxProxyNumIsSet() const;
    void unsetmaxProxyNum();
    void setMaxProxyNum(int32_t value);

    /// <summary>
    /// 单个数据库代理支持选择的代理节点的最大数量。
    /// </summary>

    int32_t getMaxProxyNodeNum() const;
    bool maxProxyNodeNumIsSet() const;
    void unsetmaxProxyNodeNum();
    void setMaxProxyNodeNum(int32_t value);

    /// <summary>
    /// 是否支持创建数据库代理时设置负载均衡路由模式。
    /// </summary>

    bool isSupportBalanceRouteModeForFavoredVersion() const;
    bool supportBalanceRouteModeForFavoredVersionIsSet() const;
    void unsetsupportBalanceRouteModeForFavoredVersion();
    void setSupportBalanceRouteModeForFavoredVersion(bool value);


protected:
    std::vector<QueryProxyResponseV3> proxyQueryInfoList_;
    bool proxyQueryInfoListIsSet_;
    int32_t maxProxyNum_;
    bool maxProxyNumIsSet_;
    int32_t maxProxyNodeNum_;
    bool maxProxyNodeNumIsSet_;
    bool supportBalanceRouteModeForFavoredVersion_;
    bool supportBalanceRouteModeForFavoredVersionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListRdSforMySqlProxyResponse_H_
