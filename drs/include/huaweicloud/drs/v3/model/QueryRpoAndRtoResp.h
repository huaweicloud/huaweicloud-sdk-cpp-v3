
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryRpoAndRtoResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryRpoAndRtoResp_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v3/model/RpoAndRtoInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// RPO和RTO信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryRpoAndRtoResp
    : public ModelBase
{
public:
    QueryRpoAndRtoResp();
    virtual ~QueryRpoAndRtoResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryRpoAndRtoResp members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RpoAndRtoInfo getRpoInfo() const;
    bool rpoInfoIsSet() const;
    void unsetrpoInfo();
    void setRpoInfo(const RpoAndRtoInfo& value);

    /// <summary>
    /// 
    /// </summary>

    RpoAndRtoInfo getRtoInfo() const;
    bool rtoInfoIsSet() const;
    void unsetrtoInfo();
    void setRtoInfo(const RpoAndRtoInfo& value);

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 错误信息
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    RpoAndRtoInfo rpoInfo_;
    bool rpoInfoIsSet_;
    RpoAndRtoInfo rtoInfo_;
    bool rtoInfoIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryRpoAndRtoResp_H_
