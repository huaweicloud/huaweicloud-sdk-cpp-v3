
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowJobUploadingAddressRsp_segment_url_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowJobUploadingAddressRsp_segment_url_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 分句上传任务的上传地址。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowJobUploadingAddressRsp_segment_url
    : public ModelBase
{
public:
    ShowJobUploadingAddressRsp_segment_url();
    virtual ~ShowJobUploadingAddressRsp_segment_url();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobUploadingAddressRsp_segment_url members

    /// <summary>
    /// 音频上传的地址。 &gt; * 通过该obs地址上传时需要设置content-type为audio/wav
    /// </summary>

    std::vector<std::string>& getAudioUploadingUrl();
    bool audioUploadingUrlIsSet() const;
    void unsetaudioUploadingUrl();
    void setAudioUploadingUrl(const std::vector<std::string>& value);

    /// <summary>
    /// 文本上传的地址。 &gt; * 通过该obs地址上传时需要设置content-type为text/plain
    /// </summary>

    std::vector<std::string>& getTxtUploadingUrl();
    bool txtUploadingUrlIsSet() const;
    void unsettxtUploadingUrl();
    void setTxtUploadingUrl(const std::vector<std::string>& value);


protected:
    std::vector<std::string> audioUploadingUrl_;
    bool audioUploadingUrlIsSet_;
    std::vector<std::string> txtUploadingUrl_;
    bool txtUploadingUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowJobUploadingAddressRsp_segment_url_H_
