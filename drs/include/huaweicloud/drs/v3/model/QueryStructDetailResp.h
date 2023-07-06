
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryStructDetailResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryStructDetailResp_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/QueryFlowCompareDataResp.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 灾备初始化对象详情
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryStructDetailResp
    : public ModelBase
{
public:
    QueryStructDetailResp();
    virtual ~QueryStructDetailResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QueryStructDetailResp members

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

    QueryFlowCompareDataResp getStructDetail() const;
    bool structDetailIsSet() const;
    void unsetstructDetail();
    void setStructDetail(const QueryFlowCompareDataResp& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;
    QueryFlowCompareDataResp structDetail_;
    bool structDetailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryStructDetailResp_H_
