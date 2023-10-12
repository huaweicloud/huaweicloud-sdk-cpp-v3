
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_AddMembersReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_AddMembersReq_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 备份共享目标用户的项目id。
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  AddMembersReq
    : public ModelBase
{
public:
    AddMembersReq();
    virtual ~AddMembersReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddMembersReq members

    /// <summary>
    /// 列表，待添加备份共享成员的project_id。
    /// </summary>

    std::vector<std::string>& getMembers();
    bool membersIsSet() const;
    void unsetmembers();
    void setMembers(const std::vector<std::string>& value);


protected:
    std::vector<std::string> members_;
    bool membersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_AddMembersReq_H_
