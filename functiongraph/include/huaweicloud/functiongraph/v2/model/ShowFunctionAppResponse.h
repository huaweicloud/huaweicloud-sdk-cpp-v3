
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowFunctionAppResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowFunctionAppResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/StackResource.h>
#include <string>
#include <huaweicloud/functiongraph/v2/model/RepoInfo.h>

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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ShowFunctionAppResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowFunctionAppResponse();
    virtual ~ShowFunctionAppResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFunctionAppResponse members

    /// <summary>
    /// 应用名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 最后修改时间
    /// </summary>

    int64_t getLastModifiedTime() const;
    bool lastModifiedTimeIsSet() const;
    void unsetlastModifiedTime();
    void setLastModifiedTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    StackResource getStackResources() const;
    bool stackResourcesIsSet() const;
    void unsetstackResources();
    void setStackResources(const StackResource& value);

    /// <summary>
    /// 应用状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 资源栈名称
    /// </summary>

    std::string getStackName() const;
    bool stackNameIsSet() const;
    void unsetstackName();
    void setStackName(const std::string& value);

    /// <summary>
    /// 资源栈id
    /// </summary>

    std::string getStackId() const;
    bool stackIdIsSet() const;
    void unsetstackId();
    void setStackId(const std::string& value);

    /// <summary>
    /// 存储库名称
    /// </summary>

    std::string getRepoName() const;
    bool repoNameIsSet() const;
    void unsetrepoName();
    void setRepoName(const std::string& value);

    /// <summary>
    /// 应用描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RepoInfo getRepo() const;
    bool repoIsSet() const;
    void unsetrepo();
    void setRepo(const RepoInfo& value);

    /// <summary>
    /// 管道id
    /// </summary>

    std::string getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 调用URL
    /// </summary>

    std::string getApigUrl() const;
    bool apigUrlIsSet() const;
    void unsetapigUrl();
    void setApigUrl(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int64_t lastModifiedTime_;
    bool lastModifiedTimeIsSet_;
    StackResource stackResources_;
    bool stackResourcesIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string stackName_;
    bool stackNameIsSet_;
    std::string stackId_;
    bool stackIdIsSet_;
    std::string repoName_;
    bool repoNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    RepoInfo repo_;
    bool repoIsSet_;
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string apigUrl_;
    bool apigUrlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowFunctionAppResponse_H_
