
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UploadIpdImageInIssueRequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UploadIpdImageInIssueRequestBody_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/HttpContent.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UploadIpdImageInIssueRequestBody
    : public ModelBase
{
public:
    UploadIpdImageInIssueRequestBody();
    virtual ~UploadIpdImageInIssueRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadIpdImageInIssueRequestBody members

    /// <summary>
    /// 上传的图片内容，当前支持jpg,jpeg,png,gif,bmp,tiff,svg格式的图片
    /// </summary>

    HttpContent getFile() const;
    bool fileIsSet() const;
    void unsetfile();
    void setFile(const HttpContent& value);


protected:
    HttpContent file_;
    bool fileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UploadIpdImageInIssueRequestBody_H_
