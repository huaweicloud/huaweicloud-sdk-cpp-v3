
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyTransactionSplitRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyTransactionSplitRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ProxyTransactionSplitRequest
    : public ModelBase
{
public:
    ProxyTransactionSplitRequest();
    virtual ~ProxyTransactionSplitRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxyTransactionSplitRequest members

    /// <summary>
    /// 开启/关闭事务拆分，取值范围是[ON/OFF]
    /// </summary>

    std::string getTransactionSplit() const;
    bool transactionSplitIsSet() const;
    void unsettransactionSplit();
    void setTransactionSplit(const std::string& value);

    /// <summary>
    /// 实例的数据库代理列表，仅支持单proxy使用。
    /// </summary>

    std::vector<std::string>& getProxyIdList();
    bool proxyIdListIsSet() const;
    void unsetproxyIdList();
    void setProxyIdList(const std::vector<std::string>& value);


protected:
    std::string transactionSplit_;
    bool transactionSplitIsSet_;
    std::vector<std::string> proxyIdList_;
    bool proxyIdListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyTransactionSplitRequest_H_
