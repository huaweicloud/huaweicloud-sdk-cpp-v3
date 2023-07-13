
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_ListProvidersResponse_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_ListProvidersResponse_H_

#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eps/v1/model/ProviderResponseBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  ListProvidersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProvidersResponse();
    virtual ~ListProvidersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListProvidersResponse members

    /// <summary>
    /// 云服务列表
    /// </summary>

    std::vector<ProviderResponseBody>& getProviders();
    bool providersIsSet() const;
    void unsetproviders();
    void setProviders(const std::vector<ProviderResponseBody>& value);

    /// <summary>
    /// 当前支持的云服务总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ProviderResponseBody> providers_;
    bool providersIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_ListProvidersResponse_H_
