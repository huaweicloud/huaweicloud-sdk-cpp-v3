
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowsRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListWorkflowsRequest
    : public ModelBase
{
public:
    ListWorkflowsRequest();
    virtual ~ListWorkflowsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWorkflowsRequest members

    /// <summary>
    /// 工作流名称。
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

    /// <summary>
    /// 工作流状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 工作流标签。
    /// </summary>

    std::string getLabels() const;
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::string& value);

    /// <summary>
    /// 工作流模板ID。
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 分页参数limit，表示单次查询的条目数上限。假如要查询20~29条记录，offset为20，limit为10。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 分页参数offset，表示单次查询的条目偏移数量。假如要查询20~29条记录，offset为20，limit为10。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 排序依据字段，例如sort_by&#x3D;create_time，则表示以条目的创建时间进行排序。
    /// </summary>

    std::string getSortBy() const;
    bool sortByIsSet() const;
    void unsetsortBy();
    void setSortBy(const std::string& value);

    /// <summary>
    /// 过滤方式。可选值如下： - equal表示精确匹配。 - contain表示模糊匹配。  具体过滤的字段，由各个接口额外定义参数。例如Workflow支持按照名称（name）进行过滤，则相应的过滤字段为name。name&#x3D;workflow&amp;search_type&#x3D;contain表示查询名称中含有Workflow字样的所有工作流。
    /// </summary>

    std::string getSearchType() const;
    bool searchTypeIsSet() const;
    void unsetsearchType();
    void setSearchType(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string labels_;
    bool labelsIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string sortBy_;
    bool sortByIsSet_;
    std::string searchType_;
    bool searchTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListWorkflowsRequest& dereference_from_shared_ptr(std::shared_ptr<ListWorkflowsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkflowsRequest_H_
