
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyTriggerReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyTriggerReq_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/PolicyTriggerPropertiesReq.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  PolicyTriggerReq
    : public ModelBase
{
public:
    PolicyTriggerReq();
    virtual ~PolicyTriggerReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PolicyTriggerReq members

    /// <summary>
    /// 
    /// </summary>

    PolicyTriggerPropertiesReq getProperties() const;
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const PolicyTriggerPropertiesReq& value);


protected:
    PolicyTriggerPropertiesReq properties_;
    bool propertiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyTriggerReq_H_
