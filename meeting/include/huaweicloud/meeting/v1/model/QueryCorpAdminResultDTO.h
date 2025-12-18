
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryCorpAdminResultDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryCorpAdminResultDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/DeptBasicDTO.h>
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
class HUAWEICLOUD_MEETING_V1_EXPORT  QueryCorpAdminResultDTO
    : public ModelBase
{
public:
    QueryCorpAdminResultDTO();
    virtual ~QueryCorpAdminResultDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryCorpAdminResultDTO members

    /// <summary>
    /// 用户UUID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 用户帐号（华为云会议帐号）。
    /// </summary>

    std::string getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const std::string& value);

    /// <summary>
    /// 用户名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 管理员类型。 * 0：默认管理员 * 1：普通管理员 
    /// </summary>

    int32_t getAdminType() const;
    bool adminTypeIsSet() const;
    void unsetadminType();
    void setAdminType(int32_t value);

    /// <summary>
    /// 邮箱地址。
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// 手机号。
    /// </summary>

    std::string getPhone() const;
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::string& value);

    /// <summary>
    /// [[手机号所属的国家](https://support.huaweicloud.com/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hws)[[手机号所属的国家](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0109.html#ZH-CN_TOPIC_0212714591__table19371178135314)](tag:hk) 。 
    /// </summary>

    std::string getCountry() const;
    bool countryIsSet() const;
    void unsetcountry();
    void setCountry(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeptBasicDTO getDept() const;
    bool deptIsSet() const;
    void unsetdept();
    void setDept(const DeptBasicDTO& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string account_;
    bool accountIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t adminType_;
    bool adminTypeIsSet_;
    std::string email_;
    bool emailIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string country_;
    bool countryIsSet_;
    DeptBasicDTO dept_;
    bool deptIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryCorpAdminResultDTO_H_
