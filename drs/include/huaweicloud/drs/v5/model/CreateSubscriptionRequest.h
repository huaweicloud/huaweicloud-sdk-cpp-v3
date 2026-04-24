
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_CreateSubscriptionRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_CreateSubscriptionRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/SingleCreateSubscriptionReq.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  CreateSubscriptionRequest
    : public ModelBase
{
public:
    CreateSubscriptionRequest();
    virtual ~CreateSubscriptionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSubscriptionRequest members

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SingleCreateSubscriptionReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SingleCreateSubscriptionReq& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    SingleCreateSubscriptionReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateSubscriptionRequest& dereference_from_shared_ptr(std::shared_ptr<CreateSubscriptionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_CreateSubscriptionRequest_H_
