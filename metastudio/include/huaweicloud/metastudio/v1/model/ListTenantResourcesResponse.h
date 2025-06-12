
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTenantResourcesResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTenantResourcesResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/ResourceItemInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListTenantResourcesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTenantResourcesResponse();
    virtual ~ListTenantResourcesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTenantResourcesResponse members

    /// <summary>
    /// 资源用量列表
    /// </summary>

    std::vector<ResourceItemInfo>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<ResourceItemInfo>& value);

    /// <summary>
    /// 资源总数。
    /// </summary>

    double getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(double value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<ResourceItemInfo> resources_;
    bool resourcesIsSet_;
    double count_;
    bool countIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTenantResourcesResponse_H_
