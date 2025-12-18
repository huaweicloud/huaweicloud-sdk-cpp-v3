
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryOrgVmrResultDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryOrgVmrResultDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/IdMarkDTO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询到的云会议室列表。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QueryOrgVmrResultDTO
    : public ModelBase
{
public:
    QueryOrgVmrResultDTO();
    virtual ~QueryOrgVmrResultDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryOrgVmrResultDTO members

    /// <summary>
    /// 云会议室的ID。 &gt; 对应[[创建会议](https://support.huaweicloud.com/api-meeting/meeting_21_0014.html)](tag:hws)[[创建会议](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0014.html)](tag:hk)接口中的vmrID。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云会议室的固定会议ID。 &gt; 对应[[创建会议](https://support.huaweicloud.com/api-meeting/meeting_21_0014.html)](tag:hws)[[创建会议](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0014.html)](tag:hk)接口中的vmrConferenceID。 
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
    /// 云会议室套餐名称。
    /// </summary>

    std::string getVmrPkgName() const;
    bool vmrPkgNameIsSet() const;
    void unsetvmrPkgName();
    void setVmrPkgName(const std::string& value);

    /// <summary>
    /// 云会议室套餐会议并发方数。
    /// </summary>

    int32_t getVmrPkgParties() const;
    bool vmrPkgPartiesIsSet() const;
    void unsetvmrPkgParties();
    void setVmrPkgParties(int32_t value);

    /// <summary>
    /// 最大观众与会方数（仅网络研讨会有效）。
    /// </summary>

    int32_t getMaxAudienceParties() const;
    bool maxAudiencePartiesIsSet() const;
    void unsetmaxAudienceParties();
    void setMaxAudienceParties(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    IdMarkDTO getMember() const;
    bool memberIsSet() const;
    void unsetmember();
    void setMember(const IdMarkDTO& value);

    /// <summary>
    /// 
    /// </summary>

    IdMarkDTO getDevice() const;
    bool deviceIsSet() const;
    void unsetdevice();
    void setDevice(const IdMarkDTO& value);

    /// <summary>
    /// 云会议室状态。 * 0：正常 * 1：冻结 * 2：未分配 
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 到期时间的时间戳，单位毫秒。
    /// </summary>

    int64_t getExpireDate() const;
    bool expireDateIsSet() const;
    void unsetexpireDate();
    void setExpireDate(int64_t value);

    /// <summary>
    /// 按次资源转商后，商用规格最大观众与会方数（仅网络研讨会有效）。
    /// </summary>

    int32_t getCommercialMaxAudienceParties() const;
    bool commercialMaxAudiencePartiesIsSet() const;
    void unsetcommercialMaxAudienceParties();
    void setCommercialMaxAudienceParties(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string vmrId_;
    bool vmrIdIsSet_;
    std::string vmrName_;
    bool vmrNameIsSet_;
    std::string vmrPkgName_;
    bool vmrPkgNameIsSet_;
    int32_t vmrPkgParties_;
    bool vmrPkgPartiesIsSet_;
    int32_t maxAudienceParties_;
    bool maxAudiencePartiesIsSet_;
    IdMarkDTO member_;
    bool memberIsSet_;
    IdMarkDTO device_;
    bool deviceIsSet_;
    int32_t status_;
    bool statusIsSet_;
    int64_t expireDate_;
    bool expireDateIsSet_;
    int32_t commercialMaxAudienceParties_;
    bool commercialMaxAudiencePartiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryOrgVmrResultDTO_H_
