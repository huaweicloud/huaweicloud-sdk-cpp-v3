
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowLabelsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowLabelsRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowWorkflowLabelsRequest
    : public ModelBase
{
public:
    ShowWorkflowLabelsRequest();
    virtual ~ShowWorkflowLabelsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWorkflowLabelsRequest members

    /// <summary>
    /// 返回的数据条目数。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 数据条目偏移量。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// instance order
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);

    /// <summary>
    /// 指定排序字段。  可选值： - user_name：IAM用户名称 - create_time：创建时间
    /// </summary>

    std::string getSortBy() const;
    bool sortByIsSet() const;
    void unsetsortBy();
    void setSortBy(const std::string& value);

    /// <summary>
    /// **参数解释**：工作流模板ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string order_;
    bool orderIsSet_;
    std::string sortBy_;
    bool sortByIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowWorkflowLabelsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowWorkflowLabelsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkflowLabelsRequest_H_
