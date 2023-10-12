
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_DatabaseObjectResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_DatabaseObjectResp_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 对象选择返回体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  DatabaseObjectResp
    : public ModelBase
{
public:
    DatabaseObjectResp();
    virtual ~DatabaseObjectResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatabaseObjectResp members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 选择对象任务成功标志
    /// </summary>

    bool isStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(bool value);

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
    bool status_;
    bool statusIsSet_;
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

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_DatabaseObjectResp_H_
