
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_StartAuditInstanceRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_StartAuditInstanceRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/ServerIdBean.h>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  StartAuditInstanceRequest
    : public ModelBase
{
public:
    StartAuditInstanceRequest();
    virtual ~StartAuditInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartAuditInstanceRequest members

    /// <summary>
    /// 
    /// </summary>

    ServerIdBean getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ServerIdBean& value);


protected:
    ServerIdBean body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    StartAuditInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<StartAuditInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_StartAuditInstanceRequest_H_