
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryStructProcessResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryStructProcessResp_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v3/model/StructProcessResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询灾备初始化进度
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryStructProcessResp
    : public ModelBase
{
public:
    QueryStructProcessResp();
    virtual ~QueryStructProcessResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryStructProcessResp members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

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

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    StructProcessResp getStructProcess() const;
    bool structProcessIsSet() const;
    void unsetstructProcess();
    void setStructProcess(const StructProcessResp& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;
    StructProcessResp structProcess_;
    bool structProcessIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryStructProcessResp_H_
