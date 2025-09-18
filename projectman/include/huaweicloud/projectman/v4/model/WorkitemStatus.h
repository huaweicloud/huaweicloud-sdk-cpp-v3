
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkitemStatus_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkitemStatus_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/WorkitemStatus_status.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkitemStatus
    : public ModelBase
{
public:
    WorkitemStatus();
    virtual ~WorkitemStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkitemStatus members

    /// <summary>
    /// 工作项状态变更记录的id,每次变更产生一条新的记录id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WorkitemStatus_status getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const WorkitemStatus_status& value);


protected:
    std::string id_;
    bool idIsSet_;
    WorkitemStatus_status status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkitemStatus_H_
