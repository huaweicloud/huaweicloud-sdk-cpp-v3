
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_AddSubscriptionFromSubscriptionUserRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_AddSubscriptionFromSubscriptionUserRequestBody_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_SMN_V2_EXPORT  AddSubscriptionFromSubscriptionUserRequestBody
    : public ModelBase
{
public:
    AddSubscriptionFromSubscriptionUserRequestBody();
    virtual ~AddSubscriptionFromSubscriptionUserRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddSubscriptionFromSubscriptionUserRequestBody members

    /// <summary>
    /// 订阅用户ID列表。
    /// </summary>

    std::vector<std::string>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> ids_;
    bool idsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_AddSubscriptionFromSubscriptionUserRequestBody_H_
