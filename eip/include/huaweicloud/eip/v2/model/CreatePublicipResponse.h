
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipResponse_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/PublicipCreateResp.h>

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
class HUAWEICLOUD_EIP_V2_EXPORT  CreatePublicipResponse
    : public ModelBase, public HttpResponse
{
public:
    CreatePublicipResponse();
    virtual ~CreatePublicipResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePublicipResponse members

    /// <summary>
    /// 
    /// </summary>

    PublicipCreateResp getPublicip() const;
    bool publicipIsSet() const;
    void unsetpublicip();
    void setPublicip(const PublicipCreateResp& value);


protected:
    PublicipCreateResp publicip_;
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

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipResponse_H_
