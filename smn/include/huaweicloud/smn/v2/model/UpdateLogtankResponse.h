
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateLogtankResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateLogtankResponse_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/LogtankItem.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  UpdateLogtankResponse
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
    /// 请求的唯一标识。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LogtankItem getLogtank() const;
    bool logtankIsSet() const;
    void unsetlogtank();
    void setLogtank(const LogtankItem& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    LogtankItem logtank_;
    bool logtankIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateLogtankResponse_H_
