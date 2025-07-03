
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowPrecheckResultResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowPrecheckResultResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/DBUpgradePrecheck.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowPrecheckResultResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPrecheckResultResponse();
    virtual ~ShowPrecheckResultResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPrecheckResultResponse members

    /// <summary>
    /// 检查是否通过，0代表通过，1代表未通过
    /// </summary>

    int32_t getResultCode() const;
    bool resultCodeIsSet() const;
    void unsetresultCode();
    void setResultCode(int32_t value);

    /// <summary>
    /// 检查状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 检查结果更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 是否展示数据库检查结果
    /// </summary>

    bool isDisplay() const;
    bool displayIsSet() const;
    void unsetdisplay();
    void setDisplay(bool value);

    /// <summary>
    /// 实例关联关系检查失败项
    /// </summary>

    std::vector<std::string>& getInstanceStatusCheckList();
    bool instanceStatusCheckListIsSet() const;
    void unsetinstanceStatusCheckList();
    void setInstanceStatusCheckList(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    DBUpgradePrecheck getDbUpgradePrecheck() const;
    bool dbUpgradePrecheckIsSet() const;
    void unsetdbUpgradePrecheck();
    void setDbUpgradePrecheck(const DBUpgradePrecheck& value);

    /// <summary>
    /// 检查结果下载链接
    /// </summary>

    std::string getDownloadLink() const;
    bool downloadLinkIsSet() const;
    void unsetdownloadLink();
    void setDownloadLink(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    int32_t resultCode_;
    bool resultCodeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    bool display_;
    bool displayIsSet_;
    std::vector<std::string> instanceStatusCheckList_;
    bool instanceStatusCheckListIsSet_;
    DBUpgradePrecheck dbUpgradePrecheck_;
    bool dbUpgradePrecheckIsSet_;
    std::string downloadLink_;
    bool downloadLinkIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowPrecheckResultResponse_H_
