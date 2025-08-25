
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterEIPRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterEIPRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/MasterEIPRequestSpec.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  MasterEIPRequest
    : public ModelBase
{
public:
    MasterEIPRequest();
    virtual ~MasterEIPRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MasterEIPRequest members

    /// <summary>
    /// 
    /// </summary>

    MasterEIPRequestSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const MasterEIPRequestSpec& value);


protected:
    MasterEIPRequestSpec spec_;
    bool specIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterEIPRequest_H_
