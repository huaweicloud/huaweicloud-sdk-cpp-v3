
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListPluginInfoListResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListPluginInfoListResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/CustomerPluginInfoResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListPluginInfoListResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPluginInfoListResponse();
    virtual ~ListPluginInfoListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPluginInfoListResponse members

    /// <summary>
    /// **参数解释**: 插件数量。 **取值范围**: 不涉及。 
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**: 插件详细信息。 
    /// </summary>

    std::vector<CustomerPluginInfoResult>& getPlugins();
    bool pluginsIsSet() const;
    void unsetplugins();
    void setPlugins(const std::vector<CustomerPluginInfoResult>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<CustomerPluginInfoResult> plugins_;
    bool pluginsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListPluginInfoListResponse_H_
