
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowEnterpriseProjectQuotaRequest_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowEnterpriseProjectQuotaRequest_H_

#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  ShowEnterpriseProjectQuotaRequest
    : public ModelBase
{
public:
    ShowEnterpriseProjectQuotaRequest();
    virtual ~ShowEnterpriseProjectQuotaRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowEnterpriseProjectQuotaRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowEnterpriseProjectQuotaRequest& dereference_from_shared_ptr(std::shared_ptr<ShowEnterpriseProjectQuotaRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowEnterpriseProjectQuotaRequest_H_
