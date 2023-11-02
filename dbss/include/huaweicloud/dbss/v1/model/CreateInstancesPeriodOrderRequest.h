
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateInstancesPeriodOrderRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateInstancesPeriodOrderRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/CreateInstancePeriodRequest.h>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  CreateInstancesPeriodOrderRequest
    : public ModelBase
{
public:
    CreateInstancesPeriodOrderRequest();
    virtual ~CreateInstancesPeriodOrderRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInstancesPeriodOrderRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateInstancePeriodRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateInstancePeriodRequest& value);


protected:
    CreateInstancePeriodRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateInstancesPeriodOrderRequest& dereference_from_shared_ptr(std::shared_ptr<CreateInstancesPeriodOrderRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateInstancesPeriodOrderRequest_H_
