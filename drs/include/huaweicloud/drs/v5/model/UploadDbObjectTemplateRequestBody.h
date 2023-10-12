
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UploadDbObjectTemplateRequestBody_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UploadDbObjectTemplateRequestBody_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/HttpContent.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  UploadDbObjectTemplateRequestBody
    : public ModelBase
{
public:
    UploadDbObjectTemplateRequestBody();
    virtual ~UploadDbObjectTemplateRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadDbObjectTemplateRequestBody members

    /// <summary>
    /// 待上传的模板文件。
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

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UploadDbObjectTemplateRequestBody_H_
