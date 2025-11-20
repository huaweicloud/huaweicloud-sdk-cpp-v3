
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListServerCertificateResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListServerCertificateResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/ServerCertificateDTO.h>
#include <huaweicloud/iotda/v5/model/Page.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListServerCertificateResponse
    : public ModelBase, public HttpResponse
{
public:
    ListServerCertificateResponse();
    virtual ~ListServerCertificateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListServerCertificateResponse members

    /// <summary>
    /// **参数说明**：服务端证书列表。
    /// </summary>

    std::vector<ServerCertificateDTO>& getServerCertificates();
    bool serverCertificatesIsSet() const;
    void unsetserverCertificates();
    void setServerCertificates(const std::vector<ServerCertificateDTO>& value);

    /// <summary>
    /// 
    /// </summary>

    Page getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const Page& value);


protected:
    std::vector<ServerCertificateDTO> serverCertificates_;
    bool serverCertificatesIsSet_;
    Page page_;
    bool pageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListServerCertificateResponse_H_
