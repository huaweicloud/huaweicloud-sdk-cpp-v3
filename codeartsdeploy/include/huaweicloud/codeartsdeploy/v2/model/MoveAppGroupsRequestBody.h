
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_MoveAppGroupsRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_MoveAppGroupsRequestBody_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  MoveAppGroupsRequestBody
    : public ModelBase
{
public:
    MoveAppGroupsRequestBody();
    virtual ~MoveAppGroupsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MoveAppGroupsRequestBody members

    /// <summary>
    /// 分组id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 移动方向，1为上移，-1为下移
    /// </summary>

    int32_t getMovement() const;
    bool movementIsSet() const;
    void unsetmovement();
    void setMovement(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t movement_;
    bool movementIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_MoveAppGroupsRequestBody_H_
