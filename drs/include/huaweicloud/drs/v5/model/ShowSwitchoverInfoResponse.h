
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSwitchoverInfoResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSwitchoverInfoResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowSwitchoverInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSwitchoverInfoResponse();
    virtual ~ShowSwitchoverInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSwitchoverInfoResponse members

    /// <summary>
    /// 上次倒换完成时间点
    /// </summary>

    std::string getLastSwitchoverTime() const;
    bool lastSwitchoverTimeIsSet() const;
    void unsetlastSwitchoverTime();
    void setLastSwitchoverTime(const std::string& value);

    /// <summary>
    /// 上次倒换任务位点信息
    /// </summary>

    std::string getIncrementCheckPoint() const;
    bool incrementCheckPointIsSet() const;
    void unsetincrementCheckPoint();
    void setIncrementCheckPoint(const std::string& value);

    /// <summary>
    /// 上次倒换目标库倒换时位点
    /// </summary>

    std::string getTargetSafePoint() const;
    bool targetSafePointIsSet() const;
    void unsettargetSafePoint();
    void setTargetSafePoint(const std::string& value);


protected:
    std::string lastSwitchoverTime_;
    bool lastSwitchoverTimeIsSet_;
    std::string incrementCheckPoint_;
    bool incrementCheckPointIsSet_;
    std::string targetSafePoint_;
    bool targetSafePointIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSwitchoverInfoResponse_H_
