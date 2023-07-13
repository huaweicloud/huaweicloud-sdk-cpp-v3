
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_DisassociatePublicipsResponse_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_DisassociatePublicipsResponse_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v3/model/PublicipInstanceResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  DisassociatePublicipsResponse
    : public ModelBase, public HttpResponse
{
public:
    DisassociatePublicipsResponse();
    virtual ~DisassociatePublicipsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DisassociatePublicipsResponse members

    /// <summary>
    /// 本次请求的编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PublicipInstanceResp getPublicip() const;
    bool publicipIsSet() const;
    void unsetpublicip();
    void setPublicip(const PublicipInstanceResp& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    PublicipInstanceResp publicip_;
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

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_DisassociatePublicipsResponse_H_
