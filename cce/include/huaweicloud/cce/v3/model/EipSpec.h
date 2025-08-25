
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_EipSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_EipSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/EipSpec_bandwidth.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  EipSpec
    : public ModelBase
{
public:
    EipSpec();
    virtual ~EipSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EipSpec members

    /// <summary>
    /// 
    /// </summary>

    EipSpec_bandwidth getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const EipSpec_bandwidth& value);


protected:
    EipSpec_bandwidth bandwidth_;
    bool bandwidthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_EipSpec_H_
