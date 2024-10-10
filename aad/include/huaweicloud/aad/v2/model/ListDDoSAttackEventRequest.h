
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSAttackEventRequest_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSAttackEventRequest_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/aad/v2/model/ListDDoSAttackEventRequestBody.h>

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
class HUAWEICLOUD_AAD_V2_EXPORT  ListDDoSAttackEventRequest
    : public ModelBase
{
public:
    ListDDoSAttackEventRequest();
    virtual ~ListDDoSAttackEventRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDDoSAttackEventRequest members

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListDDoSAttackEventRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListDDoSAttackEventRequestBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    ListDDoSAttackEventRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDDoSAttackEventRequest& dereference_from_shared_ptr(std::shared_ptr<ListDDoSAttackEventRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListDDoSAttackEventRequest_H_
