
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowTenantDevelopModeRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowTenantDevelopModeRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowTenantDevelopModeRequest
    : public ModelBase
{
public:
    ShowTenantDevelopModeRequest();
    virtual ~ShowTenantDevelopModeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTenantDevelopModeRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTenantDevelopModeRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTenantDevelopModeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowTenantDevelopModeRequest_H_
