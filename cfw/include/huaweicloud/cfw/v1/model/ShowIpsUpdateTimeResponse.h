
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowIpsUpdateTimeResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowIpsUpdateTimeResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/IpsRuleUpdateTimeVO.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_CFW_V1_EXPORT  ShowIpsUpdateTimeResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowIpsUpdateTimeResponse();
    virtual ~ShowIpsUpdateTimeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIpsUpdateTimeResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<IpsRuleUpdateTimeVO>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<IpsRuleUpdateTimeVO>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getErrorDescription() const;
    bool errorDescriptionIsSet() const;
    void unseterrorDescription();
    void setErrorDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getFailReason() const;
    bool failReasonIsSet() const;
    void unsetfailReason();
    void setFailReason(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getTraceId() const;
    bool traceIdIsSet() const;
    void unsettraceId();
    void setTraceId(const std::string& value);


protected:
    std::vector<IpsRuleUpdateTimeVO> data_;
    bool dataIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorDescription_;
    bool errorDescriptionIsSet_;
    std::string failReason_;
    bool failReasonIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
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

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowIpsUpdateTimeResponse_H_
