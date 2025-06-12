
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowResourceUsageResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowResourceUsageResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/ResourceUsageInfo.h>
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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowResourceUsageResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowResourceUsageResponse();
    virtual ~ShowResourceUsageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowResourceUsageResponse members

    /// <summary>
    /// 资源用量列表
    /// </summary>

    std::vector<ResourceUsageInfo>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<ResourceUsageInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<ResourceUsageInfo> resources_;
    bool resourcesIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowResourceUsageResponse_H_
