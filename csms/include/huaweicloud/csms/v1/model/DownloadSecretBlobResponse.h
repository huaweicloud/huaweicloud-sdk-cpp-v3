
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_DownloadSecretBlobResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_DownloadSecretBlobResponse_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  DownloadSecretBlobResponse
    : public ModelBase, public HttpResponse
{
public:
    DownloadSecretBlobResponse();
    virtual ~DownloadSecretBlobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DownloadSecretBlobResponse members

    /// <summary>
    /// 将指定凭据对象进行备份后得到的凭据备份文件，备份文件包含有凭据当前所有的凭据版本信息，备份文件经过加密与编码，内容不可直接读。 
    /// </summary>

    std::string getSecretBlob() const;
    bool secretBlobIsSet() const;
    void unsetsecretBlob();
    void setSecretBlob(const std::string& value);


protected:
    std::string secretBlob_;
    bool secretBlobIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_DownloadSecretBlobResponse_H_
