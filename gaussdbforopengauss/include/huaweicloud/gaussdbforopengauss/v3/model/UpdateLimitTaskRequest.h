
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpdateLimitTaskRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpdateLimitTaskRequest_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateLimitTaskRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  UpdateLimitTaskRequest
    : public ModelBase
{
public:
    UpdateLimitTaskRequest();
    virtual ~UpdateLimitTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLimitTaskRequest members

    /// <summary>
    /// 限流任务id。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateLimitTaskRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateLimitTaskRequestBody& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    UpdateLimitTaskRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateLimitTaskRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateLimitTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpdateLimitTaskRequest_H_
