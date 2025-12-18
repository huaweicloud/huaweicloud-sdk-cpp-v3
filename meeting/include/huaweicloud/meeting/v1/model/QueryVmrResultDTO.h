
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryVmrResultDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryVmrResultDTO_H_


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
/// 用户查询的云会议室或者个人会议ID详情。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QueryVmrResultDTO
    : public ModelBase
{
public:
    QueryVmrResultDTO();
    virtual ~QueryVmrResultDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryVmrResultDTO members

    /// <summary>
    /// 云会议室的ID。 &gt; 对应[[创建会议](https://support.huaweicloud.com/api-meeting/meeting_21_0014.html)](tag:hws)[[创建会议](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0014.html)](tag:hk)接口中的vmrID。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云会议室的固定会议ID或者个人会议ID。 &gt; 对应[[创建会议](https://support.huaweicloud.com/api-meeting/meeting_21_0014.html)](tag:hws)[[创建会议](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0014.html)](tag:hk)接口中的vmrConferenceID。 
    /// </summary>

    std::string getVmrId() const;
    bool vmrIdIsSet() const;
    void unsetvmrId();
    void setVmrId(const std::string& value);

    /// <summary>
    /// 云会议室名称。
    /// </summary>

    std::string getVmrName() const;
    bool vmrNameIsSet() const;
    void unsetvmrName();
    void setVmrName(const std::string& value);

    /// <summary>
    /// 来宾密码。
    /// </summary>

    std::string getGustPwd() const;
    bool gustPwdIsSet() const;
    void unsetgustPwd();
    void setGustPwd(const std::string& value);

    /// <summary>
    /// 来宾与会链接。
    /// </summary>

    std::string getGustJoinUrl() const;
    bool gustJoinUrlIsSet() const;
    void unsetgustJoinUrl();
    void setGustJoinUrl(const std::string& value);

    /// <summary>
    /// 主持人密码。
    /// </summary>

    std::string getChairPwd() const;
    bool chairPwdIsSet() const;
    void unsetchairPwd();
    void setChairPwd(const std::string& value);

    /// <summary>
    /// 主持人与会链接。
    /// </summary>

    std::string getChairJoinUrl() const;
    bool chairJoinUrlIsSet() const;
    void unsetchairJoinUrl();
    void setChairJoinUrl(const std::string& value);

    /// <summary>
    /// 允许来宾先入会。
    /// </summary>

    bool isAllowGustFirst() const;
    bool allowGustFirstIsSet() const;
    void unsetallowGustFirst();
    void setAllowGustFirst(bool value);

    /// <summary>
    /// 云会议室被使用后是否通知会议室所有者。
    /// </summary>

    bool isGustFirstNotice() const;
    bool gustFirstNoticeIsSet() const;
    void unsetgustFirstNotice();
    void setGustFirstNotice(bool value);

    /// <summary>
    /// VMR模式。 * 0: 个人会议ID * 1: 云会议室 * 2: 网络研讨会 
    /// </summary>

    int32_t getVmrMode() const;
    bool vmrModeIsSet() const;
    void unsetvmrMode();
    void setVmrMode(int32_t value);

    /// <summary>
    /// 云会议室套餐包的id，仅云会议室返回。
    /// </summary>

    std::string getVmrPkgId() const;
    bool vmrPkgIdIsSet() const;
    void unsetvmrPkgId();
    void setVmrPkgId(const std::string& value);

    /// <summary>
    /// 云会议室套餐包的名称，仅云会议室返回。
    /// </summary>

    std::string getVmrPkgName() const;
    bool vmrPkgNameIsSet() const;
    void unsetvmrPkgName();
    void setVmrPkgName(const std::string& value);

    /// <summary>
    /// 云会议室套餐包的会议并发方数，仅云会议室返回。
    /// </summary>

    int32_t getVmrPkgParties() const;
    bool vmrPkgPartiesIsSet() const;
    void unsetvmrPkgParties();
    void setVmrPkgParties(int32_t value);

    /// <summary>
    /// 云会议室状态。 * 0：正常 * 1：停用 * 2：未分配 
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string vmrId_;
    bool vmrIdIsSet_;
    std::string vmrName_;
    bool vmrNameIsSet_;
    std::string gustPwd_;
    bool gustPwdIsSet_;
    std::string gustJoinUrl_;
    bool gustJoinUrlIsSet_;
    std::string chairPwd_;
    bool chairPwdIsSet_;
    std::string chairJoinUrl_;
    bool chairJoinUrlIsSet_;
    bool allowGustFirst_;
    bool allowGustFirstIsSet_;
    bool gustFirstNotice_;
    bool gustFirstNoticeIsSet_;
    int32_t vmrMode_;
    bool vmrModeIsSet_;
    std::string vmrPkgId_;
    bool vmrPkgIdIsSet_;
    std::string vmrPkgName_;
    bool vmrPkgNameIsSet_;
    int32_t vmrPkgParties_;
    bool vmrPkgPartiesIsSet_;
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryVmrResultDTO_H_
