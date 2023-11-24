
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowTdeStatusResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowTdeStatusResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ShowTdeStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTdeStatusResponse();
    virtual ~ShowTdeStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTdeStatusResponse members

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// TDE状态
    /// </summary>

    std::string getTdeStatus() const;
    bool tdeStatusIsSet() const;
    void unsettdeStatus();
    void setTdeStatus(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string tdeStatus_;
    bool tdeStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowTdeStatusResponse_H_