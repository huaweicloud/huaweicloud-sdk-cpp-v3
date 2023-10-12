
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_RegisterImageRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_RegisterImageRequestBody_H_


#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 镜像上传请求体
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  RegisterImageRequestBody
    : public ModelBase
{
public:
    RegisterImageRequestBody();
    virtual ~RegisterImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RegisterImageRequestBody members

    /// <summary>
    /// 源镜像的URL，格式：&lt;bucket&gt;:&lt;file&gt; image_url对应的镜像桶中的文件，镜像文件格式的取值范围为：ZVHD、QCOW2、VHD、RAW、VHDX、QED、VDI、QCOW、ZVHD2、VMDK。
    /// </summary>

    std::string getImageUrl() const;
    bool imageUrlIsSet() const;
    void unsetimageUrl();
    void setImageUrl(const std::string& value);


protected:
    std::string imageUrl_;
    bool imageUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_RegisterImageRequestBody_H_
