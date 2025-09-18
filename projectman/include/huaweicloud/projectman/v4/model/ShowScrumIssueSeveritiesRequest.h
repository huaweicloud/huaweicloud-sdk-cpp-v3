
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowScrumIssueSeveritiesRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowScrumIssueSeveritiesRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowScrumIssueSeveritiesRequest
    : public ModelBase
{
public:
    ShowScrumIssueSeveritiesRequest();
    virtual ~ShowScrumIssueSeveritiesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowScrumIssueSeveritiesRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowScrumIssueSeveritiesRequest& dereference_from_shared_ptr(std::shared_ptr<ShowScrumIssueSeveritiesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowScrumIssueSeveritiesRequest_H_
