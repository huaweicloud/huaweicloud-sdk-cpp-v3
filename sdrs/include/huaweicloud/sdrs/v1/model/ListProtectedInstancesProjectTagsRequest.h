
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesProjectTagsRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesProjectTagsRequest_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ListProtectedInstancesProjectTagsRequest
    : public ModelBase
{
public:
    ListProtectedInstancesProjectTagsRequest();
    virtual ~ListProtectedInstancesProjectTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProtectedInstancesProjectTagsRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListProtectedInstancesProjectTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListProtectedInstancesProjectTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesProjectTagsRequest_H_
