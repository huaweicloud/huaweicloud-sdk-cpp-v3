
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModResourceDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModResourceDTO_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  ModResourceDTO
    : public ModelBase
{
public:
    ModResourceDTO();
    virtual ~ModResourceDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModResourceDTO members

    /// <summary>
    /// 资源标识。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 资源类型，企业内ID和TYPE唯一标识一个资源项，若只传资源ID可能会修改多个资源的信息。 - VMR        - 云会议室 - CONF_CALL  - 会议并发数 - HARD_1080P - 1080P硬终端 - HARD_720P  - 720P硬终端 - SOFT       - 软终端用户数 - ROOM       - 大屏软终端 - LIVE       - 直播推流 - RECORD     - 录播空间 - HARD_THIRD_PARTY - 第三方硬终端帐号 - HUAWEI_VISION -智慧屏
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 到期时间。
    /// </summary>

    int64_t getExpireDate() const;
    bool expireDateIsSet() const;
    void unsetexpireDate();
    void setExpireDate(int64_t value);

    /// <summary>
    /// 资源是否被停用。
    /// </summary>

    bool isIsDisabled() const;
    bool isDisabledIsSet() const;
    void unsetisDisabled();
    void setIsDisabled(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    int64_t expireDate_;
    bool expireDateIsSet_;
    bool isDisabled_;
    bool isDisabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ModResourceDTO_H_
