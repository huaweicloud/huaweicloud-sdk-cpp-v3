
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_TaskType_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_TaskType_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
class HUAWEICLOUD_CCE_V3_EXPORT  TaskType
: public ModelBase
{
public:
    TaskType();
    virtual ~TaskType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eTaskType 
    {
        TaskType_Cluster,
        TaskType_PreCheck,
        TaskType_Rollback,
        TaskType_Snapshot,
        TaskType_PostCheck,
    };

    eTaskType getValue() const;
    void setValue(eTaskType const value);

protected:
    eTaskType value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_TaskType_H_
