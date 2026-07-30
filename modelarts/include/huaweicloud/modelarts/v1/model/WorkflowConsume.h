
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowConsume_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowConsume_H_


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
/// workflow consume struct
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowConsume
    : public ModelBase
{
public:
    WorkflowConsume();
    virtual ~WorkflowConsume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowConsume members

    /// <summary>
    /// 付费工作流计费周期。
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 付费工作流可使用的时间值。
    /// </summary>

    int64_t getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(int64_t value);


protected:
    std::string period_;
    bool periodIsSet_;
    int64_t value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowConsume_H_
