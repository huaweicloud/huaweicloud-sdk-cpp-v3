
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ScheduledEventAcceptBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ScheduledEventAcceptBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ScheduledEventAcceptBody
    : public ModelBase
{
public:
    ScheduledEventAcceptBody();
    virtual ~ScheduledEventAcceptBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScheduledEventAcceptBody members

    /// <summary>
    /// 计划执行开始时间
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

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ScheduledEventAcceptBody_H_
