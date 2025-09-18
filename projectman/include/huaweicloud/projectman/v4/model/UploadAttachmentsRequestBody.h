
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UploadAttachmentsRequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UploadAttachmentsRequestBody_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UploadAttachmentsRequestBody
    : public ModelBase
{
public:
    UploadAttachmentsRequestBody();
    virtual ~UploadAttachmentsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadAttachmentsRequestBody members

    /// <summary>
    /// 附件文件， 最大上传大小为50M
    /// </summary>

    HttpContent getAttachment() const;
    bool attachmentIsSet() const;
    void unsetattachment();
    void setAttachment(const HttpContent& value);


protected:
    HttpContent attachment_;
    bool attachmentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UploadAttachmentsRequestBody_H_
