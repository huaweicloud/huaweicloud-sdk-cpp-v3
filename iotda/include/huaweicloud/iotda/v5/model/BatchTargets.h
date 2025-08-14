
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BatchTargets_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BatchTargets_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量操作的目标集合
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  BatchTargets
    : public ModelBase
{
public:
    BatchTargets();
    virtual ~BatchTargets();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchTargets members

    /// <summary>
    /// 执行批量任务的目标集合，最多支持100个目标，当task_type为firmwareUpgrade，softwareUpgrade时，此处填写device_id
    /// </summary>

    std::vector<std::string>& getTargets();
    bool targetsIsSet() const;
    void unsettargets();
    void setTargets(const std::vector<std::string>& value);


protected:
    std::vector<std::string> targets_;
    bool targetsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BatchTargets_H_
