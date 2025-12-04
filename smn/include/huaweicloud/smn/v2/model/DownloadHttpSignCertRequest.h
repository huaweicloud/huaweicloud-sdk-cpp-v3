
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_DownloadHttpSignCertRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_DownloadHttpSignCertRequest_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  DownloadHttpSignCertRequest
    : public ModelBase
{
public:
    DownloadHttpSignCertRequest();
    virtual ~DownloadHttpSignCertRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadHttpSignCertRequest members

    /// <summary>
    /// 证书文件ID名称，格式为SMN-{RegionID}-{UUID}.pem
    /// </summary>

    std::string getCertificateId() const;
    bool certificateIdIsSet() const;
    void unsetcertificateId();
    void setCertificateId(const std::string& value);


protected:
    std::string certificateId_;
    bool certificateIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DownloadHttpSignCertRequest& dereference_from_shared_ptr(std::shared_ptr<DownloadHttpSignCertRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_DownloadHttpSignCertRequest_H_
