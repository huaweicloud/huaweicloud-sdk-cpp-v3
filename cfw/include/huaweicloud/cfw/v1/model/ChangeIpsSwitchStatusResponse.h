
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ChangeIpsSwitchStatusResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ChangeIpsSwitchStatusResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/CommonResponseDTO_data.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  ChangeIpsSwitchStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ChangeIpsSwitchStatusResponse();
    virtual ~ChangeIpsSwitchStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeIpsSwitchStatusResponse members

    /// <summary>
    /// trace_id
    /// </summary>

    std::string getTraceId() const;
    bool traceIdIsSet() const;
    void unsettraceId();
    void setTraceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CommonResponseDTO_data getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const CommonResponseDTO_data& value);


protected:
    std::string traceId_;
    bool traceIdIsSet_;
    CommonResponseDTO_data data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ChangeIpsSwitchStatusResponse_H_
