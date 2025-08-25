
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CapacityReservationSpecification_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CapacityReservationSpecification_H_


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
/// 扩展伸缩组容量预留配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  CapacityReservationSpecification
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
    /// 私有池id，preference为none时忽略该值
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 私有池容量选项，为 none 时表示不指定容量预留，为 targeted 时表示指定容量预留，此时 id 不能为空
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CapacityReservationSpecification_H_
