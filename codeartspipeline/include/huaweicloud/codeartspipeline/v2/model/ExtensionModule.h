
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionModule_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionModule_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/codeartspipeline/v2/model/ExtensionModuleProperties.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 扩展模块信息
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ExtensionModule
    : public ModelBase
{
public:
    ExtensionModule();
    virtual ~ExtensionModule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtensionModule members

    /// <summary>
    /// 基础url
    /// </summary>

    std::string getBaseUrl() const;
    bool baseUrlIsSet() const;
    void unsetbaseUrl();
    void setBaseUrl(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 扩展点
    /// </summary>

    std::string getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::string& value);

    /// <summary>
    /// 模块id
    /// </summary>

    std::string getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ExtensionModuleProperties getProperties() const;
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const ExtensionModuleProperties& value);

    /// <summary>
    /// 发布商
    /// </summary>

    std::string getPublisher() const;
    bool publisherIsSet() const;
    void unsetpublisher();
    void setPublisher(const std::string& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 标签。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 插件链接地址
    /// </summary>

    std::string getUrlRelative() const;
    bool urlRelativeIsSet() const;
    void unseturlRelative();
    void setUrlRelative(const std::string& value);

    /// <summary>
    /// 多版本属性列表
    /// </summary>

    std::vector<Object>& getPropertiesList();
    bool propertiesListIsSet() const;
    void unsetpropertiesList();
    void setPropertiesList(const std::vector<Object>& value);

    /// <summary>
    /// 摘要版本号
    /// </summary>

    std::string getManifestVersion() const;
    bool manifestVersionIsSet() const;
    void unsetmanifestVersion();
    void setManifestVersion(const std::string& value);

    /// <summary>
    /// 分类。
    /// </summary>

    std::vector<std::string>& getCategories();
    bool categoriesIsSet() const;
    void unsetcategories();
    void setCategories(const std::vector<std::string>& value);

    /// <summary>
    /// 目标。预留字段，通常为空。
    /// </summary>

    std::string getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const std::string& value);

    /// <summary>
    /// 产品线。预留字段，通常为空。
    /// </summary>

    std::string getProductLine() const;
    bool productLineIsSet() const;
    void unsetproductLine();
    void setProductLine(const std::string& value);


protected:
    std::string baseUrl_;
    bool baseUrlIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t id_;
    bool idIsSet_;
    std::string location_;
    bool locationIsSet_;
    std::string moduleId_;
    bool moduleIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    ExtensionModuleProperties properties_;
    bool propertiesIsSet_;
    std::string publisher_;
    bool publisherIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string urlRelative_;
    bool urlRelativeIsSet_;
    std::vector<Object> propertiesList_;
    bool propertiesListIsSet_;
    std::string manifestVersion_;
    bool manifestVersionIsSet_;
    std::vector<std::string> categories_;
    bool categoriesIsSet_;
    std::string target_;
    bool targetIsSet_;
    std::string productLine_;
    bool productLineIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionModule_H_
