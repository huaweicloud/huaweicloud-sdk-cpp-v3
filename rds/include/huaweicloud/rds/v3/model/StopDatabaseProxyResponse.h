
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_StopDatabaseProxyResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_StopDatabaseProxyResponse_H_

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
class HUAWEICLOUD_RDS_V3_EXPORT  StopDatabaseProxyResponse
    : public ModelBase, public HttpResponse
{
public:
    StopDatabaseProxyResponse();
    virtual ~StopDatabaseProxyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// StopDatabaseProxyResponse members

    /// <summary>
    /// 工作流ID
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);


protected:
    std::string workflowId_;
    bool workflowIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_StopDatabaseProxyResponse_H_
