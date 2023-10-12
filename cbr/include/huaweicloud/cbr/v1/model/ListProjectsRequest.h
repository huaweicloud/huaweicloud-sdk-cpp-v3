
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ListProjectsRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ListProjectsRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ListProjectsRequest
    : public ModelBase
{
public:
    ListProjectsRequest();
    virtual ~ListProjectsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectsRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListProjectsRequest& dereference_from_shared_ptr(std::shared_ptr<ListProjectsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ListProjectsRequest_H_
