
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AssignmentConfigDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AssignmentConfigDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  AssignmentConfigDto
    : public ModelBase
{
public:
    AssignmentConfigDto();
    virtual ~AssignmentConfigDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssignmentConfigDto members

    /// <summary>
    /// 应用程序是否需要分配
    /// </summary>

    bool isAssignmentRequired() const;
    bool assignmentRequiredIsSet() const;
    void unsetassignmentRequired();
    void setAssignmentRequired(bool value);


protected:
    bool assignmentRequired_;
    bool assignmentRequiredIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_AssignmentConfigDto_H_
