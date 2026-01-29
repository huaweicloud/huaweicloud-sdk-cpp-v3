
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListUserPrivilegesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListUserPrivilegesRequest_H_


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ListUserPrivilegesRequest
    : public ModelBase
{
public:
    ListUserPrivilegesRequest();
    virtual ~ListUserPrivilegesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUserPrivilegesRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListUserPrivilegesRequest& dereference_from_shared_ptr(std::shared_ptr<ListUserPrivilegesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListUserPrivilegesRequest_H_
