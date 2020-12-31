
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowPublicipResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowPublicipResponse_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/eip/model/PublicipShowResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_EXPORT  ShowPublicipResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPublicipResponse();
    virtual ~ShowPublicipResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowPublicipResponse members

    /// <summary>
    /// 
    /// </summary>

    PublicipShowResp getPublicip() const;
    bool publicipIsSet() const;
    void unsetpublicip();
    void setPublicip(const PublicipShowResp& value);


protected:
    PublicipShowResp publicip_;
    bool publicipIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ShowPublicipResponse_H_
