
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResourceDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResourceDTO_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  ResourceDTO
    : public ModelBase
{
public:
    ResourceDTO();
    virtual ~ResourceDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceDTO members

    /// <summary>
    /// 资源标识，不携带则后台自动生成。
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
    /// 类型标识，比如资源类型为vmr，vmr又分为5方，10方等，该参数为vmrPkgId，用来区分子类别，详见如下： - vmr10:ff808081699b56d40169c410d5080179 - vmr50:ff808081699b56cb0169c411a0980152 - vmr100:ff808081699b56cb0169c41167850151 - vmr200:ff808081699b56d40169c410913d0178 - vmr25:ff808081699b56d40169c4111fe5017a - vmr300:ff8080816b9ec3ab016bdff237962e83 - vmr400:ff8080816b9ec475016bdff37efc279f - vmr500:ff8080816b9ec3ab016bdff338542e84
    /// </summary>

    std::string getTypeId() const;
    bool typeIdIsSet() const;
    void unsettypeId();
    void setTypeId(const std::string& value);

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


protected:
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string typeId_;
    bool typeIdIsSet_;
    int32_t count_;
    bool countIsSet_;
    int64_t expireDate_;
    bool expireDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResourceDTO_H_
