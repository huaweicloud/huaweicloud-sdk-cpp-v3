
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWhiteBlackIpRuleRequest_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWhiteBlackIpRuleRequest_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ListWhiteBlackIpRuleRequest
    : public ModelBase
{
public:
    ListWhiteBlackIpRuleRequest();
    virtual ~ListWhiteBlackIpRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWhiteBlackIpRuleRequest members

    /// <summary>
    /// white-白名单，black-黑名单
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// instanceId
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListWhiteBlackIpRuleRequest& dereference_from_shared_ptr(std::shared_ptr<ListWhiteBlackIpRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWhiteBlackIpRuleRequest_H_
