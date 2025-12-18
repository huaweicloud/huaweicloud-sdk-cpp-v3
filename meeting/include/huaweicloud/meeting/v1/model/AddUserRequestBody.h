
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddUserRequestBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddUserRequestBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/BaseUser.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  AddUserRequestBody
    : public ModelBase
{
public:
    AddUserRequestBody();
    virtual ~AddUserRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddUserRequestBody members

    /// <summary>
    /// 企业用户名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 后台自动识别是手机还是邮箱，若为手机号，则要求和国家码匹配。 &gt; * 当前中国站点企业支持使用邮箱或手机号进行邀请，手机仅支持+86开头的手机号。 &gt; * 当前国际站点企业仅支持使用邮箱进行邀请。 
    /// </summary>

    std::string getContact() const;
    bool contactIsSet() const;
    void unsetcontact();
    void setContact(const std::string& value);

    /// <summary>
    /// [[手机号所属的国家](https://support.huaweicloud.com/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hws)[[手机号所属的国家](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hk) 。 
    /// </summary>

    std::string getCountry() const;
    bool countryIsSet() const;
    void unsetcountry();
    void setCountry(const std::string& value);

    /// <summary>
    /// 部门编码，若不携带则默认根部门。
    /// </summary>

    std::string getDeptCode() const;
    bool deptCodeIsSet() const;
    void unsetdeptCode();
    void setDeptCode(const std::string& value);

    /// <summary>
    /// 职位。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 通讯录排序等级，序号越低优先级越高。
    /// </summary>

    int32_t getSortLevel() const;
    bool sortLevelIsSet() const;
    void unsetsortLevel();
    void setSortLevel(int32_t value);

    /// <summary>
    /// 备注。
    /// </summary>

    std::string getDesc() const;
    bool descIsSet() const;
    void unsetdesc();
    void setDesc(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string contact_;
    bool contactIsSet_;
    std::string country_;
    bool countryIsSet_;
    std::string deptCode_;
    bool deptCodeIsSet_;
    std::string title_;
    bool titleIsSet_;
    int32_t sortLevel_;
    bool sortLevelIsSet_;
    std::string desc_;
    bool descIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddUserRequestBody_H_
