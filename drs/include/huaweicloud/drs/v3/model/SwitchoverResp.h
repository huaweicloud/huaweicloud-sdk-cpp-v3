
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_SwitchoverResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_SwitchoverResp_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/EndpointVO.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 主备倒换响应体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  SwitchoverResp
    : public ModelBase
{
public:
    SwitchoverResp();
    virtual ~SwitchoverResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchoverResp members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 更新时间，格式yyyy-MM-dd&#39;T&#39;HH:mm:ss&#39;Z&#39;
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    EndpointVO getSourceDb() const;
    bool sourceDbIsSet() const;
    void unsetsourceDb();
    void setSourceDb(const EndpointVO& value);

    /// <summary>
    /// 
    /// </summary>

    EndpointVO getTargetDb() const;
    bool targetDbIsSet() const;
    void unsettargetDb();
    void setTargetDb(const EndpointVO& value);

    /// <summary>
    /// 任务方向。 - up 入云 灾备场景时对应本云为备 - down 出云 灾备场景时对应本云为主 - non-dbs 自建
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// 目标库是否只读。
    /// </summary>

    bool isIsTargetReadonly() const;
    bool isTargetReadonlyIsSet() const;
    void unsetisTargetReadonly();
    void setIsTargetReadonly(bool value);

    /// <summary>
    /// 错误信息。
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);

    /// <summary>
    /// 错误码。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    EndpointVO sourceDb_;
    bool sourceDbIsSet_;
    EndpointVO targetDb_;
    bool targetDbIsSet_;
    std::string jobDirection_;
    bool jobDirectionIsSet_;
    bool isTargetReadonly_;
    bool isTargetReadonlyIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_SwitchoverResp_H_
