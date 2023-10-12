
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdatePostgresqlParameterValueResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdatePostgresqlParameterValueResponse_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  UpdatePostgresqlParameterValueResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdatePostgresqlParameterValueResponse();
    virtual ~UpdatePostgresqlParameterValueResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePostgresqlParameterValueResponse members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 实例是否需要重启。 - “true”需要重启。 - “false”不需要重启。
    /// </summary>

    bool isRestartRequired() const;
    bool restartRequiredIsSet() const;
    void unsetrestartRequired();
    void setRestartRequired(bool value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    bool restartRequired_;
    bool restartRequiredIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdatePostgresqlParameterValueResponse_H_
