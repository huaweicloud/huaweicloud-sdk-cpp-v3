
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_UpdateInstanceNameRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_UpdateInstanceNameRequest_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateInstanceNameRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  UpdateInstanceNameRequest
    : public ModelBase
{
public:
    UpdateInstanceNameRequest();
    virtual ~UpdateInstanceNameRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateInstanceNameRequest members

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

    UpdateInstanceNameRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateInstanceNameRequestBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    UpdateInstanceNameRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateInstanceNameRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateInstanceNameRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_UpdateInstanceNameRequest_H_
