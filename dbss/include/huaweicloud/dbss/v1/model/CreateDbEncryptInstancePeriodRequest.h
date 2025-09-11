
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateDbEncryptInstancePeriodRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateDbEncryptInstancePeriodRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/ChargeOrderDbssNew.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  CreateDbEncryptInstancePeriodRequest
    : public ModelBase
{
public:
    CreateDbEncryptInstancePeriodRequest();
    virtual ~CreateDbEncryptInstancePeriodRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDbEncryptInstancePeriodRequest members

    /// <summary>
    /// 
    /// </summary>

    ChargeOrderDbssNew getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ChargeOrderDbssNew& value);


protected:
    ChargeOrderDbssNew body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateDbEncryptInstancePeriodRequest& dereference_from_shared_ptr(std::shared_ptr<CreateDbEncryptInstancePeriodRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateDbEncryptInstancePeriodRequest_H_
