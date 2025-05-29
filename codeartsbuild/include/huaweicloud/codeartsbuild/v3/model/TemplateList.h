
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_TemplateList_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_TemplateList_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/Parameter.h>
#include <string>
#include <huaweicloud/codeartsbuild/v3/model/QueryTemplate.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 模板列表
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  TemplateList
    : public ModelBase
{
public:
    TemplateList();
    virtual ~TemplateList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateList members

    /// <summary>
    /// 模版支持的语言
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 是否收藏模板
    /// </summary>

    bool isFavourite() const;
    bool favouriteIsSet() const;
    void unsetfavourite();
    void setFavourite(bool value);

    /// <summary>
    /// uuid
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// 模板类别
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 模板命名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 权重
    /// </summary>

    double getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(double value);

    /// <summary>
    /// 模板范围，自定义模板默认为：custom,官方模版为：official
    /// </summary>

    std::string getScope() const;
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(const std::string& value);

    /// <summary>
    /// 模板说明
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 模板是否公开
    /// </summary>

    bool isPublic() const;
    bool publicIsSet() const;
    void unsetpublic();
    void setPublic(bool value);

    /// <summary>
    /// 构建工具类型，mono、npm、maven等
    /// </summary>

    std::string getToolType() const;
    bool toolTypeIsSet() const;
    void unsettoolType();
    void setToolType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    QueryTemplate getTemplate() const;
    bool templateIsSet() const;
    void unsettemplate();
    void setTemplate(const QueryTemplate& value);

    /// <summary>
    /// 构建执行参数列表
    /// </summary>

    std::vector<Parameter>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<Parameter>& value);


protected:
    std::string language_;
    bool languageIsSet_;
    bool favourite_;
    bool favouriteIsSet_;
    std::string uuid_;
    bool uuidIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string name_;
    bool nameIsSet_;
    double weight_;
    bool weightIsSet_;
    std::string scope_;
    bool scopeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    bool public_;
    bool publicIsSet_;
    std::string toolType_;
    bool toolTypeIsSet_;
    QueryTemplate template_;
    bool templateIsSet_;
    std::vector<Parameter> parameters_;
    bool parametersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_TemplateList_H_
