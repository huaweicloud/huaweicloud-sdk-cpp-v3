
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowMetricPair_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowMetricPair_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// workflow metric pair
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowMetricPair
    : public ModelBase
{
public:
    WorkflowMetricPair();
    virtual ~WorkflowMetricPair();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowMetricPair members

    /// <summary>
    /// 度量信息metric的key。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 度量信息metric的值。
    /// </summary>

    Object getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const Object& value);


protected:
    std::string key_;
    bool keyIsSet_;
    Object value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowMetricPair_H_
