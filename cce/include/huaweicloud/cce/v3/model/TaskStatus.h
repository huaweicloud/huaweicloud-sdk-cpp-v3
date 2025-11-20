
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_TaskStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_TaskStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  TaskStatus
    : public ModelBase
{
public:
    TaskStatus();
    virtual ~TaskStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskStatus members

    /// <summary>
    /// **参数解释**： 任务ID，供调用者查询任务进度。获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getJobID() const;
    bool jobIDIsSet() const;
    void unsetjobID();
    void setJobID(const std::string& value);


protected:
    std::string jobID_;
    bool jobIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_TaskStatus_H_
