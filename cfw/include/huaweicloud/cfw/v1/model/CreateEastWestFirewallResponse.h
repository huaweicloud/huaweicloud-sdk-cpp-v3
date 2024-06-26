
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateEastWestFirewallResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateEastWestFirewallResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/CreateEWFirewallResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  CreateEastWestFirewallResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateEastWestFirewallResponse();
    virtual ~CreateEastWestFirewallResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateEastWestFirewallResponse members

    /// <summary>
    /// 
    /// </summary>

    CreateEWFirewallResp getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const CreateEWFirewallResp& value);


protected:
    CreateEWFirewallResp data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateEastWestFirewallResponse_H_
