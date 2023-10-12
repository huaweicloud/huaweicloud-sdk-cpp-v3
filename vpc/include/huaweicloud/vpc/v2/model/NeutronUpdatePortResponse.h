
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdatePortResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdatePortResponse_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronPort.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdatePortResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronUpdatePortResponse();
    virtual ~NeutronUpdatePortResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronUpdatePortResponse members

    /// <summary>
    /// 
    /// </summary>

    NeutronPort getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const NeutronPort& value);


protected:
    NeutronPort port_;
    bool portIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdatePortResponse_H_
