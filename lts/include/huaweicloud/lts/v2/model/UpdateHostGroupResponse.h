
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateHostGroupResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateHostGroupResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/HostGroupTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateHostGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateHostGroupResponse();
    virtual ~UpdateHostGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateHostGroupResponse members

    /// <summary>
    /// 主机组ID
    /// </summary>

    std::string getHostGroupId() const;
    bool hostGroupIdIsSet() const;
    void unsethostGroupId();
    void setHostGroupId(const std::string& value);

    /// <summary>
    /// 主机组名称
    /// </summary>

    std::string getHostGroupName() const;
    bool hostGroupNameIsSet() const;
    void unsethostGroupName();
    void setHostGroupName(const std::string& value);

    /// <summary>
    /// 主机组类型。linux：linux类型，windows：windows类型
    /// </summary>

    std::string getHostGroupType() const;
    bool hostGroupTypeIsSet() const;
    void unsethostGroupType();
    void setHostGroupType(const std::string& value);

    /// <summary>
    /// 主机ID列表
    /// </summary>

    std::vector<std::string>& getHostIdList();
    bool hostIdListIsSet() const;
    void unsethostIdList();
    void setHostIdList(const std::vector<std::string>& value);

    /// <summary>
    /// 标签信息
    /// </summary>

    std::vector<HostGroupTag>& getHostGroupTag();
    bool hostGroupTagIsSet() const;
    void unsethostGroupTag();
    void setHostGroupTag(const std::vector<HostGroupTag>& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 更新时间
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);


protected:
    std::string hostGroupId_;
    bool hostGroupIdIsSet_;
    std::string hostGroupName_;
    bool hostGroupNameIsSet_;
    std::string hostGroupType_;
    bool hostGroupTypeIsSet_;
    std::vector<std::string> hostIdList_;
    bool hostIdListIsSet_;
    std::vector<HostGroupTag> hostGroupTag_;
    bool hostGroupTagIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateHostGroupResponse_H_
