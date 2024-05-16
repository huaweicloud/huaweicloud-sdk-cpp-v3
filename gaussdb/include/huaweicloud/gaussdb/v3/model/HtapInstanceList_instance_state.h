
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapInstanceList_instance_state_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapInstanceList_instance_state_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// HTAP实例状态信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  HtapInstanceList_instance_state
    : public ModelBase
{
public:
    HtapInstanceList_instance_state();
    virtual ~HtapInstanceList_instance_state();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HtapInstanceList_instance_state members

    /// <summary>
    /// HTAP实例状态。
    /// </summary>

    std::string getInstanceStatus() const;
    bool instanceStatusIsSet() const;
    void unsetinstanceStatus();
    void setInstanceStatus(const std::string& value);

    /// <summary>
    /// HTAP实例创建失败错误码。
    /// </summary>

    std::string getCreateFailErrorCode() const;
    bool createFailErrorCodeIsSet() const;
    void unsetcreateFailErrorCode();
    void setCreateFailErrorCode(const std::string& value);

    /// <summary>
    /// HTAP实例创建失败错误信息。
    /// </summary>

    std::string getFailMessage() const;
    bool failMessageIsSet() const;
    void unsetfailMessage();
    void setFailMessage(const std::string& value);

    /// <summary>
    /// 是否需要重启更新参数。
    /// </summary>

    bool isWaitRestartForParams() const;
    bool waitRestartForParamsIsSet() const;
    void unsetwaitRestartForParams();
    void setWaitRestartForParams(bool value);


protected:
    std::string instanceStatus_;
    bool instanceStatusIsSet_;
    std::string createFailErrorCode_;
    bool createFailErrorCodeIsSet_;
    std::string failMessage_;
    bool failMessageIsSet_;
    bool waitRestartForParams_;
    bool waitRestartForParamsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapInstanceList_instance_state_H_
