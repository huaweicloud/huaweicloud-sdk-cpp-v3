
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRestartPolicyResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRestartPolicyResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ShowRestartPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRestartPolicyResponse();
    virtual ~ShowRestartPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRestartPolicyResponse members

    /// <summary>
    /// 是否重启虚拟机。
    /// </summary>

    bool isRestartServer() const;
    bool restartServerIsSet() const;
    void unsetrestartServer();
    void setRestartServer(bool value);

    /// <summary>
    /// 重启策略。
    /// </summary>

    Object getRestartPolicy() const;
    bool restartPolicyIsSet() const;
    void unsetrestartPolicy();
    void setRestartPolicy(const Object& value);


protected:
    bool restartServer_;
    bool restartServerIsSet_;
    Object restartPolicy_;
    bool restartPolicyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRestartPolicyResponse_H_
