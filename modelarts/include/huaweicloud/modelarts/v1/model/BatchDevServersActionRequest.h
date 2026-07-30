
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDevServersActionRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDevServersActionRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/DevServerBatchRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchDevServersActionRequest
    : public ModelBase
{
public:
    BatchDevServersActionRequest();
    virtual ~BatchDevServersActionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDevServersActionRequest members

    /// <summary>
    /// 
    /// </summary>

    DevServerBatchRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DevServerBatchRequest& value);


protected:
    DevServerBatchRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDevServersActionRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDevServersActionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDevServersActionRequest_H_
