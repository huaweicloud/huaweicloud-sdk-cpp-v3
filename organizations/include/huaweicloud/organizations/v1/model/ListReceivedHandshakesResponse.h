
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListReceivedHandshakesResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListReceivedHandshakesResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/HandshakeDto.h>
#include <huaweicloud/organizations/v1/model/PageInfoDto.h>
#include <vector>

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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ListReceivedHandshakesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListReceivedHandshakesResponse();
    virtual ~ListReceivedHandshakesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListReceivedHandshakesResponse members

    /// <summary>
    /// 邀请（握手）对象的列表，其中包含与指定账号关联的每个邀请（握手）的详细信息。
    /// </summary>

    std::vector<HandshakeDto>& getHandshakes();
    bool handshakesIsSet() const;
    void unsethandshakes();
    void setHandshakes(const std::vector<HandshakeDto>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<HandshakeDto> handshakes_;
    bool handshakesIsSet_;
    PageInfoDto pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListReceivedHandshakesResponse_H_
