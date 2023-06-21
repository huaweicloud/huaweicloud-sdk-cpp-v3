
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ChangeEwProtectStatusResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ChangeEwProtectStatusResponse_H_

#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/SuccessRsp_data.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ChangeEwProtectStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ChangeEwProtectStatusResponse();
    virtual ~ChangeEwProtectStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ChangeEwProtectStatusResponse members

    /// <summary>
    /// 
    /// </summary>

    SuccessRsp_data getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const SuccessRsp_data& value);

    /// <summary>
    /// trace id
    /// </summary>

    std::string getTraceId() const;
    bool traceIdIsSet() const;
    void unsettraceId();
    void setTraceId(const std::string& value);


protected:
    SuccessRsp_data data_;
    bool dataIsSet_;
    std::string traceId_;
    bool traceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ChangeEwProtectStatusResponse_H_
