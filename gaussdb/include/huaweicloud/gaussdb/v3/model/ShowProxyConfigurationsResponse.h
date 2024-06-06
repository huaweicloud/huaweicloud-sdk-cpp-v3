
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowProxyConfigurationsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowProxyConfigurationsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ProxyConfiguration.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowProxyConfigurationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProxyConfigurationsResponse();
    virtual ~ShowProxyConfigurationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProxyConfigurationsResponse members

    /// <summary>
    /// 数据总数
    /// </summary>

    std::string getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(const std::string& value);

    /// <summary>
    /// 内核可配置的参数列表
    /// </summary>

    std::vector<ProxyConfiguration>& getConfigurations();
    bool configurationsIsSet() const;
    void unsetconfigurations();
    void setConfigurations(const std::vector<ProxyConfiguration>& value);


protected:
    std::string totalCount_;
    bool totalCountIsSet_;
    std::vector<ProxyConfiguration> configurations_;
    bool configurationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowProxyConfigurationsResponse_H_
