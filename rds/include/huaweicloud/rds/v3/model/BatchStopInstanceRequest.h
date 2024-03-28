
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchStopInstanceRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchStopInstanceRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/BatchShutdownInsReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  BatchStopInstanceRequest
    : public ModelBase
{
public:
    BatchStopInstanceRequest();
    virtual ~BatchStopInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchStopInstanceRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchShutdownInsReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchShutdownInsReq& value);


protected:
    BatchShutdownInsReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchStopInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<BatchStopInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchStopInstanceRequest_H_
