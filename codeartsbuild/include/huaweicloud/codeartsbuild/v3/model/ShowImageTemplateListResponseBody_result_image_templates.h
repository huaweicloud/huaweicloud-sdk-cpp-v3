
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowImageTemplateListResponseBody_result_image_templates_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowImageTemplateListResponseBody_result_image_templates_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 镜像模版信息
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowImageTemplateListResponseBody_result_image_templates
    : public ModelBase
{
public:
    ShowImageTemplateListResponseBody_result_image_templates();
    virtual ~ShowImageTemplateListResponseBody_result_image_templates();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowImageTemplateListResponseBody_result_image_templates members

    /// <summary>
    /// 镜像模版ID
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// swr镜像组织
    /// </summary>

    std::string getOrganization() const;
    bool organizationIsSet() const;
    void unsetorganization();
    void setOrganization(const std::string& value);

    /// <summary>
    /// 镜像名
    /// </summary>

    std::string getImageName() const;
    bool imageNameIsSet() const;
    void unsetimageName();
    void setImageName(const std::string& value);

    /// <summary>
    /// 镜像label
    /// </summary>

    std::string getImageLabel() const;
    bool imageLabelIsSet() const;
    void unsetimageLabel();
    void setImageLabel(const std::string& value);

    /// <summary>
    /// 操作系统
    /// </summary>

    std::string getBaseImage() const;
    bool baseImageIsSet() const;
    void unsetbaseImage();
    void setBaseImage(const std::string& value);

    /// <summary>
    /// 镜像标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 镜像描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 镜像创建日期
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    std::string organization_;
    bool organizationIsSet_;
    std::string imageName_;
    bool imageNameIsSet_;
    std::string imageLabel_;
    bool imageLabelIsSet_;
    std::string baseImage_;
    bool baseImageIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowImageTemplateListResponseBody_result_image_templates_H_
