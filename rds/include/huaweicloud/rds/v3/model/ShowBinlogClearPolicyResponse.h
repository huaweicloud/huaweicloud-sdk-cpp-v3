
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBinlogClearPolicyResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBinlogClearPolicyResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_RDS_V3_EXPORT  ShowBinlogClearPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBinlogClearPolicyResponse();
    virtual ~ShowBinlogClearPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBinlogClearPolicyResponse members

    /// <summary>
    /// binlog保留时长
    /// </summary>

    int32_t getBinlogRetentionHours() const;
    bool binlogRetentionHoursIsSet() const;
    void unsetbinlogRetentionHours();
    void setBinlogRetentionHours(int32_t value);


protected:
    int32_t binlogRetentionHours_;
    bool binlogRetentionHoursIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBinlogClearPolicyResponse_H_
