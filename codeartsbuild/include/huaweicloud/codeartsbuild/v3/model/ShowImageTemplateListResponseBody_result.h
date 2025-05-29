
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowImageTemplateListResponseBody_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowImageTemplateListResponseBody_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/ShowImageTemplateListResponseBody_result_image_templates.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 返回结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowImageTemplateListResponseBody_result
    : public ModelBase
{
public:
    ShowImageTemplateListResponseBody_result();
    virtual ~ShowImageTemplateListResponseBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowImageTemplateListResponseBody_result members

    /// <summary>
    /// 镜像模版列表
    /// </summary>

    std::vector<ShowImageTemplateListResponseBody_result_image_templates>& getImageTemplates();
    bool imageTemplatesIsSet() const;
    void unsetimageTemplates();
    void setImageTemplates(const std::vector<ShowImageTemplateListResponseBody_result_image_templates>& value);


protected:
    std::vector<ShowImageTemplateListResponseBody_result_image_templates> imageTemplates_;
    bool imageTemplatesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowImageTemplateListResponseBody_result_H_
