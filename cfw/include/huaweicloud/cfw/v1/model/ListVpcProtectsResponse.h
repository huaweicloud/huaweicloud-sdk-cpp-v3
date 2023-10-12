
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListVpcProtectsResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListVpcProtectsResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/VPCProtectsVo.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  ListVpcProtectsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVpcProtectsResponse();
    virtual ~ListVpcProtectsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVpcProtectsResponse members

    /// <summary>
    /// 调用链id
    /// </summary>

    std::string getTraceId() const;
    bool traceIdIsSet() const;
    void unsettraceId();
    void setTraceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VPCProtectsVo getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const VPCProtectsVo& value);


protected:
    std::string traceId_;
    bool traceIdIsSet_;
    VPCProtectsVo data_;
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

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListVpcProtectsResponse_H_
