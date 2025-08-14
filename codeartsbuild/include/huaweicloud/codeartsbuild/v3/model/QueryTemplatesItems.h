
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_QueryTemplatesItems_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_QueryTemplatesItems_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/codeartsbuild/v3/model/CreateBuildJobParameter.h>
#include <vector>
#include <huaweicloud/codeartsbuild/v3/model/QueryTemplateVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  QueryTemplatesItems
    : public ModelBase
{
public:
    QueryTemplatesItems();
    virtual ~QueryTemplatesItems();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryTemplatesItems members

    /// <summary>
    /// 是否收藏模板
    /// </summary>

    bool isFavourite() const;
    bool favouriteIsSet() const;
    void unsetfavourite();
    void setFavourite(bool value);

    /// <summary>
    /// 昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 数据库中id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// uuid
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    QueryTemplateVo getTemplate() const;
    bool templateIsSet() const;
    void unsettemplate();
    void setTemplate(const QueryTemplateVo& value);

    /// <summary>
    /// 模板类别
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 模板是否公开
    /// </summary>

    bool isPublic() const;
    bool publicIsSet() const;
    void unsetpublic();
    void setPublic(bool value);

    /// <summary>
    /// 模板命名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// domainId
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 权重
    /// </summary>

    double getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(double value);

    /// <summary>
    /// 用户id
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// domain名字
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 模板范围，自定义模板默认为custom
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
    /// 构建工具类型，yaml构建还是action构建
    /// </summary>

    std::string getToolType() const;
    bool toolTypeIsSet() const;
    void unsettoolType();
    void setToolType(const std::string& value);

    /// <summary>
    /// intl说明
    /// </summary>

    Object getIntlDescription() const;
    bool intlDescriptionIsSet() const;
    void unsetintlDescription();
    void setIntlDescription(const Object& value);

    /// <summary>
    /// 构建执行参数列表
    /// </summary>

    std::vector<CreateBuildJobParameter>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<CreateBuildJobParameter>& value);

    /// <summary>
    /// i18n
    /// </summary>

    Object getI18n() const;
    bool i18nIsSet() const;
    void unseti18n();
    void setI18n(const Object& value);


protected:
    bool favourite_;
    bool favouriteIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string uuid_;
    bool uuidIsSet_;
    QueryTemplateVo template_;
    bool templateIsSet_;
    std::string type_;
    bool typeIsSet_;
    bool public_;
    bool publicIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    double weight_;
    bool weightIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string scope_;
    bool scopeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string toolType_;
    bool toolTypeIsSet_;
    Object intlDescription_;
    bool intlDescriptionIsSet_;
    std::vector<CreateBuildJobParameter> parameters_;
    bool parametersIsSet_;
    Object i18n_;
    bool i18nIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_QueryTemplatesItems_H_
