
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UploadBasicPluginRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UploadBasicPluginRequestBody_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/HttpContent.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  UploadBasicPluginRequestBody
    : public ModelBase
{
public:
    UploadBasicPluginRequestBody();
    virtual ~UploadBasicPluginRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadBasicPluginRequestBody members

    /// <summary>
    /// 
    /// </summary>

    HttpContent getUploadFile() const;
    bool uploadFileIsSet() const;
    void unsetuploadFile();
    void setUploadFile(const HttpContent& value);


protected:
    HttpContent uploadFile_;
    bool uploadFileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UploadBasicPluginRequestBody_H_
