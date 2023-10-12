
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlProxyListResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlProxyListResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/MysqlShowProxyResponseV3.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowGaussMySqlProxyListResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowGaussMySqlProxyListResponse();
    virtual ~ShowGaussMySqlProxyListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGaussMySqlProxyListResponse members

    /// <summary>
    /// Proxy实例信息列表。
    /// </summary>

    std::vector<MysqlShowProxyResponseV3>& getProxyList();
    bool proxyListIsSet() const;
    void unsetproxyList();
    void setProxyList(const std::vector<MysqlShowProxyResponseV3>& value);


protected:
    std::vector<MysqlShowProxyResponseV3> proxyList_;
    bool proxyListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlProxyListResponse_H_
