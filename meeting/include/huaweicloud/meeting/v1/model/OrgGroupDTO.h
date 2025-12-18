
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_OrgGroupDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_OrgGroupDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 媒体接入(包括SBC和MCU)分组信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  OrgGroupDTO
    : public ModelBase
{
public:
    OrgGroupDTO();
    virtual ~OrgGroupDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OrgGroupDTO members

    /// <summary>
    /// 分组Id。
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 分组名称。
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_OrgGroupDTO_H_
