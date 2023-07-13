
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyUpdateReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyUpdateReq_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/PolicyUpdate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 策略修改body
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  PolicyUpdateReq
    : public ModelBase
{
public:
    PolicyUpdateReq();
    virtual ~PolicyUpdateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PolicyUpdateReq members

    /// <summary>
    /// 
    /// </summary>

    PolicyUpdate getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const PolicyUpdate& value);


protected:
    PolicyUpdate policy_;
    bool policyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyUpdateReq_H_
