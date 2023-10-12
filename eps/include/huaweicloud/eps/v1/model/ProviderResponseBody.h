
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_ProviderResponseBody_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_ProviderResponseBody_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eps/v1/model/ResourceTypeBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  ProviderResponseBody
    : public ModelBase
{
public:
    ProviderResponseBody();
    virtual ~ProviderResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProviderResponseBody members

    /// <summary>
    /// 云服务名称
    /// </summary>

    std::string getProvider() const;
    bool providerIsSet() const;
    void unsetprovider();
    void setProvider(const std::string& value);

    /// <summary>
    /// 云服务显示名称，可以通过参数中的&#39;locale&#39;设置语言
    /// </summary>

    std::string getProviderI18nDisplayName() const;
    bool providerI18nDisplayNameIsSet() const;
    void unsetproviderI18nDisplayName();
    void setProviderI18nDisplayName(const std::string& value);

    /// <summary>
    /// 资源类型列表
    /// </summary>

    std::vector<ResourceTypeBody>& getResourceTypes();
    bool resourceTypesIsSet() const;
    void unsetresourceTypes();
    void setResourceTypes(const std::vector<ResourceTypeBody>& value);


protected:
    std::string provider_;
    bool providerIsSet_;
    std::string providerI18nDisplayName_;
    bool providerI18nDisplayNameIsSet_;
    std::vector<ResourceTypeBody> resourceTypes_;
    bool resourceTypesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_ProviderResponseBody_H_
