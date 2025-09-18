
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteMembersV4RequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteMembersV4RequestBody_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchDeleteMembersV4RequestBody
    : public ModelBase
{
public:
    BatchDeleteMembersV4RequestBody();
    virtual ~BatchDeleteMembersV4RequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteMembersV4RequestBody members

    /// <summary>
    /// 用户id
    /// </summary>

    std::vector<std::string>& getUserIds();
    bool userIdsIsSet() const;
    void unsetuserIds();
    void setUserIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> userIds_;
    bool userIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteMembersV4RequestBody_H_
