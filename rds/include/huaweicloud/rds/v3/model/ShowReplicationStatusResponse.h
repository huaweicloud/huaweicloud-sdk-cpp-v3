
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowReplicationStatusResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowReplicationStatusResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ShowReplicationStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowReplicationStatusResponse();
    virtual ~ShowReplicationStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowReplicationStatusResponse members

    /// <summary>
    /// 复制状态。
    /// </summary>

    std::string getReplicationStatus() const;
    bool replicationStatusIsSet() const;
    void unsetreplicationStatus();
    void setReplicationStatus(const std::string& value);

    /// <summary>
    /// 复制异常原因。
    /// </summary>

    std::string getAbnormalReason() const;
    bool abnormalReasonIsSet() const;
    void unsetabnormalReason();
    void setAbnormalReason(const std::string& value);


protected:
    std::string replicationStatus_;
    bool replicationStatusIsSet_;
    std::string abnormalReason_;
    bool abnormalReasonIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowReplicationStatusResponse_H_
