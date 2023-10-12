
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateSwitchRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateSwitchRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateSwitchRequest
    : public ModelBase
{
public:
    UpdateSwitchRequest();
    virtual ~UpdateSwitchRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSwitchRequest members

    /// <summary>
    /// 开关参数
    /// </summary>

    std::string getLogConvergeSwitch() const;
    bool logConvergeSwitchIsSet() const;
    void unsetlogConvergeSwitch();
    void setLogConvergeSwitch(const std::string& value);

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;utf8。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);


protected:
    std::string logConvergeSwitch_;
    bool logConvergeSwitchIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateSwitchRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateSwitchRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateSwitchRequest_H_
