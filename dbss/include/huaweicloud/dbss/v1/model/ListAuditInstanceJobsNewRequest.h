
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditInstanceJobsNewRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditInstanceJobsNewRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditInstanceJobsNewRequest
    : public ModelBase
{
public:
    ListAuditInstanceJobsNewRequest();
    virtual ~ListAuditInstanceJobsNewRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditInstanceJobsNewRequest members

    /// <summary>
    /// 资源ID。可在查询实例列表接口的resource_id获取。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAuditInstanceJobsNewRequest& dereference_from_shared_ptr(std::shared_ptr<ListAuditInstanceJobsNewRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditInstanceJobsNewRequest_H_
