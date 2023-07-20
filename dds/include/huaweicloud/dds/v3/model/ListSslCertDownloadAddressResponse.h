
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListSslCertDownloadAddressResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListSslCertDownloadAddressResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/CertInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListSslCertDownloadAddressResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSslCertDownloadAddressResponse();
    virtual ~ListSslCertDownloadAddressResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSslCertDownloadAddressResponse members

    /// <summary>
    /// 证书列表
    /// </summary>

    std::vector<CertInfo>& getCerts();
    bool certsIsSet() const;
    void unsetcerts();
    void setCerts(const std::vector<CertInfo>& value);


protected:
    std::vector<CertInfo> certs_;
    bool certsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListSslCertDownloadAddressResponse_H_
