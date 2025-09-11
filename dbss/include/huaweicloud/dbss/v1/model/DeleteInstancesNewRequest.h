
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_DeleteInstancesNewRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_DeleteInstancesNewRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/DeleteInstanceDemandRequest.h>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  DeleteInstancesNewRequest
    : public ModelBase
{
public:
    DeleteInstancesNewRequest();
    virtual ~DeleteInstancesNewRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteInstancesNewRequest members

    /// <summary>
    /// 
    /// </summary>

    DeleteInstanceDemandRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteInstanceDemandRequest& value);


protected:
    DeleteInstanceDemandRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteInstancesNewRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteInstancesNewRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_DeleteInstancesNewRequest_H_
