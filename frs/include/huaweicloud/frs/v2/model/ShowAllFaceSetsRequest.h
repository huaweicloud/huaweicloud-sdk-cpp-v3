
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_ShowAllFaceSetsRequest_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_ShowAllFaceSetsRequest_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  ShowAllFaceSetsRequest
    : public ModelBase
{
public:
    ShowAllFaceSetsRequest();
    virtual ~ShowAllFaceSetsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowAllFaceSetsRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAllFaceSetsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAllFaceSetsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_ShowAllFaceSetsRequest_H_
