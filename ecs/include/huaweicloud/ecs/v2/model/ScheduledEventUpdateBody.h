
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ScheduledEventUpdateBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ScheduledEventUpdateBody_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改计划事件计划执行开始时间
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ScheduledEventUpdateBody
    : public ModelBase
{
public:
    ScheduledEventUpdateBody();
    virtual ~ScheduledEventUpdateBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScheduledEventUpdateBody members

    /// <summary>
    /// 计划执行开始时间，新的开始时间必须早于not_before_deadline
    /// </summary>

    std::string getNotBefore() const;
    bool notBeforeIsSet() const;
    void unsetnotBefore();
    void setNotBefore(const std::string& value);


protected:
    std::string notBefore_;
    bool notBeforeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ScheduledEventUpdateBody_H_
