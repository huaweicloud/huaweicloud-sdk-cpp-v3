
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyCreateReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyCreateReq_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/PolicyCreate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  PolicyCreateReq
    : public ModelBase
{
public:
    PolicyCreateReq();
    virtual ~PolicyCreateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PolicyCreateReq members

    /// <summary>
    /// 
    /// </summary>

    PolicyCreate getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const PolicyCreate& value);


protected:
    PolicyCreate policy_;
    bool policyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyCreateReq_H_
