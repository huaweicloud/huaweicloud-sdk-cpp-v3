
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListDefaultReviewCategoriesRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListDefaultReviewCategoriesRequest_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListDefaultReviewCategoriesRequest
    : public ModelBase
{
public:
    ListDefaultReviewCategoriesRequest();
    virtual ~ListDefaultReviewCategoriesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDefaultReviewCategoriesRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDefaultReviewCategoriesRequest& dereference_from_shared_ptr(std::shared_ptr<ListDefaultReviewCategoriesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListDefaultReviewCategoriesRequest_H_
