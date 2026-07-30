
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_DeleteAssociatedResourceRuleRequest_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_DeleteAssociatedResourceRuleRequest_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  DeleteAssociatedResourceRuleRequest
    : public ModelBase
{
public:
    DeleteAssociatedResourceRuleRequest();
    virtual ~DeleteAssociatedResourceRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAssociatedResourceRuleRequest members

    /// <summary>
    /// 规则的配置名称。
    /// </summary>

    std::string getSettingName() const;
    bool settingNameIsSet() const;
    void unsetsettingName();
    void setSettingName(const std::string& value);

    /// <summary>
    /// 要关闭的规则所在的region集合。
    /// </summary>

    std::vector<std::string>& getRegionId();
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::vector<std::string>& value);


protected:
    std::string settingName_;
    bool settingNameIsSet_;
    std::vector<std::string> regionId_;
    bool regionIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteAssociatedResourceRuleRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteAssociatedResourceRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_DeleteAssociatedResourceRuleRequest_H_
