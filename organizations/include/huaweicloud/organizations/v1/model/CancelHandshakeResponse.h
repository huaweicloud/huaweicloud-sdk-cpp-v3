
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CancelHandshakeResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CancelHandshakeResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/HandshakeDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  CancelHandshakeResponse
    : public ModelBase, public HttpResponse
{
public:
    CancelHandshakeResponse();
    virtual ~CancelHandshakeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CancelHandshakeResponse members

    /// <summary>
    /// 
    /// </summary>

    HandshakeDto getHandshake() const;
    bool handshakeIsSet() const;
    void unsethandshake();
    void setHandshake(const HandshakeDto& value);


protected:
    HandshakeDto handshake_;
    bool handshakeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CancelHandshakeResponse_H_
