
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListProjectSecretsTagsRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListProjectSecretsTagsRequest_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ListProjectSecretsTagsRequest
    : public ModelBase
{
public:
    ListProjectSecretsTagsRequest();
    virtual ~ListProjectSecretsTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectSecretsTagsRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListProjectSecretsTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListProjectSecretsTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListProjectSecretsTagsRequest_H_
