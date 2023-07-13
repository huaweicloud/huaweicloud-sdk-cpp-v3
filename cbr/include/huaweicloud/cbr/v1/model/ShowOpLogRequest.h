
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowOpLogRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowOpLogRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowOpLogRequest
    : public ModelBase
{
public:
    ShowOpLogRequest();
    virtual ~ShowOpLogRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowOpLogRequest members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getOperationLogId() const;
    bool operationLogIdIsSet() const;
    void unsetoperationLogId();
    void setOperationLogId(const std::string& value);


protected:
    std::string operationLogId_;
    bool operationLogIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowOpLogRequest& dereference_from_shared_ptr(std::shared_ptr<ShowOpLogRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowOpLogRequest_H_
