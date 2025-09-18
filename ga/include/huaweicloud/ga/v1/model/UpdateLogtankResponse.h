
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateLogtankResponse_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateLogtankResponse_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/LogtankDetail.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  UpdateLogtankResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateLogtankResponse();
    virtual ~UpdateLogtankResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLogtankResponse members

    /// <summary>
    /// 
    /// </summary>

    LogtankDetail getLogtank() const;
    bool logtankIsSet() const;
    void unsetlogtank();
    void setLogtank(const LogtankDetail& value);

    /// <summary>
    /// 请求ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    LogtankDetail logtank_;
    bool logtankIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateLogtankResponse_H_
