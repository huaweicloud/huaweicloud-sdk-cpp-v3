
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowJobUploadingAddressResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowJobUploadingAddressResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/ShowJobUploadingAddressRsp_package_url.h>
#include <huaweicloud/metastudio/v1/model/ShowJobUploadingAddressRsp_segment_url.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowJobUploadingAddressResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowJobUploadingAddressResponse();
    virtual ~ShowJobUploadingAddressResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobUploadingAddressResponse members

    /// <summary>
    /// 
    /// </summary>

    ShowJobUploadingAddressRsp_segment_url getSegmentUrl() const;
    bool segmentUrlIsSet() const;
    void unsetsegmentUrl();
    void setSegmentUrl(const ShowJobUploadingAddressRsp_segment_url& value);

    /// <summary>
    /// 
    /// </summary>

    ShowJobUploadingAddressRsp_package_url getPackageUrl() const;
    bool packageUrlIsSet() const;
    void unsetpackageUrl();
    void setPackageUrl(const ShowJobUploadingAddressRsp_package_url& value);

    /// <summary>
    /// 授权书的上传地址。
    /// </summary>

    std::string getAuthorizationLetterUploadingUrl() const;
    bool authorizationLetterUploadingUrlIsSet() const;
    void unsetauthorizationLetterUploadingUrl();
    void setAuthorizationLetterUploadingUrl(const std::string& value);


protected:
    ShowJobUploadingAddressRsp_segment_url segmentUrl_;
    bool segmentUrlIsSet_;
    ShowJobUploadingAddressRsp_package_url packageUrl_;
    bool packageUrlIsSet_;
    std::string authorizationLetterUploadingUrl_;
    bool authorizationLetterUploadingUrlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowJobUploadingAddressResponse_H_
