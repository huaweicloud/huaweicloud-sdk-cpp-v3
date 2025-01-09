
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateAgencyPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateAgencyPolicyRequestBody_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  UpdateAgencyPolicyRequestBody
    : public ModelBase
{
public:
    UpdateAgencyPolicyRequestBody();
    virtual ~UpdateAgencyPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAgencyPolicyRequestBody members

    /// <summary>
    /// 委托解绑的权限策略集合。
    /// </summary>

    std::vector<std::string>& getUnbindRoleNames();
    bool unbindRoleNamesIsSet() const;
    void unsetunbindRoleNames();
    void setUnbindRoleNames(const std::vector<std::string>& value);

    /// <summary>
    /// 委托绑定的权限策略集合。
    /// </summary>

    std::vector<std::string>& getBindRoleNames();
    bool bindRoleNamesIsSet() const;
    void unsetbindRoleNames();
    void setBindRoleNames(const std::vector<std::string>& value);


protected:
    std::vector<std::string> unbindRoleNames_;
    bool unbindRoleNamesIsSet_;
    std::vector<std::string> bindRoleNames_;
    bool bindRoleNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateAgencyPolicyRequestBody_H_
