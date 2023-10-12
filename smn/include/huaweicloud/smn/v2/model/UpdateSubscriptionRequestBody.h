
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateSubscriptionRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateSubscriptionRequestBody_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  UpdateSubscriptionRequestBody
    : public ModelBase
{
public:
    UpdateSubscriptionRequestBody();
    virtual ~UpdateSubscriptionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSubscriptionRequestBody members

    /// <summary>
    /// 订阅者备注。订阅者备注的最大长度为128byte。
    /// </summary>

    std::string getRemark() const;
    bool remarkIsSet() const;
    void unsetremark();
    void setRemark(const std::string& value);


protected:
    std::string remark_;
    bool remarkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateSubscriptionRequestBody_H_
