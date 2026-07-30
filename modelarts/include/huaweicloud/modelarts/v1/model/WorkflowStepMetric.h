
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowStepMetric_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowStepMetric_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作流节点度量信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowStepMetric
    : public ModelBase
{
public:
    WorkflowStepMetric();
    virtual ~WorkflowStepMetric();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowStepMetric members

    /// <summary>
    /// 创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 度量项。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 度量标题。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 度量的类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 度量数据。
    /// </summary>

    std::map<std::string, Object>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::map<std::string, Object>& value);


protected:
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string key_;
    bool keyIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::map<std::string, Object> data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowStepMetric_H_
