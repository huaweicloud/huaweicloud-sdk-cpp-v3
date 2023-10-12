
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSslCertDownloadLinkResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSslCertDownloadLinkResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/DownloadInfoRsp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListSslCertDownloadLinkResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSslCertDownloadLinkResponse();
    virtual ~ListSslCertDownloadLinkResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSslCertDownloadLinkResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<DownloadInfoRsp>& getCertInfoList();
    bool certInfoListIsSet() const;
    void unsetcertInfoList();
    void setCertInfoList(const std::vector<DownloadInfoRsp>& value);


protected:
    std::vector<DownloadInfoRsp> certInfoList_;
    bool certInfoListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSslCertDownloadLinkResponse_H_
