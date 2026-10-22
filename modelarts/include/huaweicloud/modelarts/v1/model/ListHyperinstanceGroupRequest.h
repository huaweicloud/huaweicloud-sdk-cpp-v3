
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListHyperinstanceGroupRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListHyperinstanceGroupRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListHyperinstanceGroupRequest
    : public ModelBase
{
public:
    ListHyperinstanceGroupRequest();
    virtual ~ListHyperinstanceGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHyperinstanceGroupRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListHyperinstanceGroupRequest& dereference_from_shared_ptr(std::shared_ptr<ListHyperinstanceGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListHyperinstanceGroupRequest_H_
