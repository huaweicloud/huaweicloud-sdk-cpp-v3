
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Point_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Point_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/TaskType.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  Point
    : public ModelBase
{
public:
    Point();
    virtual ~Point();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Point members

    /// <summary>
    /// 
    /// </summary>

    TaskType getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const TaskType& value);


protected:
    TaskType taskType_;
    bool taskTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Point_H_
