
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowAppTemplateResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowAppTemplateResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/functiongraph/v2/model/AppTemplateResourceDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ShowAppTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAppTemplateResponse();
    virtual ~ShowAppTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAppTemplateResponse members

    /// <summary>
    /// 模板名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 模板描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 模板执行运行时
    /// </summary>

    std::string getRuntime() const;
    bool runtimeIsSet() const;
    void unsetruntime();
    void setRuntime(const std::string& value);

    /// <summary>
    /// 模板使用场景
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 模板参数
    /// </summary>

    std::string getParams() const;
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const std::string& value);

    /// <summary>
    /// 模板镜像文件（base64编码）
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 模板部署次数
    /// </summary>

    int64_t getDeployCount() const;
    bool deployCountIsSet() const;
    void unsetdeployCount();
    void setDeployCount(int64_t value);

    /// <summary>
    /// 模板版本
    /// </summary>

    int64_t getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(int64_t value);

    /// <summary>
    /// 模板指南
    /// </summary>

    std::string getTemplateGuide() const;
    bool templateGuideIsSet() const;
    void unsettemplateGuide();
    void setTemplateGuide(const std::string& value);

    /// <summary>
    /// 模板创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 模板更新时间
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// 模板资源
    /// </summary>

    std::vector<AppTemplateResourceDetail>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<AppTemplateResourceDetail>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string runtime_;
    bool runtimeIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string params_;
    bool paramsIsSet_;
    std::string image_;
    bool imageIsSet_;
    int64_t deployCount_;
    bool deployCountIsSet_;
    int64_t version_;
    bool versionIsSet_;
    std::string templateGuide_;
    bool templateGuideIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    std::vector<AppTemplateResourceDetail> resources_;
    bool resourcesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowAppTemplateResponse_H_
