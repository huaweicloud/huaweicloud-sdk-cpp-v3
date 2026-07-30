
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowsOverviewRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowsOverviewRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowWorkflowsOverviewRequest
    : public ModelBase
{
public:
    ShowWorkflowsOverviewRequest();
    virtual ~ShowWorkflowsOverviewRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWorkflowsOverviewRequest members

    /// <summary>
    /// 工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc)未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// 过滤方式。可选值如下： - equal表示精确匹配。 - contain表示模糊匹配。  具体过滤的字段，由各个接口额外定义参数。例如Workflow支持按照名称（name）进行过滤，则相应的过滤字段为name。name&#x3D;workflow&amp;search_type&#x3D;contain表示查询名称中含有Workflow字样的所有工作流。
    /// </summary>

    std::string getSearchType() const;
    bool searchTypeIsSet() const;
    void unsetsearchType();
    void setSearchType(const std::string& value);

    /// <summary>
    /// 工作流名称。填写1-64位，仅包含英文、数字、下划线（_）和中划线（-），并且以英文开头的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 工作流描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string searchType_;
    bool searchTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowWorkflowsOverviewRequest& dereference_from_shared_ptr(std::shared_ptr<ShowWorkflowsOverviewRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowsOverviewRequest_H_
