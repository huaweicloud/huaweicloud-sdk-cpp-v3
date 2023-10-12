
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowAutoEnlargePolicyResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowAutoEnlargePolicyResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/DiskAutoExpansionPolicy.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ShowAutoEnlargePolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutoEnlargePolicyResponse();
    virtual ~ShowAutoEnlargePolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutoEnlargePolicyResponse members

    /// <summary>
    /// 
    /// </summary>

    DiskAutoExpansionPolicy getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const DiskAutoExpansionPolicy& value);


protected:
    DiskAutoExpansionPolicy policy_;
    bool policyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowAutoEnlargePolicyResponse_H_
