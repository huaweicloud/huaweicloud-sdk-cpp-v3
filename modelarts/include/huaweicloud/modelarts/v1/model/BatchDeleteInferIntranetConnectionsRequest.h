
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteInferIntranetConnectionsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteInferIntranetConnectionsRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/IntranetConnectionDeleteRequest.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchDeleteInferIntranetConnectionsRequest
    : public ModelBase
{
public:
    BatchDeleteInferIntranetConnectionsRequest();
    virtual ~BatchDeleteInferIntranetConnectionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteInferIntranetConnectionsRequest members

    /// <summary>
    /// 
    /// </summary>

    IntranetConnectionDeleteRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const IntranetConnectionDeleteRequest& value);


protected:
    IntranetConnectionDeleteRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteInferIntranetConnectionsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteInferIntranetConnectionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteInferIntranetConnectionsRequest_H_
