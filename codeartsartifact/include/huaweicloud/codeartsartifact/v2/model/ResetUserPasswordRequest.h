
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ResetUserPasswordRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ResetUserPasswordRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ResetUserPasswordRequest
    : public ModelBase
{
public:
    ResetUserPasswordRequest();
    virtual ~ResetUserPasswordRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetUserPasswordRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ResetUserPasswordRequest& dereference_from_shared_ptr(std::shared_ptr<ResetUserPasswordRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ResetUserPasswordRequest_H_
