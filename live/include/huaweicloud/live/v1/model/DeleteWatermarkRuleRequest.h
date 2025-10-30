
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_DeleteWatermarkRuleRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_DeleteWatermarkRuleRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  DeleteWatermarkRuleRequest
    : public ModelBase
{
public:
    DeleteWatermarkRuleRequest();
    virtual ~DeleteWatermarkRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteWatermarkRuleRequest members

    /// <summary>
    /// 规则ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteWatermarkRuleRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteWatermarkRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_DeleteWatermarkRuleRequest_H_
