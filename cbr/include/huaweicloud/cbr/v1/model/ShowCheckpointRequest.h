
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowCheckpointRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowCheckpointRequest_H_

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
class HUAWEICLOUD_CBR_V1_EXPORT  ShowCheckpointRequest
    : public ModelBase
{
public:
    ShowCheckpointRequest();
    virtual ~ShowCheckpointRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowCheckpointRequest members

    /// <summary>
    /// 还原点ID
    /// </summary>

    std::string getCheckpointId() const;
    bool checkpointIdIsSet() const;
    void unsetcheckpointId();
    void setCheckpointId(const std::string& value);


protected:
    std::string checkpointId_;
    bool checkpointIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowCheckpointRequest& dereference_from_shared_ptr(std::shared_ptr<ShowCheckpointRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowCheckpointRequest_H_
