
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowJobUploadingAddressRsp_package_url_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowJobUploadingAddressRsp_package_url_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 整包上传任务的url。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowJobUploadingAddressRsp_package_url
    : public ModelBase
{
public:
    ShowJobUploadingAddressRsp_package_url();
    virtual ~ShowJobUploadingAddressRsp_package_url();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobUploadingAddressRsp_package_url members

    /// <summary>
    /// 上传的训练数据地址,用户需要将训练数据打成zip包后上传到该url。 &gt; * 通过该obs地址上传时需要设置content-type为application/zip
    /// </summary>

    std::string getTrainingDataUploadingUrl() const;
    bool trainingDataUploadingUrlIsSet() const;
    void unsettrainingDataUploadingUrl();
    void setTrainingDataUploadingUrl(const std::string& value);


protected:
    std::string trainingDataUploadingUrl_;
    bool trainingDataUploadingUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowJobUploadingAddressRsp_package_url_H_
