
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListSslCertDownloadAddressesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListSslCertDownloadAddressesResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/CertInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListSslCertDownloadAddressesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSslCertDownloadAddressesResponse();
    virtual ~ListSslCertDownloadAddressesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSslCertDownloadAddressesResponse members

    /// <summary>
    /// **参数解释：** 证书列表。 **取值范围：** 不涉及。
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListSslCertDownloadAddressesResponse_H_
