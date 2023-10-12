
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_CreateResourceTagResponse_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_CreateResourceTagResponse_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/TagCreateResponseItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  CreateResourceTagResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateResourceTagResponse();
    virtual ~CreateResourceTagResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateResourceTagResponse members

    /// <summary>
    /// 查询标签下的资源
    /// </summary>

    std::vector<TagCreateResponseItem>& getFailedResources();
    bool failedResourcesIsSet() const;
    void unsetfailedResources();
    void setFailedResources(const std::vector<TagCreateResponseItem>& value);


protected:
    std::vector<TagCreateResponseItem> failedResources_;
    bool failedResourcesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_CreateResourceTagResponse_H_
