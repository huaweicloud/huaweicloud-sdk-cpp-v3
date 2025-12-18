
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryCorpGroupDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryCorpGroupDTO_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QueryCorpGroupDTO
    : public ModelBase
{
public:
    QueryCorpGroupDTO();
    virtual ~QueryCorpGroupDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryCorpGroupDTO members

    /// <summary>
    /// 媒体接入分组id。
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

    /// <summary>
    /// 分组类型。
    /// </summary>

    int32_t getGroupType() const;
    bool groupTypeIsSet() const;
    void unsetgroupType();
    void setGroupType(int32_t value);

    /// <summary>
    /// 分组备注信息。
    /// </summary>

    std::string getRemarks() const;
    bool remarksIsSet() const;
    void unsetremarks();
    void setRemarks(const std::string& value);

    /// <summary>
    /// 区域ID，仅服务列表类型场景必填。
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 分组状态。 - 0: 正常 - 1: 停用，服务列表类型停用后创建企业就不会再自动分配到该分组 
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    int32_t groupType_;
    bool groupTypeIsSet_;
    std::string remarks_;
    bool remarksIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryCorpGroupDTO_H_
