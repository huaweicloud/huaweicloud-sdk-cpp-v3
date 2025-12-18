
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModCorpDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModCorpDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/ModAdminDTO.h>
#include <string>
#include <huaweicloud/meeting/v1/model/ModCorpBasicDTO.h>
#include <vector>
#include <huaweicloud/meeting/v1/model/OrgPropertyDTO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ModCorpDTO
    : public ModelBase
{
public:
    ModCorpDTO();
    virtual ~ModCorpDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModCorpDTO members

    /// <summary>
    /// 
    /// </summary>

    ModCorpBasicDTO getBasicInfo() const;
    bool basicInfoIsSet() const;
    void unsetbasicInfo();
    void setBasicInfo(const ModCorpBasicDTO& value);

    /// <summary>
    /// 
    /// </summary>

    ModAdminDTO getAdminInfo() const;
    bool adminInfoIsSet() const;
    void unsetadminInfo();
    void setAdminInfo(const ModAdminDTO& value);

    /// <summary>
    /// 媒体接入（包括SBC和MCU）分组id，可通过[[SP管理员查询资源信息](https://support.huaweicloud.com/api-meeting/meeting_21_1537.html)](tag:hws)[[SP管理员查询资源信息](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_1537.html)](tag:hk)接口查询获取。
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 可配置项信息。
    /// </summary>

    std::vector<OrgPropertyDTO>& getPropertyInfo();
    bool propertyInfoIsSet() const;
    void unsetpropertyInfo();
    void setPropertyInfo(const std::vector<OrgPropertyDTO>& value);


protected:
    ModCorpBasicDTO basicInfo_;
    bool basicInfoIsSet_;
    ModAdminDTO adminInfo_;
    bool adminInfoIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::vector<OrgPropertyDTO> propertyInfo_;
    bool propertyInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModCorpDTO_H_
