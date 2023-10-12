
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_DeleteTrackerRequest_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_DeleteTrackerRequest_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  DeleteTrackerRequest
    : public ModelBase
{
public:
    DeleteTrackerRequest();
    virtual ~DeleteTrackerRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTrackerRequest members

    /// <summary>
    /// 标识追踪器名称。 在不传入该字段的情况下，将删除当前租户所有的数据类追踪器。
    /// </summary>

    std::string getTrackerName() const;
    bool trackerNameIsSet() const;
    void unsettrackerName();
    void setTrackerName(const std::string& value);

    /// <summary>
    /// 标识追踪器类型。 默认值为\&quot;data\&quot;。传入\&quot;system\&quot;时，配合tracker_name参数可删除管理类追踪器。
    /// </summary>

    std::string getTrackerType() const;
    bool trackerTypeIsSet() const;
    void unsettrackerType();
    void setTrackerType(const std::string& value);


protected:
    std::string trackerName_;
    bool trackerNameIsSet_;
    std::string trackerType_;
    bool trackerTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTrackerRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTrackerRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_DeleteTrackerRequest_H_
