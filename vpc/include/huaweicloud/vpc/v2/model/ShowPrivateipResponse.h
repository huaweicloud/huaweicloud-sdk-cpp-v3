
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowPrivateipResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowPrivateipResponse_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/Privateip.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  ShowPrivateipResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPrivateipResponse();
    virtual ~ShowPrivateipResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPrivateipResponse members

    /// <summary>
    /// 
    /// </summary>

    Privateip getPrivateip() const;
    bool privateipIsSet() const;
    void unsetprivateip();
    void setPrivateip(const Privateip& value);


protected:
    Privateip privateip_;
    bool privateipIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowPrivateipResponse_H_
