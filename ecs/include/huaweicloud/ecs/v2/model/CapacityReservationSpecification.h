
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_CapacityReservationSpecification_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_CapacityReservationSpecification_H_


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
class HUAWEICLOUD_ECS_V2_EXPORT  CapacityReservationSpecification
    : public ModelBase
{
public:
    CapacityReservationSpecification();
    virtual ~CapacityReservationSpecification();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CapacityReservationSpecification members

    /// <summary>
    /// 目标容量预留ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例启动的私有池容量选项
    /// </summary>

    std::string getPreference() const;
    bool preferenceIsSet() const;
    void unsetpreference();
    void setPreference(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string preference_;
    bool preferenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_CapacityReservationSpecification_H_
