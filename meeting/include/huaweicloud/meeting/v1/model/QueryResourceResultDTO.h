
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryResourceResultDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryResourceResultDTO_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  QueryResourceResultDTO
    : public ModelBase
{
public:
    QueryResourceResultDTO();
    virtual ~QueryResourceResultDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryResourceResultDTO members

    /// <summary>
    /// 唯一标识若携带则以携带为准，企业内保证唯一，否则后台自动生成UUID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 资源类型。 - VMR        - 云会议室 - CONF_CALL  - 会议并发数 - HARD_1080P - 1080P硬终端 - HARD_720P  - 720P硬终端 - SOFT       - 软终端用户数 - ROOM       - 大屏软终端 - LIVE       - 直播推流 - RECORD     - 录播空间 - HARD_THIRD_PARTY - 第三方硬终端帐号 - HUAWEI_VISION -智慧屏 - IDEA_HUB   - ideahub
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 资源标识，比如资源类型为VMR，则该参数为vmrPkgId。
    /// </summary>

    std::string getTypeId() const;
    bool typeIdIsSet() const;
    void unsettypeId();
    void setTypeId(const std::string& value);

    /// <summary>
    /// 资源标识对应的回显描述,比如资源类型为VMR，则该参数为vmrPkgName。
    /// </summary>

    std::string getTypeDesc() const;
    bool typeDescIsSet() const;
    void unsettypeDesc();
    void setTypeDesc(const std::string& value);

    /// <summary>
    /// VMR模式。 - 0：个人会议ID - 1：云会议室 - 2：网络研讨会
    /// </summary>

    int32_t getVmrMode() const;
    bool vmrModeIsSet() const;
    void unsetvmrMode();
    void setVmrMode(int32_t value);

    /// <summary>
    /// 资源数量。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 到期时间,utc时间戳。
    /// </summary>

    int64_t getExpireDate() const;
    bool expireDateIsSet() const;
    void unsetexpireDate();
    void setExpireDate(int64_t value);

    /// <summary>
    /// 资源对应的订单id。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 资源状态: - 0：正常 - 1：到期 - 2：停用
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 标识资源是否可以编辑或删除。
    /// </summary>

    bool isEditable() const;
    bool editableIsSet() const;
    void unseteditable();
    void setEditable(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string typeId_;
    bool typeIdIsSet_;
    std::string typeDesc_;
    bool typeDescIsSet_;
    int32_t vmrMode_;
    bool vmrModeIsSet_;
    int32_t count_;
    bool countIsSet_;
    int64_t expireDate_;
    bool expireDateIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    int32_t status_;
    bool statusIsSet_;
    bool editable_;
    bool editableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryResourceResultDTO_H_
