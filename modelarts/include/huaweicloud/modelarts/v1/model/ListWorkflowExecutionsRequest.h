
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowExecutionsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowExecutionsRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListWorkflowExecutionsRequest
    : public ModelBase
{
public:
    ListWorkflowExecutionsRequest();
    virtual ~ListWorkflowExecutionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWorkflowExecutionsRequest members

    /// <summary>
    /// 工作流的ID。
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);

    /// <summary>
    /// 工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc)未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// 分页参数limit，表示单次查询的条目数上限。假如要查询20~29条记录，offset为20，limit为10。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 排序依据字段，例如sort_by&#x3D;create_time，则表示以条目的创建时间进行排序。
    /// </summary>

    std::string getSortBy() const;
    bool sortByIsSet() const;
    void unsetsortBy();
    void setSortBy(const std::string& value);

    /// <summary>
    /// 分页参数offset，表示单次查询的条目偏移数量。假如要查询20~29条记录，offset为20，limit为10。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 执行记录标签。
    /// </summary>

    std::string getLabels() const;
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::string& value);

    /// <summary>
    /// 执行记录状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 场景ID。
    /// </summary>

    std::string getSceneId() const;
    bool sceneIdIsSet() const;
    void unsetsceneId();
    void setSceneId(const std::string& value);

    /// <summary>
    /// 排序的方式。该字段必须与sort_by同时使用。 缺省值: desc 枚举值： - asc：表示升序排列， - desc：降序排列。
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);


protected:
    std::string workflowId_;
    bool workflowIdIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string sortBy_;
    bool sortByIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string labels_;
    bool labelsIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string sceneId_;
    bool sceneIdIsSet_;
    std::string order_;
    bool orderIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListWorkflowExecutionsRequest& dereference_from_shared_ptr(std::shared_ptr<ListWorkflowExecutionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowExecutionsRequest_H_
