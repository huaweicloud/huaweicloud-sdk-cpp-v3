
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DeleteRedisDisabledCommandsRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DeleteRedisDisabledCommandsRequest_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteRedisDisabledCommandsRequestBody.h>

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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  DeleteRedisDisabledCommandsRequest
    : public ModelBase
{
public:
    DeleteRedisDisabledCommandsRequest();
    virtual ~DeleteRedisDisabledCommandsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteRedisDisabledCommandsRequest members

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

    DeleteRedisDisabledCommandsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteRedisDisabledCommandsRequestBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    DeleteRedisDisabledCommandsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteRedisDisabledCommandsRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteRedisDisabledCommandsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DeleteRedisDisabledCommandsRequest_H_
