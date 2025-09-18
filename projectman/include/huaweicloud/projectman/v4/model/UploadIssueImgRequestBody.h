
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UploadIssueImgRequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UploadIssueImgRequestBody_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UploadIssueImgRequestBody
    : public ModelBase
{
public:
    UploadIssueImgRequestBody();
    virtual ~UploadIssueImgRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadIssueImgRequestBody members

    /// <summary>
    /// 图片文件
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UploadIssueImgRequestBody_H_
