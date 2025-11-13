
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AttachmentUploadingAddress_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AttachmentUploadingAddress_H_


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
/// 审核附件上传地址
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AttachmentUploadingAddress
    : public ModelBase
{
public:
    AttachmentUploadingAddress();
    virtual ~AttachmentUploadingAddress();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachmentUploadingAddress members

    /// <summary>
    /// 序号
    /// </summary>

    int32_t getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(int32_t value);

    /// <summary>
    /// 上传url
    /// </summary>

    std::string getUploadingUrl() const;
    bool uploadingUrlIsSet() const;
    void unsetuploadingUrl();
    void setUploadingUrl(const std::string& value);


protected:
    int32_t number_;
    bool numberIsSet_;
    std::string uploadingUrl_;
    bool uploadingUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AttachmentUploadingAddress_H_
