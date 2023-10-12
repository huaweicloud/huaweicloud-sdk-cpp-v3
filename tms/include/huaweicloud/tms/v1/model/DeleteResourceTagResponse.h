
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_DeleteResourceTagResponse_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_DeleteResourceTagResponse_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/tms/v1/model/TagDeleteResponseItem.h>

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
class HUAWEICLOUD_TMS_V1_EXPORT  DeleteResourceTagResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteResourceTagResponse();
    virtual ~DeleteResourceTagResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteResourceTagResponse members

    /// <summary>
    /// 查询标签下的资源
    /// </summary>

    std::vector<TagDeleteResponseItem>& getFailedResources();
    bool failedResourcesIsSet() const;
    void unsetfailedResources();
    void setFailedResources(const std::vector<TagDeleteResponseItem>& value);


protected:
    std::vector<TagDeleteResponseItem> failedResources_;
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

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_DeleteResourceTagResponse_H_
